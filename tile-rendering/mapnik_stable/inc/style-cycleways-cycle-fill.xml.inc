<Style name="style-cycleways-cycle-fill">
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <!-- z15 - z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living street' or [highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
) or 
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living street' or [highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <!-- z15 - z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living street' or [highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
) or 
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living street' or [highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">0.00000001</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">3.8518518519</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">5.7777777778</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">8.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">13</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">3.8518518519</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">5.7777777778</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">8.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">13</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">2.0740740741</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">3.1111111111</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">4.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">7</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">2.0740740741</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">3.1111111111</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">4.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">7</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">3.5555555556</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">5.3333333333</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">8</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">12</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">3.5555555556</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">5.3333333333</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">8</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">12</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">2.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">4</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">6</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">9</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">2.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">4</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">6</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">9</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">1.7777777778</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">2.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">4</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">6</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">1.7777777778</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">2.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">4</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">6</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.5802469136</CssParameter>
   <CssParameter name="stroke-offset">1.1851851852</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.3703703704</CssParameter>
   <CssParameter name="stroke-offset">1.7777777778</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.5555555556</CssParameter>
   <CssParameter name="stroke-offset">2.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.3333333333</CssParameter>
   <CssParameter name="stroke-offset">4</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.5802469136</CssParameter>
   <CssParameter name="stroke-offset">1.1851851852</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.3703703704</CssParameter>
   <CssParameter name="stroke-offset">1.7777777778</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.5555555556</CssParameter>
   <CssParameter name="stroke-offset">2.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.3333333333</CssParameter>
   <CssParameter name="stroke-offset">4</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
) or 
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">-0.2962962963</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">-0.4444444444</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3333333333</CssParameter>
   <CssParameter name="stroke-offset">-0.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke-offset">-1</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
) or 
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">-0.2962962963</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">-0.4444444444</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3333333333</CssParameter>
   <CssParameter name="stroke-offset">-0.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke-offset">-1</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3827160494</CssParameter>
   <CssParameter name="stroke-offset">0.8888888889</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.0740740741</CssParameter>
   <CssParameter name="stroke-offset">1.3333333333</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1111111111</CssParameter>
   <CssParameter name="stroke-offset">2</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.6666666667</CssParameter>
   <CssParameter name="stroke-offset">3</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3827160494</CssParameter>
   <CssParameter name="stroke-offset">0.8888888889</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.0740740741</CssParameter>
   <CssParameter name="stroke-offset">1.3333333333</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1111111111</CssParameter>
   <CssParameter name="stroke-offset">2</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.6666666667</CssParameter>
   <CssParameter name="stroke-offset">3</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
) or 
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">0.2962962963</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.4814814815</CssParameter>
   <CssParameter name="stroke-offset">0.4444444444</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2222222222</CssParameter>
   <CssParameter name="stroke-offset">0.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.3333333333</CssParameter>
   <CssParameter name="stroke-offset">1</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
) or 
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">0.2962962963</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.4814814815</CssParameter>
   <CssParameter name="stroke-offset">0.4444444444</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2222222222</CssParameter>
   <CssParameter name="stroke-offset">0.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( ((([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.3333333333</CssParameter>
   <CssParameter name="stroke-offset">1</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-3.8518518519</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-5.7777777778</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-8.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-13</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-3.8518518519</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-5.7777777778</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-8.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway' or [highway] = 'trunk') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-13</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-2.0740740741</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-3.1111111111</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-4.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-7</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-2.0740740741</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-3.1111111111</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-4.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'tertiary') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-7</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-3.5555555556</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-5.3333333333</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-8</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-12</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-3.5555555556</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-5.3333333333</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-8</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-12</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-2.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-4</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-6</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-9</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-2.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-4</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-6</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-9</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-1.7777777778</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-2.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-4</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-6</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.7777777778</CssParameter>
   <CssParameter name="stroke-offset">-1.7777777778</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-2.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4</CssParameter>
   <CssParameter name="stroke-offset">-4</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'unclassified' or [highway] = 'road') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">6</CssParameter>
   <CssParameter name="stroke-offset">-6</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.5802469136</CssParameter>
   <CssParameter name="stroke-offset">-1.1851851852</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.3703703704</CssParameter>
   <CssParameter name="stroke-offset">-1.7777777778</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.5555555556</CssParameter>
   <CssParameter name="stroke-offset">-2.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.3333333333</CssParameter>
   <CssParameter name="stroke-offset">-4</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.5802469136</CssParameter>
   <CssParameter name="stroke-offset">-1.1851851852</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.3703703704</CssParameter>
   <CssParameter name="stroke-offset">-1.7777777778</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.5555555556</CssParameter>
   <CssParameter name="stroke-offset">-2.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'residential') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">5.3333333333</CssParameter>
   <CssParameter name="stroke-offset">-4</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">0.4444444444</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3333333333</CssParameter>
   <CssParameter name="stroke-offset">0.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke-offset">1</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-offset">0.4444444444</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3333333333</CssParameter>
   <CssParameter name="stroke-offset">0.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'service') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke-offset">1</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3827160494</CssParameter>
   <CssParameter name="stroke-offset">-0.8888888889</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.0740740741</CssParameter>
   <CssParameter name="stroke-offset">-1.3333333333</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1111111111</CssParameter>
   <CssParameter name="stroke-offset">-2</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-3</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>19151</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z15 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.3827160494</CssParameter>
   <CssParameter name="stroke-offset">-0.8888888889</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.0740740741</CssParameter>
   <CssParameter name="stroke-offset">-1.3333333333</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.1111111111</CssParameter>
   <CssParameter name="stroke-offset">-2</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'living street') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">4.6666666667</CssParameter>
   <CssParameter name="stroke-offset">-3</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.4814814815</CssParameter>
   <CssParameter name="stroke-offset">-0.4444444444</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2222222222</CssParameter>
   <CssParameter name="stroke-offset">-0.6666666667</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  not (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.3333333333</CssParameter>
   <CssParameter name="stroke-offset">-1</CssParameter>
   <CssParameter name="stroke">#1ae400</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <MinScaleDenominator>4787</MinScaleDenominator>
  <!-- z16 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">1.4814814815</CssParameter>
   <CssParameter name="stroke-offset">-0.4444444444</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>4787</MaxScaleDenominator>
  <MinScaleDenominator>2393</MinScaleDenominator>
  <!-- z17 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">2.2222222222</CssParameter>
   <CssParameter name="stroke-offset">-0.6666666667</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>2393</MaxScaleDenominator>
  <!-- z18 -->
  <Filter>
( (([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')) and ( 
 ( ([highway] = 'pedestrian' or [highway] = 'pedestrian-with-cycles') and ( 
  (([cycleway] = 'track' or [cycleway:right] = 'track')) )
 ) )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke-width">3.3333333333</CssParameter>
   <CssParameter name="stroke-offset">-1</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
