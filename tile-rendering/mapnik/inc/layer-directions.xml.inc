<Style name="directions">
    <Rule>
      <Filter>not ([cycleway] = 'opposite' or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane'  or [cycleway:left] = 'track'  or [cycleway:left] = 'share_busway')</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#000000</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,14,9,17</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#000000</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,14,8,18</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#000000</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,20,1,19</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#000000</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,19,1,20</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#000000</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,18,1,21</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#000000</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,17,1,22</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
    </Rule>
<!--
    <Rule>
      <Filter>[cycleway] = 'opposite' or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane'  or [cycleway:left] = 'track'  or [cycleway:left] = 'share_busway'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#00BB00</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,6,8,26</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#00BB00</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,7,7,26</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#00BB00</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,8,1,31</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#00BB00</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,9,1,30</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#00BB00</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,10,1,29</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#00BB00</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,11,1,28</CssParameter>
        <CssParameter name="stroke-opacity">0.2</CssParameter>
      </LineSymbolizer>
    </Rule>
-->
</Style>

<Layer name="directions" status="on" srs="&osm2pgsql_projection;">
     <StyleName>directions</StyleName>
     <Datasource>
      <Parameter name="table">
      (SELECT cycleway,"cycleway:left",way,
       CASE WHEN oneway IN ('yes','true','1') THEN 'yes'::text else oneway end AS oneway
       FROM &prefix;_line
       WHERE oneway IN ('yes','true','1')
         AND highway IN ('primary','primary_link','secondary','secondary_link','tertiary','unclassified','road','residential','service','cycleway')
      ) AS directions
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
