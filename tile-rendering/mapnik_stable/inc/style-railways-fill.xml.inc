<Style name="style-railways-fill">
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z6 - z12 -->
  <Filter>
( ([railway] = 'rail' or [railway] = 'subway') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#888</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-dasharray">4,4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <MinScaleDenominator>9575</MinScaleDenominator>
  <!-- z13 - z15 -->
  <Filter>
( ([railway] = 'rail' or [railway] = 'subway' or [railway] = 'light_rail' or [railway] = 'narrow_gauge' or [railway] = 'funicular' or [railway] = 'tram' or [railway] = 'spur' or [railway] = 'siding' or [railway] = 'miniature' or [railway] = 'disused' or [railway] = 'spur-siding-yard') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#888</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-dasharray">4,4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9575</MaxScaleDenominator>
  <!-- z16 - z18 -->
  <Filter>
( ([railway] = 'rail' or [railway] = 'subway' or [railway] = 'light_rail' or [railway] = 'narrow_gauge' or [railway] = 'funicular' or [railway] = 'tram' or [railway] = 'spur' or [railway] = 'siding' or [railway] = 'miniature' or [railway] = 'disused' or [railway] = 'spur-siding-yard') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#888</CssParameter>
   <CssParameter name="stroke-width">2</CssParameter>
   <CssParameter name="stroke-dasharray">4,4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>9805455</MaxScaleDenominator>
  <MinScaleDenominator>76605</MinScaleDenominator>
  <!-- z6 - z12 -->
  <Filter>
( ([railway] = 'rail' or [railway] = 'subway') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#888</CssParameter>
   <CssParameter name="stroke-width">0.0001</CssParameter>
   <CssParameter name="stroke-dasharray">4,4</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>76605</MaxScaleDenominator>
  <!-- z13 - z18 -->
  <Filter>
( ([railway] = 'rail' or [railway] = 'subway' or [railway] = 'light_rail' or [railway] = 'narrow_gauge' or [railway] = 'funicular' or [railway] = 'tram' or [railway] = 'spur' or [railway] = 'siding' or [railway] = 'miniature' or [railway] = 'disused' or [railway] = 'spur-siding-yard') and ( 
 ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#888</CssParameter>
   <CssParameter name="stroke-width">0.0001</CssParameter>
   <CssParameter name="stroke-dasharray">4,4</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
