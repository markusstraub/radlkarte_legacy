// this script requires radlkarte-leaflet.js

var geocoder = new google.maps.Geocoder();

function codeAddress() {
    var address = document.getElementById('address').value;
    geocoder.geocode( { 'address': address, 'region': 'AT'}, function(results, status) {
        if (status == google.maps.GeocoderStatus.OK) {
            map.setView([results[0].geometry.location.lat(),results[0].geometry.location.lng()], 17);
            L.circle([results[0].geometry.location.lat(),results[0].geometry.location.lng()], 20).addTo(map);
        } else {
            alert('Geocode was not successful for the following reason: ' + status);
        }
    });
}

var timeout;

function timeout_trigger() {
    document.getElementById('timeout_text').innerHTML = 'The timeout has been triggered';
}

function timeout_clear() {
    clearTimeout(timeout);
    document.getElementById('timeout_text').innerHTML = 'The timeout has been cleared';
}

function timeout_init(LatLon) {
    timeout = setTimeout('timeout_trigger()', 3000);
    document.getElementById('timeout_text').innerHTML = 'The timeout has been started';
}


//http://www.electrictoolbox.com/using-settimeout-javascript/
