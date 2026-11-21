# Cucharico – technische Vorprüfung für Porymap

Stand: 21.11.2026  
Branch: `private-karmesin-gba`

## Ergebnis und Umfang

Die exportierten Daten wurden automatisiert gegen die Engine-Formate geprüft. Das ist **keine bestätigte Ansicht in der Porymap-GUI**. Porymap selbst und die GBA-Build-Werkzeuge waren in dieser Arbeitsumgebung nicht verfügbar.

## Außengebiet Cucharico

- Layout: `LAYOUT_CUCHARICO`, 32 × 18 Metatiles.
- Tilesets: primär `gTileset_General`, sekundär `gTileset_Cucharico`.
- `map.bin`: 1.152 Byte = 576 16-Bit-Zellen.
- Alle 576 Kartenfelder verwenden Elevation 3.
- Sekundäre Metatile-IDs: 512–527. Die Haustür verwendet primär `METATILE_General_Door` (ID 33).
- 76 Kartenfelder tragen Mapgrid-Kollisionsbits, unter anderem Hauswände/-dach, Zäune, Felsen, Palmen, Büsche und Schilder.
- `border.bin`: 8 Byte = vier 16-Bit-Randzellen.

### Rastervorschau

Die Buchstaben zeigen die gespeicherten Metatile-Kategorien, nicht die Pixelgrafik:

```
GGGGGGGGGGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGGGGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGGGGGGGGGPPGGGGGGGGGGSGGGG
GGGFFFFFFFFGPPPPGGGGGGGGGGGGGGGGG
GGGFRF GGGGPPPPGGGGGGGGGGGGGGGGGG
GGGBGGGGGGGPPPPGGGGGGGGGGGGGGGGGG
GGGGGGGGGGGPPPPGGGGGGGGGGGGGGGGGG
GGGGGPPPPPPPPPPPPPPPPPPGGGGGGGGGGG
GGGGGGGGGGGCCCCCCCCCCGGGGGGGGGGGGG
GGGGGGGGGGGCCCCCCCCCCGGGGGGGGGGGGG
GGGGGGGGGGGCCCCCCCCCCGGGGGGGGGGGGG
RSSSSSSSSSSSSPPSSSSSSSSSSSSSSSSR
RSSSSSSSSSSSSPPSSSSSSSSSSSSSSSSR
RSSSSSSSSSSSSPPSSSSSSSSSSSSSSSSR
RUUUUUUUUUUUUPPUUUUUUUUUUUUUUUUR
RWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWR
RWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWR
RWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWR
```

Legende: G = Gras, F = Blumen-/Akzentgras, S = Sand, P = Weg, U = Ufer, W = Wasser, R = Fels, C = Dorfplatz. Haus-/Deko-Metatiles sind in dieser kompakten Textvorschau nicht eigens dargestellt.

## Eigenes Tileset

- Quelldatei und Engine-Datei: `graphics/tilesets/cucharico/tiles.png` und `data/tilesets/secondary/cucharico/tiles.png`; beide verwenden denselben Inhalt.
- PNG: 128 × 136 Pixel, indiziert, 4 Bit pro Pixel, 272 Grafik-Tiles.
- `metatiles.bin`: 256 Byte = 16 Metatiles × 8 Einträge.
- Alle Metatile-Grafikeinträge verwenden Palettenbank 6.
- Die Metatile-Grafikverweise liegen zwischen Tile-ID 0 und 256; sie liegen damit innerhalb der 272 Grafik-Tiles. Tile-ID 256 ist die transparente obere Ebene.
- Die 16 Palettendateien im Engine-Verzeichnis verwenden dieselbe neue 16-Farben-Palette.

### Metatile-Verhalten

`metatile_attributes.bin` ist 32 Byte groß (16 Einträge × 2 Byte).

| Lokale ID | Motiv | Verhalten |
|---:|---|---|
| 0 | Grundgras | `MB_NORMAL` |
| 2 | Blumen-/Akzentgras | `MB_SHORT_GRASS` |
| 3 | Sand | `MB_SAND` |
| 4 | Erdweg | `MB_NORMAL` |
| 5 und 6 | Wasser | `MB_OCEAN_WATER` |
| 7 | Ufer | `MB_SAND` |
| 8, 10–14 | Fels, Busch, Architektur und Palme | `MB_NORMAL`; einzelne Kartenfelder werden über Mapgrid-Kollisionsbits blockiert |
| 15 | Schild | `MB_SIGNPOST` |

## Verbundene Karten

- `MAP_CUCHARICO` ist nach Norden mit `MAP_CUCHARICO_PATH` verbunden.
- `LAYOUT_CUCHARICO_PATH`: 32 × 24 Metatiles; `map.bin` ist 1.536 Byte groß; alle Felder verwenden Elevation 3; 60 Felder sind über Mapgrid-Kollisionsbits blockiert.
- Der Pfad verbindet sich nach Süden zurück mit Cucharico.
- Die Haustür bei (5, 4) führt auf `MAP_CUCHARICO_PLAYER_HOUSE`; die Innenkarte führt bei (9, 8) zurück.
- Das Haus-Innenlayout ist 11 × 9. Seine Binärkarte wurde vorläufig von `LittlerootTown_BrendansHouse_1F` kopiert und verwendet daher noch die vorhandene Hoenn-Inneneinrichtung. Sie ist ein Platzhalter, keine fertige Paldea-Innenarchitektur.

## Events

- Nemila steht bei (18, 9), Elevation 3, auf dem gepflasterten Metatile 9.
- Das Dorfschild liegt bei (18, 2), das Strandschild bei (8, 12); beide verwenden das Schild-Metatile 15.
- Die Haus-Warps und die Nordverbindung sind in den Map-JSON-Dateien eingetragen.

## Noch offene manuelle Porymap-Prüfung

1. Alle drei Layouts öffnen und die Tile-Zuordnung, Paletten, Ebenen und Metatile-Zusammensetzung visuell kontrollieren.
2. Nahtlose Wiederholungen und Übergänge zwischen Gras, Weg, Sand, Ufer und Wasser prüfen.
3. Kollisionen von Wasser, Felsen, Büschen, Palmen, Hauswänden, Dach, Zaun und Schildern im Karteneditor testen.
4. Haus-Warp, Rückwarp, Nordverbindung, Nemila und beide Schilder im Spiel testen.
5. Das wiederverwendete Hoenn-Hausinnere später durch eine eigene Paldea-Innenkarte ersetzen.

## Build- und Emulatorstatus

Eine ROM wurde noch nicht gebaut. Porymap-GUI und Emulator-Test wurden nicht ausgeführt. Die Karten sind technisch registrierte Prototypen, aber noch keine bestätigte spielbare Veröffentlichung.
