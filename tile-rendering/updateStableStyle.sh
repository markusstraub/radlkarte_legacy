#!/bin/bash

cp mapnik/*.xml mapnik_stable/
cp -r mapnik/inc/*.xml.inc mapnik_stable/inc/
cp -r mapnik/symbols/*.png mapnik_stable/symbols/

rm -rf /var/lib/mod_tile/stable
rm -rf /var/lib/mod_tile/stable_poi

killall /home/markus/osm/src/mod_tile/renderd
/home/markus/osm/src/mod_tile/renderd
# sudo /etc/init.d/apache2 reload
