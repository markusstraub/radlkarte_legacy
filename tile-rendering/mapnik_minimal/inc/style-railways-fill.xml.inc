<Style name="style-railways-fill">
 <Rule>
  <Filter>
( ([railway] = 'rail') and ( 
 not ([tunnel] = 'yes' or [tunnel] = 'true' or [tunnel] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#888</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <Filter>
  [railway] = 'subway'
  </Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linejoin">round</CssParameter>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#888</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
   <CssParameter name="stroke-dasharray">4,4</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
