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
- Metatile-Motiv: 16×16 Pixel pro Ebene, aus vier Grafik-Tiles zusammengesetzt
- Emerald verwendet zwei Ebenen und damit acht 8×8-Tilemap-Einträge pro Metatile
- Farbpalette: GBA-kompatible 4bpp-Paletten mit höchstens 16 Farben je Bank
- Metatile-Attribute: in Emerald 2 Byte pro Metatile; Verhalten liegt in Bit 0–7,
  Ebenentyp in Bit 12–15
- Tilemap-Einträge sind 16-Bit-Werte; neben der Tile-ID werden Flip- und
  Palettenbank-Informationen gespeichert

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


## Verbindliche Stilentscheidung

**Bild 1** ist die ausgewählte Hauptreferenz. Bild 2 wird nicht weiterverwendet.
Die Zieloptik orientiert sich an Bild 1: satte tropische Grüntöne, klares
türkisblaues Küstenwasser, heller warmer Sand, orange-rote Ziegeldächer,
helle Hauswände und gut lesbare dunkle Konturen. Die Spielgrafik wird
trotzdem neu und rastergenau gezeichnet; das Referenzbild wird nicht als
fertige Grafikdatei übernommen.

## Konkreter erster Atlas-Umfang

Die erste Produktionsversion soll bewusst klein bleiben, damit sie früh
in Porymap getestet werden kann.

| Bereich | Geplante Bausteine |
|---|---|
| Gras | Grundfläche, Gras mit Blumen, Gras-Sand-Kante |
| Sand | Grundfläche, obere/untere/linke/rechte Kante, Ecken |
| Wasser | ruhige Wasserfläche, Uferkante, Schaumkante, Felsufer |
| Wege | heller Dorfweg, Pflasterfläche, Weg-Ecken und Übergänge |
| Natur | Palme, Baumkrone, Busch, Blumentopf, Felsen |
| Dorf | Hauswand, Dachfläche, Dachkante, Fenster, Tür |
| Deko | Schild, Zaun, Laterne, Bank und Pflanzkasten |

### Regeln für die Pixelgrafik

- Alle Grundelemente werden auf dem 8×8-GBA-Grafikraster angelegt.
- Kanten und Ecken müssen nahtlos kachelbar sein; keine sichtbaren Nähte
  zwischen wiederholten Boden- oder Wasserflächen.
- Große Objekte wie Palmen und Häuser werden aus mehreren 8×8-Tiles
  zusammengesetzt und erhalten klare obere/untere Ebenen.
- Die Farbpalette wird begrenzt und auf GBA-4bpp-Kompatibilität geprüft.
- Keine geglätteten Vektorkanten, halbtransparenten Pixel oder
  hochauflösenden Schachbrett-Hintergründe in den finalen Quelldateien.
- Begehbarkeit wird nicht allein aus der Optik abgeleitet: jedes Metatile
  erhält bewusst definierte Attribute.

## Abnahmekriterien für die erste spielbare Grafikversion

1. Gras, Sand, Wasser und Weg lassen sich in Porymap ohne sichtbare Nähte
   zu größeren Flächen zusammensetzen.
2. Der Uferübergang ist in allen Richtungen korrekt.
3. Wasser, Felsen, Hauswände und Zäune blockieren den Weg wie vorgesehen.
4. Die begehbaren Flächen sind eindeutig und durchgehend.
5. Die Grafik bleibt auf dem GBA-Bildschirm gut unterscheidbar.
6. Die Dateien werden vom Projekt-Build ohne Format- oder Palettenfehler
   verarbeitet.

## Erster Grafik-Prototyp (eingetragen)

Quelldatei: `graphics/tilesets/cucharico/tiles.png`
Engine-Datei: `data/tilesets/secondary/cucharico/tiles.png`

- PNG mit indizierter 4bpp-Farbgebung und 16 Einträgen in der Palette
- 128×136 Pixel: 16×16 gestaltete Grafik-Tiles plus eine transparente Tile-Zeile
  als Overlay-Leerfläche (Tile-ID 256)
- Enthält einen überarbeiteten, handgezeichneten Gen-3-inspirierten Atlas:
  Grasvarianten, Sand, Wasser/Wellen, Ufer, Wege, Felsen, Vegetation,
  Baumstammsegmente, Dach-/Wandfragmente sowie kleine Dekorationen
- 16 Einträge in einer indizierten Palette; erster Eintrag transparent
- Klare Pixelkanten ohne Glättung; die 8×8-Grafik-Tiles werden in einem
  separaten Binär-Prototyp zu 16 Metatiles mit je acht Ebeneneinträgen kombiniert

Dies ist ein **Grafik- und Metatile-Prototyp**, noch kein fertiges Art-Pack:
Die Motive sind eine eigenständige Annäherung an den klassischen Gen-3-GBA-Pixelstil.
Ein erstes Set aus 16 Metatiles sowie 2-Byte-Attributen liegt im Engine-Verzeichnis.
Das Tileset ist in `graphics.h`, `metatiles.h` und `headers.h` registriert und dem
Cucharico-Layout zugewiesen. Die 32×18-Testkarte enthält erste Terrainflächen.
Die Attribute sind teilweise gesetzt: Blumen-/Akzentgras mit `MB_SHORT_GRASS`,
Sand/Ufer mit `MB_SAND`, Wasser mit `MB_OCEAN_WATER`. In der 32×18-Testkarte sind
19 Fels-/Busch-Felder über die Mapgrid-Kollisionsbits blockiert. Porymap-GUI-Prüfung,
visuelle Nacharbeit, Build-Test und Emulator-Test fehlen weiterhin.

## Status

- [x] Stil- und Motivkonzept erstellt
- [x] Engine-Verzeichnisstruktur anhand vorhandener Tilesets geprüft
- [x] Erster indizierter 8×8-Grafik-Prototyp erstellt
- [x] Atlas im klassischen Gen-3-GBA-Stil überarbeitet (Nacharbeit offen)
- [x] Alle 16 GBA-Palettenbänke angelegt (Porymap-/Build-Prüfung offen)
- [x] Erste 16 Metatiles und 2-Byte-Attribute als Binär-Prototyp erstellt (Terrain-Verhalten eingetragen; Spieltest offen)
- [x] Tileset in den Engine-Datendateien registriert
- [x] Cucharico-Layout auf das neue Tileset umgestellt und erste 32×18-Terrain-Testkarte aufgebaut
- [ ] Cucharico in Porymap prüfen und optisch verfeinern; Kollision kontrollieren
- [ ] ROM-Build und Emulator-Test

**Wichtig:** Das Tileset ist technisch eingebunden, aber noch nicht kompiliert oder im Spiel geprüft. Die Testkarte ist ein erster Terrain-Aufbau und noch keine fertige Dorfkarte.
