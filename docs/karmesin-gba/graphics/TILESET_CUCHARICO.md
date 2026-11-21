# Cucharico – Tileset-Spezifikation und Produktionsstand

## Ziel und Stil

Eigenständiges Küsten-Tileset im klassischen Gen-3-GBA-Pixelstil: satte Grasfarben, heller Sand, türkisblaues Wasser, terrakottafarbene Dächer, helle Wände und gut lesbare dunkle Konturen. Die Motive sind neu gezeichnet und keine kopierten Emerald-Tiles.

## Technische Dateien

- Quelldatei: `graphics/tilesets/cucharico/tiles.png`
- Engine-Datei: `data/tilesets/secondary/cucharico/tiles.png`
- PNG: 128 × 136 Pixel, indiziertes 4-bpp-Format mit 16 Farben und 272 Grafik-Tiles.
- `metatiles.bin`: 16 Metatiles mit je acht 16-Bit-Einträgen (untere und obere Ebene).
- `metatile_attributes.bin`: 16 Einträge à 2 Byte.
- `palettes/00.pal` bis `palettes/15.pal`: derzeit identische Kopien der neuen 16-Farben-Palette.
- Alle Metatile-Grafikeinträge verwenden Palettenbank 6; Tile-ID 256 wird als transparente obere Ebene genutzt.

## Vorhandene Motive

Grundgras, Grasvariante, Blumen-/Akzentgras, Sand, Erdweg, Wasser und Wasser-Glanz, Ufer, Fels, Dorfplatz, Busch, Dach, Hauswand, Zaun, Palme und Schild.

Die genaue Zuordnung der 8×8-Tiles und die Metatile-Verhaltenswerte stehen in [METATILE_BAUPLAN_CUCHARICO.md](METATILE_BAUPLAN_CUCHARICO.md).

## Karten

- **Cucharico:** 32 × 18 Metatiles; Hausfassaden, Garten-Zäune, Palmen, Büsche, Weg, Dorfplatz, Schilder, Strand, Ufer und Meer. Die Haustür führt in die eigene Innenkarte.
- **Cucharico_Path:** 32 × 24 Metatiles; mit Cucharico verbunden.
- **Cucharico_PlayerHouse:** 11 × 9 Metatiles; nutzt vorläufig eine kopierte Emerald-Inneneinrichtung und muss noch neu gestaltet werden.

Alle drei Layouts sind registriert. Cucharico und Cucharico_Path verwenden das neue sekundäre Tileset mit `gTileset_General` als primärem Tileset.

## Kollisions- und Verhaltenswerte

- Blumen-/Akzentgras: `MB_SHORT_GRASS`
- Sand und Ufer: `MB_SAND`
- Wasser: `MB_OCEAN_WATER`
- Schild: `MB_SIGNPOST`
- Felsen, Büsche, Hauswände/-dächer, Zäune, Palmen und Schilder werden auf den tatsächlich belegten Kartenfeldern zusätzlich über Mapgrid-Kollisionsbits blockiert.

## Noch offene Tests und Arbeit

- Porymap-GUI-Prüfung aller drei Layouts, einschließlich Paletten, Ebenen, Übergängen und Kollisionsverhalten.
- ROM-Build und Emulator-Test.
- Spielerhaus-Innenraum durch eine eigene Paldea-Grafik ersetzen.
- Regionen-/Kartenabschnittswerte und Musik von den vorläufigen Hoenn-/Littleroot-Werten auf Paldea umstellen.
- Nemila-Overworld-Sprite und finale Dialog-/Story-Integration ergänzen.

**Status:** Das Tileset und die Außenkarten sind als technische Prototypen eingebunden. Ohne Porymap- und Emulatorprüfung gelten sie noch nicht als bestätigte spielbare Inhalte.
