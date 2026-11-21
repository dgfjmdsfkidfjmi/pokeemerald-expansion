# Cucharico – Tileset-Spezifikation

## Ziel

Ein eigenständiges Küsten-Tileset für Cucharico, passend zum GBA-Stil von
`pokeemerald-expansion`. Die aktuelle Konzeptgrafik dient als visuelle
Richtung, ist aber noch **keine importierbare Spielgrafik**.

## Im Konzept enthaltene Motivgruppen

- Grasflächen, Blumenwiesen und Übergänge zu Sand
- Sandstrand, Wasserflächen, Küstenkanten und Felsen
- Palmen, Laubbäume, Büsche und Hecken
- Dorfwege und gepflasterter Dorfplatz
- Hausfassaden, Dächer, Fenster, Türen und Markisen
- Steg- und Hafenelemente
- Zäune, Schilder, Bänke, Laternen, Pflanzkästen und kleine Requisiten

## Technische Zielstruktur

Die vorhandene Engine trennt die Quelldaten eines Tilesets in Grafik,
Metatile-Zusammensetzung und Metatile-Attribute. Als Referenz dienen die
bestehenden Verzeichnisse:

- `data/tilesets/primary/general/`
- `data/tilesets/primary/building/`
- `data/tilesets/secondary/petalburg/`

Dort liegen jeweils unter anderem `tiles.png`, `metatiles.bin`,
`metatile_attributes.bin` und ein `palettes/`-Unterverzeichnis.

Für Cucharico ist zunächst ein **sekundäres** Tileset vorgesehen, das mit
einem vorhandenen primären Basistileset kombiniert wird. Die endgültige
Zuordnung wird erst festgelegt, wenn die Grafik in Porymap geprüft wurde.

### GBA-Raster

- Grafik-Tiles: 8×8 Pixel
- Metatiles: 16×16 Pixel, aus vier Grafik-Tiles zusammengesetzt
- Farbpalette: GBA-kompatible 4bpp-Paletten mit höchstens 16 Farben je Bank
- Metatile-Attribute: separat festlegen (Boden, Wasser, Hindernis,
  Durchgang, Höhen-/Verhaltenstyp)

Die Konzeptgrafik muss vor dem Import neu gezeichnet bzw. pixelgenau
aufbereitet werden. Sie enthält unterschiedlich große Illustrationen,
Abstände und Schachbrett-Hintergrund; sie darf nicht einfach als
`tiles.png` übernommen werden.

## Geplante Produktionsreihenfolge

1. **Terrain-Basis:** Gras, Sand, Weg, Wasser und Küstenkanten.
2. **Kollisionsfähige Metatiles:** begehbare Flächen, Wasser, Felsen und
   Klippen mit passenden Attributen.
3. **Dorf-Architektur:** modulare Hausfronten, Dachkanten, Fenster und Türen.
4. **Dekoration:** Palmen, Blumen, Zäune, Laternen, Schilder und Steg.
5. **Porymap-Test:** Cucharico auf dem vorgesehenen 32×18-Raster aufbauen,
   Übergänge und Kollisionen prüfen.
6. **Build-Test:** Ressourcen einbinden und einen ROM-Build ausführen.

## Status

- [x] Stil- und Motivkonzept erstellt
- [x] Engine-Verzeichnisstruktur anhand vorhandener Tilesets geprüft
- [ ] Pixelgenaue 8×8-Grafik-Tiles erstellt
- [ ] GBA-Paletten erstellt und geprüft
- [ ] Metatiles und Attribute erstellt
- [ ] Tileset in der Engine registriert
- [ ] Cucharico in Porymap aufgebaut
- [ ] ROM-Build und Emulator-Test

**Wichtig:** Es wurde noch kein neues Tileset in die Engine eingebunden.
Die bisherige Cucharico-Map verwendet weiterhin Platzhalterdaten.
