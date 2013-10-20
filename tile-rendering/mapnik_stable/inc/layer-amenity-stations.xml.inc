<Style name="stations">
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[railway]='subway_station'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='subway_station'</Filter>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#66f" dy="5" halo_radius="1" wrap_width="45"/>
      <PointSymbolizer file="&symbols;/station_small.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[railway]='subway_station'</Filter>
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="9" fill="#66f" dy="10" halo_radius="1" wrap_width="55"/>
      <PointSymbolizer file="&symbols;/ubahn.p.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom17;
      <Filter>[railway]='subway_station'</Filter>
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#66f" dy="12" halo_radius="1" wrap_width="65"/>
      <PointSymbolizer file="&symbols;/ubahn.p.20.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[railway]='subway_station'</Filter>
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="11" fill="#66f" dy="14" halo_radius="1" wrap_width="75"/>
      <PointSymbolizer file="&symbols;/ubahn.p.24.png" allow_overlap="true" />
    </Rule>

    <Rule>
      &maxscale_zoom18;
      <Filter>[railway]='station'</Filter>
      <PointSymbolizer file="&symbols;/station.png" />
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="11" fill="#66f" dy="10" halo_radius="1" wrap_width="75"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom17;
      <Filter>[railway]='station'</Filter>
      <PointSymbolizer file="&symbols;/station.png" />
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#66f" dy="10" halo_radius="1" wrap_width="75"/>
    </Rule>
    <Rule>
      &minscale_zoom14;
      &maxscale_zoom15;
      <Filter>[railway]='station'</Filter>
      <PointSymbolizer file="&symbols;/station_small.png" />
      <TextSymbolizer name="name" fontset_name="bold-fonts" size="9" fill="#66f" dy="8" halo_radius="1" wrap_width="55"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      <Filter>[railway]='station'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" />
    </Rule>






    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='halt' or [railway]='tram_stop' or [aerialway]='station' or [highway]='bus_stop'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway] ='halt' or [railway]='tram_stop' or [aerialway]='station' or [highway]='bus_stop'</Filter>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#66f" dy="5" halo_radius="1" wrap_width="55"/>
      <PointSymbolizer file="&symbols;/station.png" />
    </Rule>

    <Rule>
      &maxscale_zoom18;
      <Filter>[railway]='subway_entrance'</Filter>
      <PointSymbolizer file="&symbols;/walking.n.12.png" />
    </Rule>
</Style>

<Layer name="amenity-stations" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name,railway,aerialway,highway
      from &prefix;_point
          where (
            railway in ('subway_station','station','halt','tram_stop','subway_entrance')
            or aerialway='station'
            or highway='bus_stop'
          ) and (not disused='yes' or disused is null)
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="amenity-stations-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name,railway,aerialway,highway
      from &prefix;_polygon
          where (
            railway in ('subway_station','station','halt','tram_stop','subway_entrance')
            or aerialway='station'
            or highway='bus_stop'
          ) and (not disused='yes' or disused is null)
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
