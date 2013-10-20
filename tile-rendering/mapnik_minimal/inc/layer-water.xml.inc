<Style name="water_areas">
    <Rule>
      <Filter>[waterway] = 'mill_pond' or [waterway]='canal' or [landuse] = 'water' or [landuse] = 'basin' or [natural] = 'water' or [natural] = 'lake' or [landuse] = 'reservoir' or [waterway] = 'riverbank' or [waterway] = 'dock'</Filter>
      &maxscale_zoom6;
      <PolygonSymbolizer>
        <CssParameter name="fill">#d4e2f8</CssParameter>
     </PolygonSymbolizer>
    </Rule>
</Style>

<Style name="water_lines">
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom11;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom12;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule><Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom17;
      &minscale_zoom17;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      &maxscale_zoom18;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>[waterway]='canal' and not [disused]='yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='canal' and not [disused]='yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>

    <Rule>
      <Filter>[waterway]='stream' or [waterway]='ditch' or [waterway]='drain'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#d4e2f8</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Layer name="water_areas" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water_areas</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,"natural",waterway,landuse,name
      from &prefix;_polygon
      where waterway in ('dock','mill_pond','riverbank','canal')
         or landuse in ('reservoir','water','basin')
         or "natural" in ('lake','water','land','scrub','glacier','mud')
      order by z_order,way_area desc
      ) as water_areas</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="water_lines" status="on" srs="&osm2pgsql_projection;">
    <StyleName>water_lines</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,waterway,disused,lock,name,
      case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
      from &prefix;_line
      where waterway in ('weir','river','canal','derelict_canal','stream','drain','ditch','wadi')
        and (bridge is null or bridge not in ('yes','true','1','aqueduct'))
        and (tunnel is null or tunnel not in ('yes','true','1'))
      order by z_order
      ) as water_lines</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
