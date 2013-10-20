<Style name="style-highways-cycle-area-casing-bridge">
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
( ([highway] = 'trigger_cycleway') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#333333</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <MinScaleDenominator>38302</MinScaleDenominator>
  <!-- z12 - z13 -->
  <Filter>
( ([highway] = 'trigger_cycleAllowed') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
 <Rule>
  <MaxScaleDenominator>38302</MaxScaleDenominator>
  <!-- z14 - z18 -->
  <Filter>
( ([highway] = 'trigger_cycleAllowed') and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#595959</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
