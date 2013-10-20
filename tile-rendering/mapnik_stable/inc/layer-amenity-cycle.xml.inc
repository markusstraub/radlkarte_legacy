<Style name="cycle-points">
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='bicycle_rental' and not [network]='Citybike Wien'</Filter>
      <PointSymbolizer file="&symbols;/rental_bicycle_green.p.20.png" allow_overlap="true" />
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#26c226" halo_radius="1" wrap_width="60" dy="8" allow_overlap="true" />
    </Rule>    
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[amenity]='bicycle_rental' and [network]='Citybike Wien'</Filter>
      <PointSymbolizer file="&symbols;/citybike.p.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom17;
      <Filter>[amenity]='bicycle_rental' and [network]='Citybike Wien'</Filter>
      <PointSymbolizer file="&symbols;/citybike.p.20.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom18;
      &minscale_zoom18;
      <Filter>[amenity]='bicycle_rental' and [network]='Citybike Wien'</Filter>
      <PointSymbolizer file="&symbols;/citybike.p.24.png" allow_overlap="true" />
    </Rule>
    <Rule>
    &maxscale_zoom17;
    <Filter>[highway]='traffic_signals'</Filter>
    <PointSymbolizer file="&symbols;/traffic_light.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='fuel'</Filter>
      <PointSymbolizer file="&symbols;/fuel.p.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='toilets'</Filter>
      <PointSymbolizer file="&symbols;/toilets.p.20.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17; 
      <Filter>[amenity]='drinking_water'</Filter> 
      <PointSymbolizer file="&symbols;/food_drinkingtap.p.20.png" allow_overlap="true" /> 
    </Rule> 
    <Rule>
      &maxscale_zoom16;
      <Filter>[tourism]='viewpoint'</Filter>
      <PointSymbolizer file="&symbols;/view_point.p.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[shop]='bicycle'</Filter>
      <PointSymbolizer file="&symbols;/shop_bicycle_green.p.16.png" allow_overlap="true" />
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#26c226" halo_radius="1" wrap_width="60" dy="8" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='bicycle_parking' and [capacity] &gt; 14</Filter>
      <PointSymbolizer file="&symbols;/bicycle_parking.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bicycle_parking' and [capacity] &gt; 14</Filter>
      <TextSymbolizer name="capacity" fontset_name="book-fonts" size="9" fill="#26c226" halo_radius="1" wrap_width="60" dy="5" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bicycle_parking' and [capacity] &lt; 15</Filter>
      <PointSymbolizer file="&symbols;/bicycle_parking.png" allow_overlap="true" />
    </Rule>
</Style>
<!-- [vending]='bicycle_tube' --> 

<Layer name="amenity-cycle-points" status="on" srs="&osm2pgsql_projection;">
    <StyleName>cycle-points</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,amenity,shop,tourism,highway,man_made,access,religion,waterway,lock,historic,leisure,network,name,capacity
      from &prefix;_point
      where amenity is not null
         or shop is not null
         or tourism in ('alpine_hut','camp_site','caravan_site','guest_house','hostel','hotel','motel','museum','viewpoint','bed_and_breakfast','information')
         or highway in ('bus_stop','traffic_signals','ford')
         or man_made in ('mast','water_tower')
         or historic in ('memorial','archaeological_site')
         or waterway='lock'
         or lock='yes'
         or leisure='playground'
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="amenity-cycle-points-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>cycle-points</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,amenity,shop,tourism,highway,man_made,access,religion,waterway,lock,historic,leisure,network,name,0 as capacity
      from &prefix;_polygon
      where amenity is not null
         or shop is not null
         or tourism in ('alpine_hut','camp_site','caravan_site','guest_house','hostel','hotel','motel','museum','viewpoint','bed_and_breakfast','information')
         or highway in ('bus_stop','traffic_signals')
         or man_made in ('mast','water_tower')
         or historic in ('memorial','archaeological_site')
         or leisure='playground'
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
