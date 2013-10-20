<Style name="style-highways-cycle-area-casing">
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
([highway] = 'trigger_cycleway')</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#009c27</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
([highway] = 'trigger_cycleAllowed')</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
