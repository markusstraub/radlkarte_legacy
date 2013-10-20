DELETE FROM planet_osm_line WHERE (railway='construction' AND highway IS NULL) OR highway='construction' OR (construction IS NOT NULL AND highway IS NULL);
DELETE FROM planet_osm_point WHERE NOT construction IS NULL;
DELETE FROM planet_osm_polygon WHERE NOT construction IS NULL;
DELETE FROM planet_osm_line WHERE (railway='proposed' AND highway is NULL) OR highway='proposed' OR (proposed IS NOT NULL AND highway IS NULL);
DELETE FROM planet_osm_line WHERE ((service='driveway' AND access='private') OR footway='sidewalk') AND NOT (bicycle='designated' OR bicycle='official' OR bicycle='yes' OR bicycle='permissive');
UPDATE planet_osm_line SET public_transport='platform' WHERE highway='platform';
UPDATE planet_osm_point
    SET railway='subway_station'
    WHERE osm_id IN (
        SELECT p.osm_id
        FROM planet_osm_point as p, planet_osm_line as l
        WHERE
            p.railway='station' AND
            l.railway='subway' AND
            p.way && l.way AND
            ST_DWithin(p.way, l.way, 0.01)
    );
ALTER TABLE planet_osm_point ALTER COLUMN capacity SET DEFAULT 0;
ALTER TABLE planet_osm_point ALTER COLUMN capacity TYPE integer USING to_number(capacity, '999999999');
