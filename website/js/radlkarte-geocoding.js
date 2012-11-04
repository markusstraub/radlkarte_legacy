rkGlobal.geocoder = new google.maps.Geocoder();

function codeAddress() {
    var address = document.getElementById('address').value;
    rkGlobal.geocoder.geocode( { 'address': address, 'region': 'AT'}, function(results, status) {
        if (status == google.maps.GeocoderStatus.OK) {
            rkGlobal.map.setView([results[0].geometry.location.lat(),results[0].geometry.location.lng()], 17);
            showMarkerCircle([results[0].geometry.location.lat(),results[0].geometry.location.lng()], 20, 10);
        } else {
            alert('Geocode was not successful for the following reason: ' + status);
        }
    });
}
