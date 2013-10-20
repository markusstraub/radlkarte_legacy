#! /bin/bash

echo "updating stylesheet..."
cd inc
#rm style-*.xml.inc
./spreadnik.php
cd ..

echo "removing old tiles..."
rm -rf /var/lib/mod_tile/minimal/*

echo "restarting renderd and apache..."
killall /home/markus/osm/src/mod_tile/renderd
sudo /etc/init.d/apache2 reload
/home/markus/osm/src/mod_tile/renderd

#./generate_tiles_multiprocess.py $@
