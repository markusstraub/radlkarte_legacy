<Style name="style-highways-area-fill">
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>1225681</MinScaleDenominator>
  <!-- z6 - z8 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk') and ( 
   ([access] = 'noCycle') )
) or 
([highway] = 'motorway' or [highway] = 'trunk')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#bababa</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z9 - z12 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link') and ( 
   ([access] = 'noCycle') )
) or 
([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#bababa</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'trigger_cycleForbidden' or [highway] = 'steps') and ( 
   ([access] = 'noCycle') )
) or 
([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'trigger_cycleForbidden' or [highway] = 'steps')</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#bababa</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <!-- z14 - z18 -->
  <Filter>
( not ([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'pedestrian' or [highway] = 'trigger_cycleForbidden' or [highway] = 'steps') and ( 
   ([access] = 'noCycle') )
) or 
([highway] = 'motorway' or [highway] = 'trunk' or [highway] = 'motorway_link' or [highway] = 'trunk_link' or [highway] = 'trigger_cycleForbidden' or [highway] = 'steps') or 
( ([highway] = 'pedestrian') and ( 
   ( not ([access] = 'noCycle') and ( 
    not ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) or 
   ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#bababa</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>1225681</MaxScaleDenominator>
  <MinScaleDenominator>306420</MinScaleDenominator>
  <!-- z9 - z10 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <MinScaleDenominator>153210</MinScaleDenominator>
  <!-- z11 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z12 -->
  <Filter>
( ([highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'road') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z13 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <!-- z14 - z18 -->
  <Filter>
( ([highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential' or [highway] = 'service' or [highway] = 'living_street') and ( 
   not ([access] = 'noCycle') )
) or 
( ([highway] = 'pedestrian') and ( 
   ( not ([access] = 'noCycle') and ( 
    ([bicycle] = 'allowed' or [bicycle] = 'compulsory') )
   ) )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>306420</MaxScaleDenominator>
  <!-- z11 - z18 -->
  <Filter>
( ([highway] = 'primary' or [highway] = 'primary_link') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#ffefaf</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
( ([highway] = 'secondary' or [highway] = 'secondary_link') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff9c3</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <!-- z13 - z18 -->
  <Filter>
( ([highway] = 'tertiary') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#ffffd7</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <!-- z13 - z18 -->
  <Filter>
( ([highway] = 'track' or [highway] = 'path' or [highway] = 'bridleway') and ( 
   not ([access] = 'noCycle') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#988243</CssParameter>
  </PolygonSymbolizer>
 </Rule>
</Style>
