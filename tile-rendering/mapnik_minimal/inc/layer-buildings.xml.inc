<Style name="buildings">
    <Rule>
      &maxscale_zoom14;
      <PolygonSymbolizer>
         <CssParameter name="fill">#d1aadd</CssParameter>
         <CssParameter name="fill-opacity">1</CssParameter>
      </PolygonSymbolizer>
     </Rule>
</Style>


<Layer name="buildings" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name from &prefix;_polygon
       where
          building is not null
          and (
            amenity in ('college','university','library','arts_centre','cinema','townhall','station')
            or leisure in ('stadium')
            or (tourism in ('attraction') and 
            not (
              (amenity in ('place_of_worship','hospital','theatre')
              or tourism in ('museum')))
            )
          )
       order by z_order,way_area desc) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="buildings2" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name,amenity,religion,tourism from &prefix;_polygon
       where
          building is not null
          and (amenity in ('place_of_worship','hospital','theatre')
          or tourism in ('museum'))
       order by z_order,way_area desc) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
