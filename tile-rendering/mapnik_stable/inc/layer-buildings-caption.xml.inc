<Style name="buildings-with-name">
    <Rule>
      &maxscale_zoom16;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" halo_radius="1" wrap_width="55"/>
    </Rule>
</Style>

<Style name="buildings-with-symbol-and-text">
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='cinema'</Filter>
      <PointSymbolizer file="&symbols;/cinema.p.24.png"  allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='hospital'</Filter>
      <PointSymbolizer file="&symbols;/hospital.p.16.png"  allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[tourism]='information'</Filter>
      <PointSymbolizer file="&symbols;/information.p.16.png"  allow_overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[tourism]='museum'</Filter>
      <PointSymbolizer file="&symbols;/museum.p.16.png"  allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='theatre'</Filter>
      <PointSymbolizer file="&symbols;/theatre.p.20.png"  allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'christian'</Filter>
      <PointSymbolizer file="&symbols;/christian3.p.14.png" allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'muslim'</Filter>
      <PointSymbolizer file="&symbols;/islamic3.p.16.png" allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'sikh'</Filter>
      <PointSymbolizer file="&symbols;/sikh3.p.16.png" allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'jewish'</Filter>
      <PointSymbolizer file="&symbols;/jewish3.p.16.png" allow_overlap="true"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship'</Filter>
      <PointSymbolizer file="&symbols;/place_of_worship3.p.16.png" allow_overlap="false"/>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#803c95" dy="10" halo_radius="1" wrap_width="55"/>
     </Rule>
</Style>
<Layer name="buildings-with-name" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings-with-name</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name from &prefix;_polygon
       where
          building is not null
          and (
            (amenity in ('college','university','library','arts_centre','cinema','townhall','station')
            or leisure in ('stadium')
            or (tourism in ('attraction'))) and 
            (
              (not amenity in ('place_of_worship','hospital','theatre')
              and not tourism in ('museum'))
            )
          )
       order by z_order,way_area desc) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="buildings-with-symbol-and-text" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings-with-symbol-and-text</StyleName>
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
