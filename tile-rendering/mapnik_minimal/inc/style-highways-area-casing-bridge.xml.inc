<Style name="style-highways-area-casing-bridge">
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#aaa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#aaa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#aaa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#aaa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#aaa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <!-- z15 - z18 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#aaa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
