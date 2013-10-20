#!/bin/bash

echo "##### download current austria-extract..."
rm austria.osm.bz2
wget http://download.geofabrik.de/openstreetmap/europe/austria.osm.bz2

echo "##### import new extract into db..."
/home/markus/osm/bin/osm2pgsql/osm2pgsql -S /home/markus/osm/bin/osm2pgsql/default.style --slim -c -d gis -C 2048 austria.osm.bz2
psql -f /home/markus/osm/bin/trunk/cleanGraph.sql gis

echo "##### empty cache..."
rm -rf /var/lib/mod_tile/stable/*
rm -rf /var/lib/mod_tile/stable_poi/*
rm -rf /var/lib/mod_tile/minimal/*

echo "##### restart rendering daemon..."
killall /home/markus/osm/src/mod_tile/renderd
/home/markus/osm/src/mod_tile/renderd
#sudo /etc/init.d/apache2 reload

date +'%Y-%m-%d %H:%M:%S' >> /tmp/austriaUpdates
echo "##### finished..."
