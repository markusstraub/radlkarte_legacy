<Style name="style-highways-cycle-area-casing">
 <Rule>
  <MaxScaleDenominator>153210</MaxScaleDenominator>
  <!-- z12 - z18 -->
  <Filter>
(([highway] = 'cycleway' or ([highway] = 'footway' and [bicycle] = 'compulsory') or ([highway] = 'path' and [bicycle] = 'compulsory') or ([public_transport] = 'platform' and [bicycle] = 'compulsory')))</Filter>
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
(((((([access] = 'allowed' or [access] = 'compulsory') and not [bicycle] = 'forbidden')) or (([access] = 'forbidden' or [highway] = 'footway') and ([bicycle] = 'allowed' or [bicycle] = 'compulsory'))) and (([highway] = 'footway' and [bicycle] = 'allowed') or ([highway] = 'path' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1') ) or ([highway] = 'track' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1')))))</Filter>
  <LineSymbolizer>
   <CssParameter name="stroke-linecap">round</CssParameter>
   <CssParameter name="stroke">#bababa</CssParameter>
   <CssParameter name="stroke-width">1</CssParameter>
  </LineSymbolizer>
 </Rule>
</Style>
