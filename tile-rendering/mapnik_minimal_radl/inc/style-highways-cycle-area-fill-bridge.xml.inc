<Style name="style-highways-cycle-area-fill-bridge">
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
( ([highway] = 'trigger_cycleway') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#009c27</CssParameter>
  </PolygonSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
( ([highway] = 'trigger_cycleAllowed') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <PolygonSymbolizer>
   <CssParameter name="fill">#fff</CssParameter>
  </PolygonSymbolizer>
 </Rule>
</Style>
