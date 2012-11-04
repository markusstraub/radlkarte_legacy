function setMapHeight()
{
    // requires initialized rkGlobal.map
    // make rkGlobal.map take up all available space (taken from https://github.com/elidupuis/leaflet.zoomfs)
    var container = rkGlobal.map._container;
    container.style.position = 'fixed';
    container.style.left = 0;
    container.style.top = 0;
    container.style.width = '100%';
    container.style.height = '100%';
    L.DomUtil.addClass(container, 'leaflet-fullscreen');
    rkGlobal.map.invalidateSize();
}

/** zoom to point of origin (of event)*/
function zoomByAbout(e) {
    var x = .5*$('#map').width(),
        y = .5*$('#map').height(),
        mouse_point = e.containerPoint,
        new_center_point = new L.Point((x + mouse_point.x) / 2, (y + mouse_point.y) / 2),
        new_center_location = rkGlobal.map.containerPointToLatLng(new_center_point);
               
    rkGlobal.map.setView(new_center_location, rkGlobal.map.getZoom() + 1); 
}

// ----------------------------------------------------------- geojson functions

function loadGeoJson() {
    // load GeoJSON layer (in separate thread)
    $.getJSON("data/wege-durch-wien.geojson", function(data) {
        // add all geojson objects to the layer and style them
        var cnt = 0;
        var cntGood = 0;
        rkGlobal.layer = L.geoJson(data, {
            style: function(feature) {
                cnt++;
                // ignore invalid entries
                if(feature.geometry.type != "LineString" || feature.properties == undefined) {
                    return;
                } else {
                    cntGood++;
                    return styleGeoJson(feature);
                }
            }
        }).addTo(rkGlobal.map);
        debug('styled geojson. ' + cnt + ' total, ' + cntGood + ' styled');
        
        // filter out empty/invalid objects & put the rest into an array
        var cnt = 0;
        var cntGood = 0;
        rkGlobal.layer.eachLayer(function (layer) {
            cnt++;
            if(layer.feature.geometry.type != "LineString" || layer.feature.properties == undefined || layer.feature.geometry.coordinates.length == 0) {
                debug("removing feature:");
                debug(layer.feature);
                rkGlobal.layer.removeLayer(layer);
                return;
            }
            rkGlobal.jsonLayers.push(layer);
            rkGlobal.jsonLayersVisible.push(true);
            cntGood++;
        });
        debug(rkGlobal.jsonLayers);
        debug(rkGlobal.jsonLayersVisible);
        debug('finished loading geojson. ' + cnt + ' total, ' + cntGood + ' in result');
        // init-filtering
        filter(rkGlobal.currentFilter);
    });
}

/** 
expects: a feature (linestring) with properties
returns: a style for the feature depending on the properties
*/
function styleGeoJson(feature) {
    var currentZoom = (rkGlobal.map.getZoom()-10)*2.4;
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
        rkGlobal.map.addLayer(rkGlobal.layer);
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
    if (rkGlobal.map.getZoom() < 15) {
        if(properties.detail == 'local')
            return false;
         if(rkGlobal.map.getZoom() < 14 && properties.detail == 'regional')
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
        rkGlobal.map.removeLayer(rkGlobal.layer);
        rkGlobal.showLayer = false;
    }
}

function showMarkerCircle(latlng, radius, timeoutSeconds) {
    // disable old hiding timeout
    clearTimeout(rkGlobal.markerCircleTimeout);
    
    if(rkGlobal.markerCircle == undefined)
        rkGlobal.markerCircle = L.circle(latlng, radius).addTo(rkGlobal.map);
    else {
        rkGlobal.markerCircle.setLatLng(latlng);
        rkGlobal.markerCircle.setRadius(radius);
        if(!rkGlobal.map.hasLayer(rkGlobal.markerCircle)) {
            rkGlobal.map.addLayer(rkGlobal.markerCircle);
        }
    }
    
    rkGlobal.markerCircleTimeout = setTimeout('hideMarkerCircle()', timeoutSeconds * 1000);
}

function hideMarkerCircle() {
    rkGlobal.map.removeLayer(rkGlobal.markerCircle);
}

function onLocationFound(e) {
    var radius = e.accuracy / 2;
    showMarkerCircle(e.latlng, radius, 10);

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


	var zoom = Math.min(rkGlobal.map.getBoundsZoom(bounds), options.maxZoom);
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
    rkGlobal.map.locate({
        watch: false,
        enableHighAccuracy: true,
        setView: false,
        maxZoom: 16
    });
}

function toggleLocationTracking() {
    if(rkGlobal.tracking) {
        rkGlobal.map.stopLocate();
    } else {
        rkGlobal.map.locate({
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

    rkGlobal.map.addControl(legend);

}

function addGpsControl() {
    var gpsControl = L.control({position: 'topleft'});
    gpsControl.onAdd = function (map) {
        var div = L.DomUtil.create('div', 'leaflet-control-zoom leaflet-control');
        var inner = '<a title="Go to current location" href="#" onclick="getLocationOnce();" class="leaflet-control-gps"></a>';
        div.innerHTML += inner;
        return div;
    };
    rkGlobal.map.addControl(gpsControl);
}

function getURLParameter(name) {
    return decodeURI(
        (RegExp(name + '=' + '(.+?)(&|$)').exec(location.search)||[,null])[1]
    );
}



// ------------------------------------------------------------------------ main

function initMap() {
    // set up rkGlobal.map
    rkGlobal.map = L.map('map', {
        doubleClickZoom: false,
        keyboardPanOffset: 200,
        zoomControl: false,
        zoom: 14, 
        center: [48.21,16.37],
        maxBounds: [[46.3,9.4], [49.1,17.3]]
    });
    setMapHeight();
    var hash = new L.Hash(rkGlobal.map);

    
    // add layers
    var rkAttrib = 'Map data &copy; <a href="http://www.openstreetmap.org" target="_blank">OpenStreetMap</a> contributors, Rendering &copy; Markus Straub, Wege durch Wien &copy; Heinrich Flickschuh & Markus Straub';
    var osmAttrib = 'Map data &copy; <a href="http://www.openstreetmap.org" target="_blank">OpenStreetMap</a> contributors, Wege durch Wien &copy; Heinrich Flickschuh & Markus Straub';
    var emptyAttrib = 'Wege durch Wien &copy; Heinrich Flickschuh & Markus Straub';
    
    var rkLayer = L.tileLayer('http://radlkarte.at/stable/{z}/{x}/{y}.png', {attribution: rkAttrib}).addTo(rkGlobal.map);
    var rkLowLayer = L.tileLayer('http://radlkarte.at/minimal_radl/{z}/{x}/{y}.png', {attribution: rkAttrib});
    var osmLayer = L.tileLayer('http://a.tile.openstreetmap.org/{z}/{x}/{y}.png', {attribution: osmAttrib});
    var poiLayer = L.tileLayer('http://radlkarte.at/stable_poi/{z}/{x}/{y}.png').addTo(rkGlobal.map);
    if(getURLParameter("dev") == "yes") {
        rkGlobal.map.removeLayer(rkLayer);
        rkGlobal.map.removeLayer(poiLayer);
        var rkDevLayer = L.tileLayer('http://radlkarte.at/dev/{z}/{x}/{y}.png', {attribution: rkAttrib}).addTo(rkGlobal.map);
        var poiDevLayer = L.tileLayer('http://radlkarte.at/dev_poi/{z}/{x}/{y}.png').addTo(rkGlobal.map);
    }
    
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

    if(getURLParameter("dev") == "yes") {
        baseLayers["Radlkarte_DEV"] = rkDevLayer;
        overlays["Symbole_DEV"] = poiDevLayer;
    }
    
    addOverlayControl();    
    L.control.layers(baseLayers, overlays).addTo(rkGlobal.map);
    //L.control.layers(baseLayers, overlays, {collapsed: false}).addTo(rkGlobal.map);
    L.control.zoom({position : 'topleft'}).addTo(rkGlobal.map);
    addGpsControl();

    // callbacks
    window.onresize = setMapHeight();
    rkGlobal.map.on('dblclick', function(e) { zoomByAbout(e) });
    rkGlobal.map.on('zoomend', function(e) { onZoom(); });
    
    
    // load overlay & control
    loadGeoJson();
    
    // register tracking
    rkGlobal.map.on('locationfound', onLocationFound);
    rkGlobal.map.on('locationerror', onLocationError);
    //toggleLocationTracking();
    
    // extra behaviour on small screens
    if($(window).width() < 800) {
        rkGlobal.map.removeControl(rkGlobal.map.attributionControl);
        
    }
}

