// ------------------------------------------------------------- overlay control


/** param options: see http://leafletjs.com/reference.html#control */
function addOverlayControl(options) {
    var legend = L.control(options);
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



// -------------------------------------------------------------- search control

//Functions to either disable (onmouseover) or enable (onmouseout) the map's dragging
function controlEnter(e) {
    rkGlobal.map.dragging.disable();
}
function controlLeave() {
    rkGlobal.map.dragging.enable();
}

/** param options: see http://leafletjs.com/reference.html#control */
function addSearchControl(options) {
    var searchControl = L.control(options);
    searchControl.onAdd = function (map) {
        var div = L.DomUtil.create('div', 'leaflet-control-zoom leaflet-control leaflet-clickable');
        var inner = '';
        inner += '<a id="search-button" title="Adresssuche" href="#" onclick="toggleSearchVisibility();" class="leaflet-control-search"></a>';
        inner += '<input id="address" class="search-input" type="textbox" value="Michaelerplatz, Wien" onclick="clickClear(this, \'Michaelerplatz, Wien\')" onblur="clickRecall(this,\'Michaelerplatz, Wien\')"/>';
        inner += '<input class="search-input" type="submit" value="↵" onclick="codeAddress()">';
        div.innerHTML += inner;
        return div;
    };
    rkGlobal.map.addControl(searchControl);
    
    var inputTags = document.getElementsByTagName("input")
    for (var i = 0; i < inputTags.length; i++) {
        inputTags[i].onmouseover = controlEnter;
        inputTags[i].onmouseout = controlLeave;
    }
}



function toggleSearchVisibility() {
    if(rkGlobal.searchVisible)
        $('.search-input').hide(200);
    else
        $('.search-input').show(200);
    rkGlobal.searchVisible = !rkGlobal.searchVisible;
}

function clickClear(thisfield, defaulttext) {
    if (thisfield.value == defaulttext) {
        thisfield.value = "";
    }
}

function clickRecall(thisfield, defaulttext) {
    if (thisfield.value == "") {
        thisfield.value = defaulttext;
    }
}


// ----------------------------------------------------------------- gps control

/** param options: see http://leafletjs.com/reference.html#control */
function addGpsControl(options) {
    var gpsControl = L.control(options);
    gpsControl.onAdd = function (map) {
        var div = L.DomUtil.create('div', 'leaflet-control-zoom leaflet-control');
        var inner = '<a title="Gehe zu aktueller Position" href="#" onclick="getLocationOnce();" class="leaflet-control-gps"></a>';
        div.innerHTML += inner;
        return div;
    };
    rkGlobal.map.addControl(gpsControl);
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
