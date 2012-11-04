var rkGlobal = {}; // global variable for radlkarte properties / data storage

rkGlobal.map = undefined; // leaflet-map-object
rkGlobal.geocoder = undefined // google geocoder

rkGlobal.debug = false; // debug output will be logged if set to true
rkGlobal.currentFilter = 'dangerous';
rkGlobal.jsonLayers = new Array();
rkGlobal.jsonLayersVisible = new Array();
rkGlobal.layer; // radlkarte-overlay layer displaying the geojson objects
rkGlobal.showLayer = true;
rkGlobal.tracking = false;
rkGlobal.markerCirle = undefined;


function debug(obj) {
    if(rkGlobal.debug)
        console.log(obj);
}
