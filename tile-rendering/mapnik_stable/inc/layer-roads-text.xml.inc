<Style name="roads-text">
    <Rule>
      <Filter>([highway] = 'unclassified' or [highway]='residential') and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="#000" halo_radius="1"  min_distance="18" spacing="750"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="black" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="black" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="black" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="black" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="black" halo_radius="1" placement="line"/>
    </Rule><Rule>
      <Filter>[highway] = 'secondary'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="black" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#000" halo_radius="1"  placement="line" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="11" fill="#000" halo_radius="1"  placement="line" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'unclassified' or [highway] = 'residential' or [highway] = 'pedestrian'  or [highway] = 'living_street'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="#000" halo_radius="1" spacing="300" placement="line" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'unclassified' or [highway] = 'residential' or [highway] = 'pedestrian'  or [highway] = 'living_street'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#000" halo_radius="1" spacing="300" placement="line" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'unclassified' or [highway] = 'residential' or [highway] = 'pedestrian'  or [highway] = 'living_street'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <TextSymbolizer name="name" fontset_name="book-fonts" size="11" fill="#000" halo_radius="1" spacing="400" placement="line" />
    </Rule>
</Style>

<Layer name="planet roads text osm" status="on" srs="&osm2pgsql_projection;">
     <StyleName>roads-text</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,highway,aeroway,name,ref,char_length(ref) as length,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
       from &prefix;_line
       where waterway IS NULL
         and leisure IS NULL
         and landuse IS NULL
         and (name is not null or ref is not null)
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
