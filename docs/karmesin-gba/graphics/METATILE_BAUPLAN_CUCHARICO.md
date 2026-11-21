# Cucharico – Metatile-Bauplan

Der aktuelle Atlas und die Engine-Metatile-Datei verwenden dieselben 16 Motive. Jedes Motiv besteht aus vier 8×8-Grafik-Tiles für eine 16×16-Metatile-Grundebene. Die vier Einträge der oberen Ebene zeigen auf die transparente Tile-ID 256.

## Atlas-Aufbau

- PNG: 128 × 136 Pixel, indiziertes 4-bpp-Format.
- 16 × 17 Grafik-Tiles in 8×8 Pixeln (272 Grafik-Tiles insgesamt).
- Die 16 Motive liegen als 4×4-Metatile-Felder in 32-Pixel-Abständen.
- Tile-ID im Atlas: `Zeile × 16 + Spalte`.
- Alle Metatile-Einträge wählen Palettenbank 6.

## Metatiles

| Lokale ID | Motiv | 8×8-Tile-IDs (oben links, oben rechts, unten links, unten rechts) | Verhalten |
|---:|---|---|---|
| 0 | Grundgras | 0, 1, 16, 17 | `MB_NORMAL` |
| 1 | Grasvariante | 4, 5, 20, 21 | `MB_NORMAL` |
| 2 | Blumen-/Akzentgras | 8, 9, 24, 25 | `MB_SHORT_GRASS` |
| 3 | Sand | 12, 13, 28, 29 | `MB_SAND` |
| 4 | Erdweg | 64, 65, 80, 81 | `MB_NORMAL` |
| 5 | Wasser | 68, 69, 84, 85 | `MB_OCEAN_WATER` |
| 6 | Wasser mit Glanz | 72, 73, 88, 89 | `MB_OCEAN_WATER` |
| 7 | Ufer | 76, 77, 92, 93 | `MB_SAND` |
| 8 | Fels | 128, 129, 144, 145 | `MB_NORMAL`, Kartenfelder blockiert |
| 9 | Dorfplatz | 132, 133, 148, 149 | `MB_NORMAL` |
| 10 | Busch | 136, 137, 152, 153 | `MB_NORMAL`, Kartenfelder blockiert |
| 11 | Dach | 140, 141, 156, 157 | `MB_NORMAL`, Kartenfelder blockiert |
| 12 | Hauswand | 192, 193, 208, 209 | `MB_NORMAL`, Kartenfelder blockiert |
| 13 | Zaun | 196, 197, 212, 213 | `MB_NORMAL`, Kartenfelder blockiert |
| 14 | Palme | 200, 201, 216, 217 | `MB_NORMAL`, Kartenfelder blockiert |
| 15 | Schild | 204, 205, 220, 221 | `MB_SIGNPOST`, Kartenfelder blockiert |

## Binärdateien

- `metatiles.bin`: 16 × 8 × 2 Byte = 256 Byte.
- `metatile_attributes.bin`: 16 × 2 Byte = 32 Byte.
- Tile-ID 256 ist der transparente Eintrag der zusätzlichen Atlas-Zeile und bildet die leere obere Ebene.
- `palettes/00.pal` bis `palettes/15.pal` enthalten derzeit dieselbe 16-Farben-Palette; die Motive nutzen Palettenbank 6.

## Verwendung in den Karten

- `Cucharico`: 32 × 18 Metatiles, Küstendorf, zwei Hausfassaden, Dorfplatz, Schilder und Strand.
- `Cucharico_Path`: 32 × 24 Metatiles, über Nord-/Südverbindung angeschlossen.
- `Cucharico_PlayerHouse`: 11 × 9; das Innenlayout ist vorläufig eine Kopie des Emerald-Hauses und noch nicht im Paldea-Stil.

**Noch offen:** Porymap-GUI-Prüfung, ROM-Build und Emulator-Test. Details stehen in [PORYMAP_PRUEFUNG.md](../maps/PORYMAP_PRUEFUNG.md).
