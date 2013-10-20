<Style name="style-highways-fill">
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <!-- z14 - z18 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>612840</MinScaleDenominator>
  <!-- z6 - z9 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>612840</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z10 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.4046639232</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.1069958848</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">24</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">36</CssParameter>
   <CssParameter name="stroke">#ffff9b</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>612840</MinScaleDenominator>
  <!-- z9 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>612840</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z10 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>612840</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z10 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.4046639232</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.1069958848</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">24</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">36</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'residential') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'living_street') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.9899405578</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.9849108368</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.4773662551</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.7160493827</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.0740740741</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">15.1111111111</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">22.6666666667</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">34</CssParameter>
   <CssParameter name="stroke">#ffffc3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.9899405578</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.9849108368</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.4773662551</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.7160493827</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.0740740741</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">15.1111111111</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">22.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">34</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2825788752</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.4238683128</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.1358024691</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.7037037037</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">11.5555555556</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">17.3333333333</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">26</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2825788752</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.4238683128</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.1358024691</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.7037037037</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">11.5555555556</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">17.3333333333</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">26</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.8971193416</CssParameter>
   <CssParameter name="stroke">#ffffeb</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.3456790123</CssParameter>
   <CssParameter name="stroke">#ffffeb</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.5185185185</CssParameter>
   <CssParameter name="stroke">#ffffeb</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.7777777778</CssParameter>
   <CssParameter name="stroke">#ffffeb</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14.6666666667</CssParameter>
   <CssParameter name="stroke">#ffffeb</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">22</CssParameter>
   <CssParameter name="stroke">#ffffeb</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.8971193416</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.3456790123</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.5185185185</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.7777777778</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">22</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.633744856</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.950617284</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.9259259259</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">8.8888888889</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">13.3333333333</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">20</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.633744856</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.950617284</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.9259259259</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">8.8888888889</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">13.3333333333</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">20</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'residential') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'residential') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'residential') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'residential') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'residential') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.5555555556</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.3333333333</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">8</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">12</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.5555555556</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.3333333333</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">8</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">12</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'footway' or [highway] = 'cycleway' or [highway] = 'bridleway') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#f1eee8</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
