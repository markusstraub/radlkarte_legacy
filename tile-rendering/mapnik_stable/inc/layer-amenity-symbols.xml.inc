<Style name="symbols">
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom10;
      <Filter>[aeroway]='airport'</Filter>
      <PointSymbolizer file="&symbols;/airport.p.16.png" />
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="8" fill="#6692da" dy="-12" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[aeroway]='airport'</Filter>
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="9" fill="#6692da" halo_radius="1" wrap_width="0"/>
    </Rule>
<!--    <Rule>
      &maxscale_zoom15;
      <Filter>[highway]='mini_roundabout'</Filter>
      <PointSymbolizer file="&symbols;/mini_round.png" allow_overlap="true"/>
    </Rule> -->
    <Rule>
      &maxscale_zoom16;
      <Filter>[highway]='gate' or [barrier]='gate'</Filter>
      <PointSymbolizer file="&symbols;/gate2.png" allow_overlap="true"/>
    </Rule>
    <Rule> 
 	&maxscale_zoom16; 
 	<Filter>[barrier]='lift_gate'</Filter> 
 	<PointSymbolizer file="&symbols;/liftgate.png" allow_overlap="true"/> 
    </Rule> 
    <Rule>
      &maxscale_zoom16;
      <Filter>[barrier]='bollard' or [barrier]='block'</Filter>
      <PointSymbolizer file="&symbols;/bollard.png" allow_overlap="true"/>
    </Rule>

<!-- stuff for orientation -->

    <Rule>
      &maxscale_zoom12;
      <Filter>[natural]='peak' and </Filter>
      <PointSymbolizer file="&symbols;/peak.png" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[natural]='peak' and </Filter>
      <TextSymbolizer name="name" fontset_name="oblique-fonts" size="10" dy="8" fill="#d08f55" halo_radius="1" wrap_width="60"/>
    </Rule>

    <Rule>
      &maxscale_zoom15;
      <Filter>[natural]='cave_entrance'</Filter>
      <PointSymbolizer file="&symbols;/poi_cave.p.16.png" />
    </Rule>
</Style>

<Layer name="amenity-symbols" status="on" srs="&osm2pgsql_projection;">
    <StyleName>symbols</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_point
      where aeroway in ('airport','aerodrome','helipad')
         or barrier in ('bollard','gate','lift_gate','block')
         or highway in ('mini_roundabout','gate')
         or man_made in ('lighthouse','power_wind','windmill','mast')
         or (power='generator' and power_source='wind')
         or ("natural" = 'peak' and not name is null)
         or "natural" in ('volcano','spring','tree','cave_entrance')
         or railway='level_crossing'
      ) as symbols</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="amenity-symbols-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>symbols</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_polygon
      where aeroway in ('airport','aerodrome','helipad')
         or barrier in ('bollard','gate','lift_gate','block')
         or highway in ('mini_roundabout','gate')
         or man_made in ('lighthouse','power_wind','windmill','mast')
         or (power='generator' and power_source='wind')
         or "natural" in ('peak','volcano','spring','tree')
         or railway='level_crossing'
      ) as symbols</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
