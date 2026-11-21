# Cucharico – erstes Metatile-Set

- `tiles.png`: indiziertes 4-bpp-PNG, 128×136 Pixel. Die zusätzliche 17. Tile-Zeile ist transparent; Tile-ID 256 dient als leere obere Ebene.
- `metatiles.bin`: 16 Metatiles × 8 Einträge × 2 Byte = 256 Byte. Je Metatile vier Einträge unten und vier oben.
- `metatile_attributes.bin`: 16 × 2 Byte = 32 Byte. Alle Attribute stehen zunächst auf 0 (normales Verhalten, normale Ebene).
- `palettes/06.pal`: 16-Farben-Palette für Secondary-Palettenslot 6.

Enthalten: Grasvarianten, Sand, Erdweg, Wasser, Ufer, Fels, Steinweg, Blattwerk, Dach, Hauswand und Dekor.

**Noch nicht registriert:** C-Arrays, Tileset-Pointer, Map-Layout-Zuweisung und Porymap-Konfiguration fehlen. Wasser, Fels und Gebäude brauchen noch eigene Kollisionsattribute. Kein ROM-Build oder Emulator-Test durchgeführt.
