<Style name="style-highways-fill">
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <!-- z14 - z18 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>612840</MinScaleDenominator>
  <!-- z9 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
) or 
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>612840</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z10 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'residential' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
   ([access] = 'noCycle') )
) or 
( ([highway] = 'trigger_cycleForbidden') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'living_street' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
   ([access] = 'noCycle') )
) or 
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    not ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) or 
   ([access] = 'noCycle') )
 ) or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
) or 
( ([highway] = 'trigger_cycleForbidden') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>612840</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z10 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3266270386</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.9899405578</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.9849108368</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.4773662551</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.7160493827</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.0740740741</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">15.1111111111</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">22.6666666667</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">34</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'residential' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3266270386</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">34</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
) or 
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.8728852309</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.8093278464</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.2139917695</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.3209876543</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.4814814815</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14.2222222222</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">21.3333333333</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">32</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.8728852309</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.8093278464</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.2139917695</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.3209876543</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.4814814815</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14.2222222222</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">21.3333333333</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">32</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.8728852309</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.8093278464</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.2139917695</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.3209876543</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.4814814815</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14.2222222222</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">21.3333333333</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">32</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2825788752</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.4238683128</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.1358024691</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.7037037037</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">11.5555555556</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">17.3333333333</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">26</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2825788752</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.4238683128</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.1358024691</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.7037037037</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">11.5555555556</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">17.3333333333</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">26</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.8971193416</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.3456790123</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.5185185185</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.7777777778</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14.6666666667</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">22</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.8971193416</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.3456790123</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.5185185185</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.7777777778</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14.6666666667</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">22</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.633744856</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.950617284</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.9259259259</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">8.8888888889</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">13.3333333333</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">20</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'residential') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'residential') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'residential') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'residential') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'residential') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'residential') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'service') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'service') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'service') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'service') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'service') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
( ([highway] = 'service') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.1481481481</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.2222222222</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.3333333333</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'living_street') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.1481481481</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'living_street') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.2222222222</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'living_street') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.3333333333</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'living_street') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.1481481481</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.2222222222</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">9.3333333333</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'living_street') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">14</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    not ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) or 
   ([access] = 'noCycle') )
 ) or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.962962963</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    not ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) or 
   ([access] = 'noCycle') )
 ) or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.4444444444</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    not ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) or 
   ([access] = 'noCycle') )
 ) or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.6666666667</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    not ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) or 
   ([access] = 'noCycle') )
 ) or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.962962963</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.4444444444</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.6666666667</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ( not ([access] = 'noCycle') and ( 
    ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.962962963</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.4444444444</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6.6666666667</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">10</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
   ([access] = 'noCycle') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z13 - z14 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
 ( not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z13 - z14 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'steps') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') or 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z13 - z14 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
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
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'steps') and ( 
 ( ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') and ( 
   not ([access] = 'noCycle') )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke">#F6F6F6</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
