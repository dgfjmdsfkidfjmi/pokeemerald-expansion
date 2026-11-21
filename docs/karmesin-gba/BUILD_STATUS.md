# Entwicklungsstatus – Karmesin-GBA

Stand: 21.11.2026  
Arbeitsbranch: `private-karmesin-gba`

## Ziel
Ein privates, deutschsprachiges Pokémon-Karmesin-inspiriertes GBA-Spiel auf Basis der pokeemerald-expansion-Engine. Die Engine ist nur das technische Fundament; sie ist noch kein Karmesin-Spiel.

## Was im Repository vorhanden ist

### Projektplanung
- Grober Hauptspiel- und Postgame-Umfang ist dokumentiert.
- Das Anfangsgebiet und der geplante Ablauf der Starterwahl sind beschrieben.
- Cucharico besitzt einen Lage-/Koordinatenentwurf.

### Cucharico – erster Tileset- und Kartenprototyp
- Eigenes sekundäres Tileset `gTileset_Cucharico` in `graphics.h`, `metatiles.h` und `headers.h` registriert.
- 16 Palette-Bänke angelegt; Bank 6 enthält die verwendeten Cucharico-Farben.
- 16 Metatiles mit acht Einträgen pro Metatile und 16 Attributwerten erstellt.
- Cucharico-Layout auf das eigene Tileset umgestellt.
- 32×18-Karte mit Gras, Blumen, Weg, Sand, Ufer und Wasser aufgebaut; sekundäre Metatiles beginnen nach den 512 General-Metatiles bei ID 512.
- Zwei Schild-Events sind in den Map-Daten und Skripten eingetragen.
- Nemila ist als NPC-Eintrag mit einem ersten Dialog vorhanden und steht im Kartenprototyp auf dem gepflasterten Platz bei (18, 9).

## Was ausdrücklich noch NICHT fertig ist
- Das Tileset ist registriert, aber noch nicht mit Porymap oder einem ROM-Build validiert.
- Das aktuelle 32×18-Layout ist ein erster Terrain-Testaufbau, noch kein fertiges Dorf mit Häusern, Klippen, Palmen und individuellen Dekorationen.
- Metatile-Attribute nutzen `MB_SHORT_GRASS` für das Blumen-/Akzentgras, `MB_SAND` für Sand/Ufer und `MB_OCEAN_WATER` für Wasser. 19 Kartenfelder mit Fels-/Busch-Metatiles haben zusätzlich die Mapgrid-Kollisionsbits gesetzt. Diese Werte sind noch nicht im Spiel getestet.
- Ein individuelles Nemila-Sprite fehlt.
- Spielerhaus, Cucharico-Pfad, Inlet-Grotte, Pratolido und Mesalona City sind noch keine verbundenen spielbaren Karten.
- Cucharico verwendet vorläufige Hoenn-Regions-/Kartenabschnittswerte und Littleroot-Musik.
- Warps und Verbindungen zwischen den Anfangskarten fehlen.
- Starterwahl mit Sprigatito, Krokel und Kwaks ist bisher nur geplant; die Engine-Auswahl wurde nicht umgestellt.
- Nemilas Dialog/NPC wurde nicht kompiliert oder im Spiel getestet; ihre Position (18, 9) liegt laut Binärdaten auf dem Pflaster-Metatile 9.
- Es wurde noch keine GBA-ROM gebaut oder in einem Emulator getestet.

## Reihenfolge der nächsten Arbeit

1. GBA-Toolchain und Build des unveränderten Ausgangsprojekts prüfen.
2. Gültige Paldea-Region-/Kartenkonstanten und passende Musikdefinitionen im Quellcode finden oder ergänzen.
3. Cucharico mit einem echten, in Porymap bearbeiteten Tileset-Layout gestalten.
4. Spielerhaus und Cucharico-Pfad erstellen und mit Warps verbinden.
5. Nemila-Sprite, NPC-Position und Dialog im Build testen.
6. Starterwahl sicher auf Sprigatito, Krokel und Kwaks umstellen, ohne andere Spielmodi zu beschädigen.
7. Erst danach Intro, erste Kämpfe und weitere Orte schrittweise integrieren.

## Qualitätsregel
Eine Änderung gilt erst dann als spielbar, wenn die relevanten Daten generiert, die ROM erfolgreich gebaut und die Szene im Emulator geprüft wurde. Dokumentation und eingetragene Platzhalter werden nicht als fertige Spielinhalte bezeichnet.

## Grafik – Cucharico

Die Tileset-Spezifikation und Produktionsreihenfolge stehen in [TILESET_CUCHARICO.md](graphics/TILESET_CUCHARICO.md). Der indizierte 128×136-Grafik-Atlas, 16 Metatiles, 16 Attribute und alle 16 Palettenbänke liegen unter `data/tilesets/secondary/cucharico/`. Das Tileset ist in den Engine-Datendateien registriert und dem Cucharico-Layout zugewiesen. Die 32×18-Testkarte verwendet sekundäre Metatile-IDs ab 512 (General enthält 512 Metatiles). Die Terrain-Attribute sind teilweise gesetzt (`MB_SHORT_GRASS`, `MB_SAND`, `MB_OCEAN_WATER`); 19 Fels-/Busch-Felder sind als blockierend markiert. Eine automatisierte Formatprüfung ist in [PORYMAP_PRUEFUNG.md](maps/PORYMAP_PRUEFUNG.md) dokumentiert. Porymap-GUI-, Build- und Emulator-Test fehlen.
