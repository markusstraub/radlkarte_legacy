<Style name="style-highways-cycle-area-fill">
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
([highway] = 'trigger_cycleway')</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
  </LineSymbolizer>
  <PolygonSymbolizer>
   <CssParameter name="fill">#009c27</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
([highway] = 'trigger_cycleAllowed')</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
  </LineSymbolizer>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
</Style>
