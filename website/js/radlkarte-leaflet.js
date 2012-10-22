var map;

var rkGlobal = {}; // global variable for radlkarte properties / data storage
rkGlobal.debug = false;
rkGlobal.currentFilter = 'dangerous';
rkGlobal.jsonLayers = new Array();
rkGlobal.jsonLayersVisible = new Array();
rkGlobal.layer; // radlkarte-overlay layer displaying the geojson objects
rkGlobal.showLayer = true;
rkGlobal.tracking = false;
rkGlobal.markerCirle = undefined;

initMap();

function debug(obj) {
    if(rkGlobal.debug)
        console.log(obj);
}

function setMapHeight()
{
    // requires initialized map
    // make map take up all available space (taken from https://github.com/elidupuis/leaflet.zoomfs)
    var container = map._container;
    container.style.position = 'fixed';
    container.style.left = 0;
    container.style.top = 0;
    container.style.width = '100%';
    container.style.height = '100%';
    L.DomUtil.addClass(container, 'leaflet-fullscreen');
    map.invalidateSize();
}

/** zoom to point of origin */
function zoomByAbout(e) {
    // requires initialized map
    var x = .5*$('#map').width(),
        y = .5*$('#map').height(),
        mouse_point = e.containerPoint,
        new_center_point = new L.Point((x + mouse_point.x) / 2, (y + mouse_point.y) / 2),
        new_center_location = map.containerPointToLatLng(new_center_point);
               
    map.setView(new_center_location, map.getZoom() + 1); 
}

// ----------------------------------------------------------- geojson functions

function loadGeoJson() {
    // load GeoJSON layer (in separate thread)
    $.getJSON("data/wege-durch-wien.geojson", function(data) {
        // add all geojson objects to the layer and style them
        rkGlobal.layer = L.geoJson(data, {
            style: function(feature) { return styleGeoJson(feature); }
        }).addTo(map);
        
        // filter out empty objects & put the rest into an array
        var cnt = 0;
        var cntGood = 0;
        rkGlobal.layer.eachLayer(function (layer) {
            cnt++;
            if(layer.feature.geometry.coordinates.length == 0) {
                rkGlobal.layer.removeLayer(layer);
                return;
            }
            rkGlobal.jsonLayers.push(layer);
            rkGlobal.jsonLayersVisible.push(true);
            cntGood++;
        });
        debug(rkGlobal.jsonLayers);
        debug(rkGlobal.jsonLayersVisible);
        debug('finished loading geojson. ' + cnt + ' total, ' + cntGood + ' displayed');
        
        // init-filtering
        filter(rkGlobal.currentFilter);
    });
}

function styleGeoJson(feature) {
    var currentZoom = (map.getZoom()-10)*2.4;
    // unfortunately there is no easy way to draw arrows for oneways..
    // https://github.com/CloudMade/Leaflet/issues/386
    var onewayDivisionFactor = 1;
    if(feature.properties.oneway == 'yes')
        onewayDivisionFactor = 2.5;
    switch (feature.properties.ambience) {
        case 'premium':   return {color: "#0000FF", weight: currentZoom/onewayDivisionFactor, opacity: 0.5};
        case 'calm':      return {color: "#5500AA", weight: currentZoom/onewayDivisionFactor, opacity: 0.5};
        case 'medium':    return {color: "#AA0055", weight: currentZoom/onewayDivisionFactor, opacity: 0.5}
        case 'stressful': return {color: "#FF0000", weight: currentZoom/onewayDivisionFactor, opacity: 0.5}
    }
}

function onZoom() {
    if(rkGlobal.layer == undefined || rkGlobal.showLayer == false)
        return;
    
    debug('zoomed...');
    // reset style (adapt line width!)
    rkGlobal.layer.setStyle(function(feature) { return styleGeoJson(feature); });
    
    filter(rkGlobal.currentFilter);
}

// --------------------------- functions called by user interacting with website

/** filter connections.
type none = no filtering
type slow = fast network (hide slow links)
type dangerous = safe network (hide dangerous links)
*/
function filter(type) {
    debug('filter: ' + type);
    debug('pre-filter-visibility: ' + rkGlobal.jsonLayersVisible);
    
    //$('div#connections a').removeClass('selected');
    //$('a#filter_'+type).addClass('selected');
    rkGlobal.currentFilter = type;
    
    // display network if previously hidden
    if(!rkGlobal.showLayer) {
        map.addLayer(rkGlobal.layer);
        rkGlobal.showLayer = true;
    }
    
    debug('filter.. (foreach)');
    for(var i=0, len=rkGlobal.jsonLayers.length; i < len; i++){
        var layer = rkGlobal.jsonLayers[i];
        var visible = rkGlobal.jsonLayersVisible[i];
        var shouldBeVisible = getDesiredVisibility(layer, type)
        // debug(layer);
        
        if(shouldBeVisible && !visible) {
            rkGlobal.layer.addLayer(layer);
            rkGlobal.jsonLayersVisible[i] = true;
        } else if (!shouldBeVisible && visible) {
            rkGlobal.layer.removeLayer(layer);
            rkGlobal.jsonLayersVisible[i] = false;
        }
    }
    debug('post-filter-visibility: ' + rkGlobal.jsonLayersVisible);
}


function getDesiredVisibility(layer, networkFilterType) {
    properties = layer.feature.properties
    // filter details (depending on zoom level)
    if (map.getZoom() < 15) {
        if(properties.detail == 'local')
            return false;
         if(map.getZoom() < 14 && properties.detail == 'regional')
            return false;
    }
    
    // filter by requested network type
    if(networkFilterType == 'dangerous' && properties.dangerous == 'yes')
        return false;
    if(networkFilterType == 'slow' && properties.slow == 'yes')
        return false;    
    return true;
}


function hideConnections() {
    debug('hide connections..')
    //$('div#connections a').removeClass('selected');
    //$('a#connHide').addClass('selected');
    if(rkGlobal.showLayer) {
        map.removeLayer(rkGlobal.layer);
        rkGlobal.showLayer = false;
    }
}

function onLocationFound(e) {
    //L.marker(e.latlng).addTo(map);

    var radius = e.accuracy / 2;
    // marker circle only for quite accurate positions
    if(radius > 1000) {
        if(rkGlobal.markerCircle != undefined) {
            map.remove(rkGlobal.markerCircle);
            rkGlobal.markerCircle = undefined;
        }
        //alert("You are within " + radius + " meters from this point (=too far away..)");
    } else { 
        if(rkGlobal.markerCircle == undefined)
            rkGlobal.markerCircle = L.circle(e.latlng, radius).addTo(map);
        else {
            rkGlobal.markerCircle.setRadius(radius);
            rkGlobal.markerCircle.setLatLng(e.latlng);
        }
    }

	// setView ourselves (because we want to have a minZoom)
	var minZoom = 13;
	var latAccuracy = 180 * e.accuracy / 4e7,
		lngAccuracy = latAccuracy * 2,

		lat = e.latlng.lat,
		lng = e.latlng.lng,

		sw = new L.LatLng(lat - latAccuracy, lng - lngAccuracy),
		ne = new L.LatLng(lat + latAccuracy, lng + lngAccuracy),
		bounds = new L.LatLngBounds(sw, ne),

		options = this._locationOptions;


	var zoom = Math.min(map.getBoundsZoom(bounds), options.maxZoom);
	// guarantee minZoom!
	zoom = Math.max(zoom, minZoom);
	this.setView(e.latlng, zoom);
}


function onLocationError(e) {
    //alert(e.message);
}

function getLocationOnce() {
    if(rkGlobal.tracking) {
        // ignore for now..
        return;
    }
    map.locate({
        watch: false,
        enableHighAccuracy: true,
        setView: false,
        maxZoom: 16
    });
}

function toggleLocationTracking() {
    if(rkGlobal.tracking) {
        map.stopLocate();
    } else {
        map.locate({
            watch: true,
            enableHighAccuracy: true,
            setView: false,
            maxZoom: 16
        });
    }
    
    rkGlobal.tracking = !rkGlobal.tracking;
}

function addOverlayControl() {
    var legend = L.control({position: 'topright'});
    legend.onAdd = function (map) {
        var div = L.DomUtil.create('div', 'leaflet-control-layers leaflet-control leaflet-control-layers-expanded');
        var inner = '';
        //inner += '<div class="leaflet-top leaflet-right">';
        //inner += '    <div class="leaflet-control-layers leaflet-control leaflet-control-layers-expanded">';
        inner += '        <form class="leaflet-control-layers-list">';
        inner += '            <div class="leaflet-control-layers-base">';
        inner += '                <label>Wege durch Wien</label>';
        inner += '            </div>';
        inner += '            <div class="leaflet-control-layers-separator"></div>';
        inner += '            <div class="leaflet-control-layers-base">';
        inner += '                <label><input name="leaflet-base-layers" checked="checked" type="radio" onclick="filter(\'dangerous\');">Sichere Wege</label>';
        inner += '                <label><input name="leaflet-base-layers" type="radio" onclick="filter(\'slow\');">Schnelle Wege</label>';
        inner += '                <label><input name="leaflet-base-layers" type="radio" onclick="filter(\'none\');">Alle Wege</label>';
        inner += '                <label><input name="leaflet-base-layers" type="radio" onclick="hideConnections();">Ausblenden</label>';
        inner += '            </div>';
        inner += '        </form>';
        //inner += '    </div>';
        //inner += '</div>';
        div.innerHTML += inner;
        return div;
    };

    map.addControl(legend);

}

function addGpsControl() {
    var gpsControl = L.control({position: 'topleft'});
    gpsControl.onAdd = function (map) {
        var div = L.DomUtil.create('div', 'leaflet-control-zoom leaflet-control');
        var inner = '<a title="Go to current location" href="#" onclick="getLocationOnce();" class="leaflet-control-gps"></a>';
        div.innerHTML += inner;
        return div;
    };
    map.addControl(gpsControl);
}

// ------------------------------------------------------------------------ main

function initMap() {
    // set up map
    map = L.map('map', {
        doubleClickZoom: false,
        keyboardPanOffset: 200,
        zoomControl: false,
        zoom: 14, 
        center: [48.21,16.37],
        maxBounds: [[46.3,9.4], [49.1,17.3]]
    });
    setMapHeight();
    var hash = new L.Hash(map);

    
    // add layers
    var rkAttrib = 'Map data &copy; <a href="http://www.openstreetmap.org" target="_blank">OpenStreetMap</a> contributors, Rendering &copy; Markus Straub, Wege durch Wien &copy; Heinrich Flickschuh & Markus Straub';
    var osmAttrib = 'Map data &copy; <a href="http://www.openstreetmap.org" target="_blank">OpenStreetMap</a> contributors, Wege durch Wien &copy; Heinrich Flickschuh & Markus Straub';
    var emptyAttrib = 'Wege durch Wien &copy; Heinrich Flickschuh & Markus Straub';
    
    var rkLayer = L.tileLayer('http://radlkarte.at/stable/{z}/{x}/{y}.png', {attribution: rkAttrib}).addTo(map);
    var rkLowLayer = L.tileLayer('http://radlkarte.at/minimal_radl/{z}/{x}/{y}.png', {attribution: rkAttrib});
    var osmLayer = L.tileLayer('http://a.tile.openstreetmap.org/{z}/{x}/{y}.png', {attribution: osmAttrib});
    var poiLayer = L.tileLayer('http://radlkarte.at/stable_poi/{z}/{x}/{y}.png').addTo(map);
    var emptyLayer = L.tileLayer('', {attribution: emptyAttrib});

    var baseLayers = {
        "Radlkarte": rkLayer,
        "Radlkarte (Übersicht)": rkLowLayer,
        "OpenStreetMap": osmLayer,
        "Leer": emptyLayer
    };
    
    var overlays = {
        "Symbole": poiLayer
    };
    
    addOverlayControl();    
    L.control.layers(baseLayers, overlays).addTo(map);
    //L.control.layers(baseLayers, overlays, {collapsed: false}).addTo(map);
    L.control.zoom({position : 'topleft'}).addTo(map);
    addGpsControl();

    // callbacks
    window.onresize = setMapHeight();
    map.on('dblclick', function(e) { zoomByAbout(e) });
    map.on('zoomend', function(e) { onZoom(); });
    
    
    // load overlay & control
    loadGeoJson();
    
    // register tracking
    map.on('locationfound', onLocationFound);
    map.on('locationerror', onLocationError);
    //toggleLocationTracking();
    
    // extra behaviour on small screens
    if($(window).width() < 800) {
        map.removeControl(map.attributionControl);
        
    }
}

