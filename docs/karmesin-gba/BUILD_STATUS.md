# Entwicklungsstatus – Karmesin-GBA

Stand: 21.11.2026  
Arbeitsbranch: `private-karmesin-gba`

## Ziel

Ein privates, deutschsprachiges Pokémon-Karmesin-inspiriertes GBA-Spiel auf Basis der pokeemerald-expansion-Engine. Die Engine ist das technische Fundament; sie ist noch kein fertiges Karmesin-Spiel.

## Implementiert: Cucharico-Prototyp

### Tileset und Grafik
- Eigenes sekundäres Tileset `gTileset_Cucharico` in `graphics.h`, `metatiles.h` und `headers.h` registriert.
- Neuer, eigenständiger Gen-3-inspirierter 4-bpp-Atlas: 128 × 136 Pixel, indiziertes PNG, 272 Grafik-Tiles.
- 16 Metatiles mit je acht Einträgen; 16 Paletten-Dateien verwenden dieselbe neue 16-Farben-Palette. Die Metatile-Grafiken wählen Bank 6.
- Motive für Gras, Blumen, Sand, Weg, Wasser, Ufer, Felsen, Dorfplatz, Büsche, Dach, Wand, Zaun, Palme und Schilder.
- Metatile-Attribute für `MB_SHORT_GRASS`, `MB_SAND`, `MB_OCEAN_WATER` und `MB_SIGNPOST` gesetzt.

### Außenkarte Cucharico
- `LAYOUT_CUCHARICO`: 32 × 18 Metatiles, 576 Kartenfelder, alle auf Elevation 3.
- Eigener Kartenaufbau mit zwei Hausfassaden, Garten-Zäunen, Palmen, Büschen, Dorfplatz, Nemila-Treffpunkt, Weg, Strand, Ufer und Wasser.
- 76 Kartenfelder sind über Mapgrid-Kollisionsbits blockiert.
- Haustür bei (5, 4) führt in die Spielerhaus-Karte.
- Dorfschild bei (18, 2), Strandschild bei (8, 12), jeweils mit deutschem Text.
- Nemila steht bei (18, 9) auf dem gepflasterten Platz. Sie verwendet noch ein Platzhalter-Sprite.

### Verbundene Karten
- `Cucharico_Path`: 32 × 24 Metatiles, mit Cucharico nach Norden verbunden; Rückverbindung nach Süden. 60 Felder sind als Hindernisse markiert.
- `Cucharico_PlayerHouse`: eigene 11 × 9-Innenkarte mit Rückwarp nach Cucharico und einem einfachen Mutter-NPC.
- **Wichtiger Platzhalter:** Die Binärkarte des Spielerhauses wurde vorläufig aus `LittlerootTown_BrendansHouse_1F` kopiert. Die Innenausstattung ist deshalb noch Hoenn-Stil und muss durch eine eigene Paldea-Innenkarte ersetzt werden.

## Was ausdrücklich noch NICHT fertig oder getestet ist

- Porymap-GUI-Prüfung der drei Layouts steht noch aus. Die technischen Daten wurden automatisiert auf Formate, IDs, Paletten, Elevation und Event-Koordinaten geprüft.
- Es wurde noch keine GBA-ROM gebaut und kein Emulator-Test durchgeführt.
- Cucharico und Cucharico-Pfad verwenden vorläufige Hoenn-Regions-/Kartenabschnittswerte sowie Littleroot-/Route-101-Musik.
- Nemilas Grafik ist weiterhin `OBJ_EVENT_GFX_GIRL_3`; ein eigenes Sprite fehlt.
- Die Wegkarte hat noch keine Trainer- oder Wildbegegnungs-Events.
- Inlet-Grotte, Südliche Zone 1, Pratolido, Mesalona City, Akademie, Arenen, Team Star und die spätere Hauptgeschichte sind noch nicht als verbundene spielbare Karten umgesetzt.
- Die Starterwahl mit Sprigatito, Krokel und Kwaks ist geplant, aber noch nicht in der Engine umgesetzt.

## Nächste Arbeit

1. Cucharico und Cucharico-Pfad in Porymap visuell prüfen und nötige Korrekturen übernehmen.
2. Einen ROM-Build auf `private-karmesin-gba` ausführen und Fehler beheben; danach im Emulator testen.
3. Die Hoenn-Innenkarte des Spielerhauses durch ein eigenes Paldea-Interieur ersetzen.
4. Gültige Paldea-Regions-/Kartenabschnittswerte und passende Musik ergänzen.
5. Nemila-Sprite, NPC-Dialog und die Spielstart-Sequenz einbauen und testen.
6. Danach Inlet-Grotte, Südliche Zone 1 und Pratolido schrittweise verbinden.

## Qualitätsregel

Eine Änderung gilt erst dann als spielbar, wenn die relevanten Daten generiert, die ROM erfolgreich gebaut und die Szene im Emulator geprüft wurde. Dokumentation, Layouts und eingetragene Platzhalter werden nicht als fertige Spielinhalte bezeichnet.

## Technische Prüfdokumentation

Die Dateiformate, Raster, Metatile-Referenzen, Event-Koordinaten und offenen manuellen Prüfungen stehen in [PORYMAP_PRUEFUNG.md](maps/PORYMAP_PRUEFUNG.md).
