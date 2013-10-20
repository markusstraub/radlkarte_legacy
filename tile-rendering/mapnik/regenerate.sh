#! /bin/bash

cd inc
rm style-*.xml.inc
./spreadnik.php
./spreadnik_postprocess.sh
cd ..

echo "removing old tiles..."
rm -rf /home/markus/osm/tiles_old
mv /home/markus/osm/tiles /home/markus/osm/tiles_old
mkdir /home/markus/osm/tiles

rm -rf /var/lib/mod_tile/dev/*
rm -rf /var/lib/mod_tile/dev_poi/*


killall /home/markus/osm/src/mod_tile/renderd
/home/markus/osm/src/mod_tile/renderd
# sudo /etc/init.d/apache2 reload

./generate_tiles_multiprocess.py $@
