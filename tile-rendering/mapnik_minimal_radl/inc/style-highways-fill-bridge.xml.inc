<Style name="style-highways-fill-bridge">
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk') and ( 
   ([access] = 'noCycle') )
) or 
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ( not ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
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
) or 
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( not ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
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
) or 
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( not ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
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
) or 
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
  ( not ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
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
) or 
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
  ( not ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <!-- z14 - z18 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
   ([access] = 'noCycle') )
) or 
( ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'trigger_cycleForbidden' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway' or [highway] = 'steps') and ( 
  ( not ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>612840</MinScaleDenominator>
  <!-- z9 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
) or 
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>612840</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z10 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'residential' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
) or 
( ([highway] = 'trigger_cycleForbidden') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian' or [highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
) or 
( ([highway] = 'trigger_cycleForbidden') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>612840</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z10 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1.3266270386</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1.9899405578</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.9849108368</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4.4773662551</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">6.7160493827</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">10.0740740741</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">15.1111111111</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">22.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">34</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'service' or [highway] = 'living_street' or [highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">1.8728852309</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">2.8093278464</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">4.2139917695</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">6.3209876543</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">9.4814814815</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">14.2222222222</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">21.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffefaf</CssParameter>
   <CssParameter name="stroke-width">32</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1.8728852309</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.8093278464</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4.2139917695</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">6.3209876543</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">9.4814814815</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">14.2222222222</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">21.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">32</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
   <CssParameter name="stroke-width">2.2825788752</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
   <CssParameter name="stroke-width">3.4238683128</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
   <CssParameter name="stroke-width">5.1358024691</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
   <CssParameter name="stroke-width">7.7037037037</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
   <CssParameter name="stroke-width">11.5555555556</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
   <CssParameter name="stroke-width">17.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff9c3</CssParameter>
   <CssParameter name="stroke-width">26</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.2825788752</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">3.4238683128</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">5.1358024691</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">7.7037037037</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">11.5555555556</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">17.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">26</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
   <CssParameter name="stroke-width">2.8971193416</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
   <CssParameter name="stroke-width">4.3456790123</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
   <CssParameter name="stroke-width">6.5185185185</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
   <CssParameter name="stroke-width">9.7777777778</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
   <CssParameter name="stroke-width">14.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#ffffd7</CssParameter>
   <CssParameter name="stroke-width">22</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.8971193416</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4.3456790123</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">6.5185185185</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">9.7777777778</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">14.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">22</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">2.633744856</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">3.950617284</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">5.9259259259</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">8.8888888889</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">13.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">20</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.633744856</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">3.950617284</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">5.9259259259</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">8.8888888889</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">13.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">20</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z14 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">3.1604938272</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4.7407407407</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">7.1111111111</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">10.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'residential') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">16</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'service') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">4.1481481481</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">6.2222222222</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">9.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">14</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4.1481481481</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">6.2222222222</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">9.3333333333</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'living_street') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">14</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">2.962962963</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">4.4444444444</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">6.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#fff</CssParameter>
   <CssParameter name="stroke-width">10</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.962962963</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4.4444444444</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">6.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'pedestrian') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">10</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'trigger_cycleForbidden') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
) or 
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z13 - z14 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
  ( ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') and ( 
   not ([access] = 'noCycle') )
  ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#988243</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>19151</MinScaleDenominator>
  <!-- z13 - z14 -->
  <Filter>
( ([highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ([highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1.1851851852</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ([highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ([highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ([highway] = 'steps') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">butt</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-dasharray">2,2</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
