<!-- ripped from standard osm.xml -->

<Style name="leisure">
    <Rule>
      <Filter>[landuse] = 'forest' or [natural] = 'forest' or [natural] = 'wood' or [natural] = 'scrub' or [natural] = 'wetland'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#8dc56c</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[landuse] = 'forest' or [natural] = 'forest' or [natural] = 'wood'</Filter>
      &maxscale_zoom15;
      <PolygonPatternSymbolizer file="&symbols;/forest.png" />
    </Rule>
    <Rule>
      <Filter>[landuse]='field' or [natural]='field' or [landuse] = 'vineyard' or [landuse] = 'cemetery' or [landuse] = 'grave_yard' or [leisure] = 'park' or [leisure] = 'garden' or [landuse]='meadow' or [landuse]='recreation_ground'</Filter>
      <PolygonSymbolizer>
        <CssParameter name="fill">#d0ed9c</CssParameter>
     </PolygonSymbolizer>
    </Rule>
</Style>


<Layer name="leisure" status="on" srs="&osm2pgsql_projection;">
    <StyleName>leisure</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aeroway,amenity,landuse,leisure,man_made,military,"natural",power,tourism,name,highway,
       case when religion in ('christian','jewish') then religion else 'INT-generic'::text end as religion
       from &prefix;_polygon
       where landuse is not null
          or leisure is not null
          or aeroway in ('apron','aerodrome')
          or amenity in ('parking','university','college','school','hospital','kindergarten','grave_yard')
          or military in ('barracks','danger_area')
          or "natural" in ('field','beach','desert','heath','mud','wood','sand','scrub')
          or power in ('station','sub_station','generator')
          or tourism in ('attraction','camp_site','caravan_site','picnic_site','zoo')
          or highway in ('services','rest_area')
       order by z_order,way_area desc
      ) as leisure
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
