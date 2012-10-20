the network for radlkarte.at is tagged as follows:

every line must be tagged with ambience.
optionally it can be defined as
- a oneway
- dangerous (won't be shown in the 'safe network')
- slow (won't be shown in the 'fast network')
- detail (local details are hidden for zoom 15 or lower,
          regional details are hidden for zoom 14 or lower)

ambience         = stressful | medium | calm | premium
oneway    (opt.) = yes
dangerous (opt.) = yes
slow      (opt.) = yes
detail    (opt.) = local | regional 

GOAL:
nur wichtige verbindungen durch wien
oder ruhigere alternativen zu stressigen verbindungen

    premium: superschöne strecken (sicher, angenehm, leise,..) e.g. Prater Hauptallee, Donauinsel
    calm: a child should be able to cycle here alone. e.g. segregated cycleways or very low traffic at low speeds. may still be noisy (e.g. next to big road if separated properly)
    medium: 'the rest'
    stressful: stressful even for experienced cyclists. e.g. very high traffic roads, lots of lorries, dangerously narrow bike lane next to parked cars and a high traffic volume


--------------------------------------------------------------------------------

zoom 16 ~ "grätzel/bezirksansicht" = stufe mit allen details
zoom 15 ~ mehrere bezirke auf einmal, erste ausdünnung nötig
zoom 14 ~ halb-wien, zweite ausdünnung nötig
zoom 13 ~ wien+umgebung

(im moment verschoben um -1 zoomstufe)

--------------------------------------------------------------------------------

Citybike coordinates as GeoJSON:
select ST_AsGeoJSON(ST_Transform(ST_Union(way),4326)) from planet_osm_point where amenity='bicycle_rental' and lower(network)='citybike wien';

48.30,17.5

ST_Transform(geometry g1, integer srid)
4000000000

INSERT INTO planet_osm_line (osm_id, way, highway, railway, oneway, cycleway) VALUES (...);


DELETE FROM planet_osm_line WHERE osm_id >= 2000000000;

INSERT INTO planet_osm_line (osm_id, way, highway) VALUES (2000000000, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3000,17.501 48.3000)', 4326),900913), 'motorway');
INSERT INTO planet_osm_line (osm_id, way, highway) VALUES (2000000001, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3005,17.501 48.3005)', 4326),900913), 'primary');
INSERT INTO planet_osm_line (osm_id, way, highway) VALUES (2000000003, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3010,17.501 48.3010)', 4326),900913), 'secondary');
INSERT INTO planet_osm_line (osm_id, way, highway) VALUES (2000000004, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3015,17.501 48.3015)', 4326),900913), 'tertiary');
INSERT INTO planet_osm_line (osm_id, way, highway) VALUES (2000000005, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3020,17.501 48.3020)', 4326),900913), 'residential');
INSERT INTO planet_osm_line (osm_id, way, highway) VALUES (2000000006, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3025,17.501 48.3025)', 4326),900913), 'track');
INSERT INTO planet_osm_line (osm_id, way, railway) VALUES (2000000007, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3030,17.501 48.3030)', 4326),900913), 'rail');

INSERT INTO planet_osm_line (osm_id, way, highway, oneway) VALUES (2000000100, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3100,17.501 48.3100)', 4326),900913), 'residential', true);
INSERT INTO planet_osm_line (osm_id, way, highway, railway) VALUES (2000000102, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3105,17.501 48.3105)', 4326),900913), 'residential', 'tram');

INSERT INTO planet_osm_line (osm_id, way, highway) VALUES (2000000002, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3200,17.501 48.3200)', 4326),900913), 'cycleway');
INSERT INTO planet_osm_line (osm_id, way, highway, cycleway) VALUES (2000000200, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3205,17.501 48.3205)', 4326),900913), 'secondary', 'track');
INSERT INTO planet_osm_line (osm_id, way, highway, cycleway) VALUES (2000000202, ST_Transform(ST_LineFromText('LINESTRING(17.5 48.3210,17.501 48.3210)', 4326),900913), 'secondary', 'lane');

