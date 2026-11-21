# Karmesin-GBA – privates Fanprojekt

Dieses Verzeichnis enthält die Planung für einen privaten Pokémon-Karmesin-inspirierten GBA-ROM-Hack auf Basis von pokeemerald-expansion.

## Aktueller Stand
Den ehrlichen Umsetzungs- und Build-Status findest du in [BUILD_STATUS.md](BUILD_STATUS.md). Die vorhandenen Map- und Story-Dateien enthalten teilweise noch Platzhalter und sind nicht als fertiges, spielbares ROM zu verstehen.

## Entwicklungsregeln
- Änderungen erfolgen auf dem Branch `private-karmesin-gba`, nicht auf `master`.
- Das Originalprojekt bleibt unverändert.
- Dieses Projekt ist für den privaten Gebrauch gedacht; es werden keine Pull Requests an das Originalprojekt eingereicht.
- Vor jeder spielbaren ROM müssen Karten, Events, Grafiken, Musik und Spielabläufe tatsächlich integriert und anschließend kompiliert und getestet werden.

## Spielaufbau

### Hauptspiel
1. Anfangsgebiet: Spielerhaus, Cucharico, Cucharico-Pfad, Inlet-Grotte, Südliche Zone 1 und Pratolido.
2. Mittelteil: Paldea-Erkundung, acht Arenen, Team Star, fünf Herrscher-Pokémon und die Pokémon-Liga.
3. Finale: Zone Null, Professor-Handlung, Paradox-Pokémon und Abschluss.

### Nach dem Abspann
- Kitakami: Dorf, Festival, Ogerpon-Handlung, Masken und Nebenquests.
- Blaubeer-Akademie: Terarium, Liga-AG, Terapagos und Tera-Herausforderungen.

## Erster umzusetzender Abschnitt
- Spielerhaus
- Cucharico
- Cucharico-Pfad
- Inlet-Grotte

## Technischer Status
Es existieren erste technische Prototypen für Cucharico: Map-Registrierung, eigenes sekundäres Tileset, Metatile-/Attributdateien, ein 32×18-Terrain-Aufbau sowie Schild-Events und Nemilas Platzhalter-NPC. Diese Daten wurden noch nicht in Porymap visuell geprüft; es gibt keinen bestätigten ROM-Build oder Emulator-Test. Weitere Karten sind weiterhin überwiegend Planung.
