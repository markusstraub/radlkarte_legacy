<Style name="style-highways-cycle-area-casing-bridge">
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
( (([highway] = 'cycleway' or ([highway] = 'footway' and [bicycle] = 'compulsory') or ([highway] = 'path' and [bicycle] = 'compulsory') or ([public_transport] = 'platform' and [bicycle] = 'compulsory'))) and ( 
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
( (((((([access] = 'allowed' or [access] = 'compulsory') and not [bicycle] = 'forbidden')) or (([access] = 'forbidden' or [highway] = 'footway') and ([bicycle] = 'allowed' or [bicycle] = 'compulsory'))) and (([highway] = 'footway' and [bicycle] = 'allowed') or ([highway] = 'path' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1') ) or ([highway] = 'track' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1'))))) and ( 
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
( (((((([access] = 'allowed' or [access] = 'compulsory') and not [bicycle] = 'forbidden')) or (([access] = 'forbidden' or [highway] = 'footway') and ([bicycle] = 'allowed' or [bicycle] = 'compulsory'))) and (([highway] = 'footway' and [bicycle] = 'allowed') or ([highway] = 'path' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1') ) or ([highway] = 'track' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1'))))) and ( 
  ([bridge] = 'yes' or [bridge] = 'true' or [bridge] = '1') )
)</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke">#595959</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
