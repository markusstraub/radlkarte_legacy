<Style name="style-aeroways-fill">
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer>
        <CssParameter name="stroke">#E7E7E7</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">#E7E7E7</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#E7E7E7</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway' and not [bridge]='yes'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#E7E7E7</CssParameter>
        <CssParameter name="stroke-width">18</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway'</Filter>
      &maxscale_zoom11;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#E7E7E7</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway' and not [bridge]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#E7E7E7</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway' and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#E7E7E7</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Style name="style-aeroways-area-fill">
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom11;
      <PolygonSymbolizer>
        <CssParameter name="fill">#E7E7E7</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer>
        <CssParameter name="fill">#E7E7E7</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
