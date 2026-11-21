# Cucharico – technische Vorprüfung für Porymap

Stand: 21.11.2026  
Branch: `private-karmesin-gba`

## Ergebnis und Umfang

Die Dateien wurden direkt aus dem Branch geprüft. Das ist eine automatisierte Prüfung der exportierten Daten – **keine bestätigte Ansicht in Porymap**. In der verfügbaren Arbeitsumgebung sind Porymap und die GBA-Build-Werkzeuge nicht installiert.

## Layout und Kartenraster

- `LAYOUT_CUCHARICO` ist in `data/layouts/layouts.json` registriert.
- Größe: 32 × 18 Metatiles, Layoutversion `emerald`.
- Primäres Tileset: `gTileset_General`; sekundäres Tileset: `gTileset_Cucharico`.
- `map.bin`: 1.152 Byte = 576 16-Bit-Zellen.
- Alle 576 Zellen verwenden Elevation 3.
- Alle verwendeten globalen Metatile-IDs liegen zwischen 512 und 522; das passt zum sekundären Tileset nach den 512 primären General-Metatiles.
- `border.bin`: 8 Byte = vier 16-Bit-Randzellen.

### Rastervorschau der gespeicherten Metatile-IDs

Die Zeichen zeigen nur die Metatile-Kategorien, nicht die Pixelgrafik:

```
GGGGGGGGGGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGGGGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGGGGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGFGGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGGGGGGGGGPPGGGGGGGGBGGGGGG
GGGGGBGGGGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGGGGGGGGGPPGGGGGGFGGGGGGGG
GGGGGGGGBGGGGGGPPGGGGGGGGGGGGGGG
GGGGGGGGGGFGCCCCCCCCGGGGGGGBGGGG
GGGBGGGGGGGGCCCCCCCCGGGGGGGGGGGG
GGGGGGGGGGGGGGGPGGGGGGGGGGGGGGGG
RSSSSSSSSSSSSSSPPSSSSSSSSSSSSSSR
RSSSSSSSSSSSSSSPPSSSSSSSSSSSSSSR
RSSSSSSSSSSSSSSPPSSSSSSSSSSSSSSR
RUUUUUGUUUUUUUUUUUUUUUUUUUUUUUUR
RWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWR
RWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWR
RWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWR
```

Legende: G = Gras, F = Blumen-/Akzentgras, S = Sand, P = Erdweg, U = Ufer, W = Wasser, R = Fels, C = Steinfläche, B = Busch.

## Tileset und Metatiles

- `tiles.png`: 128 × 136 Pixel, indiziertes PNG mit 4 Bit pro Pixel und 272 Grafik-Tiles.
- Quelldatei und Engine-Datei besitzen denselben Git-Blob-SHA; es liegen daher aktuell identische PNG-Inhalte vor.
- `metatiles.bin`: 256 Byte = 16 Metatiles × 8 16-Bit-Einträge.
- Jeder verwendete Grafik-Tile-Verweis liegt im Bereich 0–257 und damit innerhalb der 272 vorhandenen Grafik-Tiles.
- Alle Metatile-Einträge verwenden Palettenbank 6.
- Tile-IDs 256 und 257 stammen aus der transparent angelegten zusätzlichen Atlaszeile und werden als leere obere Ebene verwendet.

## Attribute und Kollision

`metatile_attributes.bin` enthält 16 Einträge zu je 2 Byte. Eingetragen sind:

| Lokale Metatile-ID | Verwendung | Verhalten |
|---:|---|---|
| 0 | Grundgras | `MB_NORMAL` |
| 2 | Blumen-/Akzentgras | `MB_SHORT_GRASS` |
| 3 | Sand | `MB_SAND` |
| 4 | Erdweg | `MB_NORMAL` |
| 5 | Wasser | `MB_OCEAN_WATER` |
| 7 | Ufer | `MB_SAND` |

Die übrigen Metatile-Attribute stehen weiterhin auf `MB_NORMAL`. Für Fels (lokale ID 8) und Busch (lokale ID 10) sind 19 einzelne Kartenfelder über die Mapgrid-Kollisionsbits als blockierend markiert: 14 Felsfelder und 5 Buschfelder. Die Kollision muss trotzdem in Porymap und anschließend im Spiel bestätigt werden.

## Events

- Nemila steht in `map.json` bei (18, 9), Elevation 3. Das Kartenfeld dort verwendet lokale Metatile-ID 9 (Steinfläche).
- Die beiden Schild-Skripte sind als BG-Events eingetragen: (16, 10) und (6, 14).
- Die BG-Event-Koordinaten und die sichtbaren Schildgrafiken müssen beim visuellen Porymap-Durchgang gemeinsam kontrolliert werden.

## Noch offene manuelle Porymap-Prüfung

1. Cucharico-Layout öffnen und prüfen, ob Tileset, Palette 6 und Metatile-Zusammensetzung korrekt dargestellt werden.
2. Transparente obere Ebene sowie Gras-/Sand-/Ufer-/Wasserübergänge visuell kontrollieren.
3. Fels und Busch blockierend, Weg/Gras/Sand begehbar und Wasser für den Spieler an Land nicht betretbar prüfen.
4. Nemilas Position sowie die beiden BG-Events und ihre sichtbaren Schilder kontrollieren.
5. Nach manuellen Änderungen die Karten-/Layoutdaten speichern und die Änderungen erneut gegen das Repository prüfen.

## Build- und Emulatorstatus

Porymap, `arm-none-eabi-gcc`, `arm-none-eabi-objcopy` und `agbcc` waren in der verfügbaren Umgebung nicht vorhanden. Deshalb wurde weder eine Porymap-GUI-Prüfung noch ein ROM-Build oder Emulator-Test durchgeführt. Cucharico bleibt ein technischer Terrain-Prototyp und ist noch keine bestätigte spielbare Karte.
