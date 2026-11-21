# Cucharico – Umsetzungsstand der ersten Paldea-Außenkarte

Status: verbundener Kartenprototyp auf `private-karmesin-gba`. Die Daten sind registriert und automatisiert geprüft, aber Porymap-GUI, ROM-Build und Emulator-Test stehen noch aus.

## Kartenverbund

| Karte | Layout | Größe | Funktion |
|---|---|---:|---|
| Cucharico | `LAYOUT_CUCHARICO` | 32 × 18 | Küstendorf, Dorfplatz, Strand, Spielerhaus |
| Cucharico-Pfad | `LAYOUT_CUCHARICO_PATH` | 32 × 24 | Nordverbindung von Cucharico |
| Spielerhaus | `LAYOUT_CUCHARICO_PLAYER_HOUSE` | 11 × 9 | Vorläufige Innenkarte mit Rückwarp |

## Cucharico – aktueller Kartenaufbau

- Nordausgang bei x 15–16 verbindet nach Norden mit `MAP_CUCHARICO_PATH`.
- Nordwestliches Spielerhaus mit rotem Dach, heller Wand, Zaun und Tür.
- Zweite Hausfassade im Nordosten.
- Zentrale gepflasterte Platzfläche mit Nemila bei (18, 9).
- Palmen, Büsche und Blumen-/Grasakzente zur Rahmung des Platzes.
- Südlicher Strand mit Sand, Uferkante und wechselnden Wasser-Metatiles.
- Dorfschild bei (18, 2) und Strandschild bei (8, 12).

`map.bin` enthält 576 16-Bit-Kartenfelder (1.152 Byte); alle Felder verwenden Elevation 3. Hausdach/-wände, Zäune, Felsen, Büsche, Palmen und Schilder werden über Mapgrid-Kollisionsbits blockiert. Die Haustür liegt auf dem primären General-Metatile 33.

## Verbindungen und Events

- Cucharico ist über eine Nordverbindung mit `MAP_CUCHARICO_PATH` verbunden.
- Der Cucharico-Pfad verbindet nach Süden zurück mit Cucharico.
- Die Haustür bei (5, 4) führt in `MAP_CUCHARICO_PLAYER_HOUSE`.
- Der Rückwarp im Haus liegt bei (9, 8).
- Nemila ist als NPC bei (18, 9) eingetragen und hat einen ersten deutschen Dialog.
- Die beiden Schilder verwenden eigene BG-Events und deutsche Hinweistexte.

## Wichtige Platzhalter

- Die Innenkarte des Spielerhauses verwendet vorläufig eine Kopie der Binärkarte von `LittlerootTown_BrendansHouse_1F` und damit noch die Hoenn-Einrichtung. Die Kartenregistrierung ist eigenständig; die Einrichtung ist noch nicht Paldea-gerecht.
- Cucharico und die Innenkarte verwenden vorläufig Hoenn-Region-/Kartenabschnittswerte und Littleroot-Musik. Der Pfad nutzt Route-101-Musik und Map-Section als technische Platzhalter.
- Nemila verwendet `OBJ_EVENT_GFX_GIRL_3`; ein individuelles Sprite fehlt.
- Der Cucharico-Pfad ist bisher eine Erkundungs-/Wegkarte ohne Trainer- oder Wildbegegnungs-Events.

## Noch notwendige Arbeit

1. Alle drei Layouts in Porymap öffnen und die Grafik, obere Ebene, Palette, Übergänge, Höhen und Kollisionen visuell prüfen.
2. ROM-Build ausführen und Haustür, Rückwarp, Nordverbindung, Schilder und Nemila im Emulator testen.
3. Die Hoenn-Inneneinrichtung des Spielerhauses durch eine eigene Paldea-Innenkarte ersetzen.
4. Gültige Paldea-Region-/Kartenabschnittswerte und passende Musik ergänzen.
5. Nemilas eigenes Overworld-Sprite sowie den finalen Intro-Dialog einbauen.

**Abnahmeregel:** Cucharico gilt erst dann als spielbar, wenn Porymap-Prüfung, erfolgreicher Build und Emulator-Test dokumentiert sind.
