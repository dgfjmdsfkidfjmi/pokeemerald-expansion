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

### Cucharico – erste technische Einträge
- Map-JSON und Map-Gruppen-Eintrag sind vorhanden.
- Layout-ID und 32×18-Layoutdateien sind angelegt.
- Zwei Schild-Events sind in den Map-Daten und Skripten eingetragen.
- Nemila ist als NPC-Eintrag mit einem ersten Dialog vorhanden.

## Was ausdrücklich noch NICHT fertig ist
- Das Cucharico-Layout enthält aktuell nur ein wiederholtes Platzhalter-Metatile und ist keine gestaltete Dorfkarte.
- Es fehlen echte Paldea-Grafiken, Häuser, Wege, Strand, Klippen, Palmen und ein individuelles Nemila-Sprite.
- Spielerhaus, Cucharico-Pfad, Inlet-Grotte, Pratolido und Mesalona City sind noch keine verbundenen spielbaren Karten.
- Cucharico verwendet vorläufige Hoenn-Regions-/Kartenabschnittswerte und Littleroot-Musik.
- Warps und Verbindungen zwischen den Anfangskarten fehlen.
- Starterwahl mit Sprigatito, Krokel und Kwaks ist bisher nur geplant; die Engine-Auswahl wurde nicht umgestellt.
- Nemilas Dialog/NPC wurde nicht kompiliert oder im Spiel getestet.
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

Die Tileset-Spezifikation und Produktionsreihenfolge stehen in [TILESET_CUCHARICO.md](graphics/TILESET_CUCHARICO.md). Die Konzeptgrafik ist noch nicht als GBA-Tileset eingebunden; Grafik-Tiles, Paletten, Metatiles und Attribute sind weiterhin offen.
