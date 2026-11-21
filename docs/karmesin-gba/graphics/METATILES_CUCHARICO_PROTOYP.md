# Cucharico – erstes Metatile-Set

- `tiles.png`: indiziertes 4-bpp-PNG, 128×136 Pixel. Die zusätzliche 17. Tile-Zeile ist transparent; Tile-ID 256 dient als leere obere Ebene.
- `metatiles.bin`: 16 Metatiles × 8 Einträge × 2 Byte = 256 Byte. Je Metatile vier Einträge unten und vier oben.
- `metatile_attributes.bin`: 16 × 2 Byte = 32 Byte. Verhalten: Gras-/Blumen-Metatile `MB_TALL_GRASS`, Sand und Ufer `MB_SAND`, Wasser `MB_OCEAN_WATER`; übrige Metatiles zunächst `MB_NORMAL`. Ebenentyp ist `METATILE_LAYER_TYPE_NORMAL`.
- `palettes/06.pal`: 16-Farben-Palette für Secondary-Palettenslot 6.

Enthalten: Grasvarianten, Sand, Erdweg, Wasser, Ufer, Fels, Steinweg, Blattwerk, Dach, Hauswand und Dekor.

Das Tileset ist in den Engine-Datendateien registriert und dem Cucharico-Layout zugewiesen. Die 32×18-Testkarte markiert 19 Felder mit Fels-/Busch-Metatiles über die Mapgrid-Kollisionsbits als blockierend. Porymap-Prüfung, ROM-Build und Emulator-Test fehlen; die Kollision ist daher noch nicht spielseitig bestätigt.
