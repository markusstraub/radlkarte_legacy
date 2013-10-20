<Style name="style-highways-area-fill">
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <!-- z6 - z18 -->
  <Filter>
([highway] = 'motorway' or [highway] = 'trunk')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#ffff9b</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
([highway] = 'motorway_link' or [highway] = 'trunk_link')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#f1eee8</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
([highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#f1eee8</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <!-- z11 - z18 -->
  <Filter>
([highway] = 'motorway_link' or [highway] = 'trunk_link')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#ffffaf</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
([highway] = 'primary' or [highway] = 'primary_link')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
([highway] = 'secondary' or [highway] = 'secondary_link')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
([highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
([highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'steps')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
([highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'steps')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <!-- z15 - z18 -->
  <Filter>
([highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway' or [highway] = 'steps')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <!-- z11 - z18 -->
  <Filter>
([highway] = 'primary' or [highway] = 'primary_link')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#ffffc3</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
([highway] = 'secondary' or [highway] = 'secondary_link')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#ffffd7</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <!-- z13 - z18 -->
  <Filter>
([highway] = 'tertiary')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#ffffeb</CssParameter>
  </PolygonSymbolizer>
 </Rule>
</Style>
