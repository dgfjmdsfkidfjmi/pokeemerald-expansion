# Cucharico – Metatile-Bauplan (Prototyp)

Dieser Bauplan ordnet die 8×8-Grafik-Tiles aus `graphics/tilesets/cucharico/tiles.png`
zu ersten 16×16-Motiven. Die Koordinaten sind nullbasiert und beziehen sich auf
das 16×16-Raster des Atlas. Tile-ID = `Zeile * 16 + Spalte`.

## Atlas-Bereiche

| Atlas-Zeilen | Inhalt |
|---|---|
| 0–2 | Grasvarianten |
| 3–4 | Sand und Erdweg |
| 5–6 | Wasser |
| 7 | Uferkante |
| 8 | Fels/Klippe |
| 9 | Steinweg |
| 10–11 | Blattwerk und Stammsegmente |
| 12–13 | Dach- und Wandfragmente |
| 14–15 | Zaun, Blumen, Schild und Zierdetails |

## Erste 16×16-Motive

Jede Zeile unten beschreibt vier 8×8-Quadranten in Lesereihenfolge
oben links, oben rechts, unten links, unten rechts. Das ist eine
Grafik-Vorschau-Zuordnung, noch keine direkt ladbare Engine-Metatile-Datei.

| Motiv | 8×8-Tile-IDs | Zweck |
|---|---|---|
| Gras A | 0, 1, 16, 17 | Standardboden |
| Gras B | 2, 3, 18, 19 | Gras mit kleinen Details |
| Gras C | 32, 33, 48, 49 | Blumen-/Akzentgras |
| Sand A | 48, 49, 64, 65 | heller Sand |
| Erdweg A | 64, 65, 80, 81 | kompakter Dorfweg |
| Wasser A | 80, 81, 96, 97 | ruhige Wasserfläche |
| Wasser B | 82, 83, 98, 99 | Wasser mit Glanzpixeln |
| Ufer A | 112, 113, 128, 129 | gerade Uferkante |
| Fels A | 128, 129, 144, 145 | Felswand |
| Stein A | 144, 145, 160, 161 | gepflasterter Weg |
| Blattwerk A | 160, 161, 176, 177 | Busch-/Baumlaub-Ausschnitt |
| Dach A | 192, 193, 208, 209 | Dachfläche |
| Wand A | 208, 209, 224, 225 | helle Hauswand |
| Zaun A | 224, 225, 240, 241 | Dekoration |

## Palette

Die zugehörige JASC-Palette liegt in `graphics/tilesets/cucharico/palettes/00.pal`.
Sie enthält 16 Einträge und entspricht der indizierten PNG-Palette.

## Noch offene Engine-Arbeit

- Die Engine-Konstante `NUM_TILES_PER_METATILE` ist in diesem Projekt 8.
  Deshalb darf die obige 4-Quadranten-Vorschau nicht ungeprüft als
  `metatiles.bin` geschrieben werden.
- Das genaue 8-Einträge-Metatile-Layout und die Attribut-Bitfelder müssen
  anhand eines passenden Porymap-/Engine-Exports verifiziert werden.
- Danach werden echte `metatiles.bin`, `metatile_attributes.bin`,
  Tileset-Registrierung und eine Testmap erstellt.
- Kollision, Ebenenverhalten und Wasserübergänge sind noch nicht getestet.

**Status:** Zuordnungsvorschlag und Palette angelegt; noch nicht spielbereit.
