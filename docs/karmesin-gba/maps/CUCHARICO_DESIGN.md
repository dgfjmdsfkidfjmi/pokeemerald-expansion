# Cucharico – Kartendesign und technischer Stand

Status: Der ursprüngliche Designentwurf wurde als verbundener 32×18-Außenkarten-Prototyp umgesetzt. Die Porymap-GUI-Prüfung, der ROM-Build und der Emulator-Test stehen noch aus.

## Spielgefühl und Orientierung

Cucharico ist ein kleines, sonniges Küstendorf. Vom Spielerhaus aus soll der Dorfplatz sichtbar sein, Nemila wartet dort und der Weg nach Norden führt zum Cucharico-Pfad. Der Strand liegt im Süden; Felsen und Palmen rahmen die Siedlung.

## Technische Zielwerte

- Außenkarte: 32 × 18 Metatiles (16 × 16 Pixel pro Metatile).
- Kamera: klassische GBA-Pokémon-Draufsicht.
- Hauptmaterialien: Küstengras, heller Sand, warmes Pflaster, türkisblaues Wasser und graubrauner Fels.
- Tileset: eigenes sekundäres `gTileset_Cucharico`, kombiniert mit `gTileset_General`.

## Zonen und Events

| Zone | Bereich | Aktuelle Umsetzung |
|---|---|---|
| Nordausgang | x 15–16, y 0–7 | Weg zum verbundenen Cucharico-Pfad |
| Nordwest | x 3–7, y 2–6 | Spielerhausfassade mit Tür und Zaun |
| Nordost | x 24–28, y 2–6 | zweite Hausfassade, Zaun und Vegetation |
| Dorfplatz | x 11–20, y 8–10 | Steinfläche, Nemila bei (18, 9) |
| Südstrand | y 11–14 | Sand, Weg, Schild und Uferkante |
| Küste | y 15–17 | Wasserfläche und Felsrahmen |

BG-Events: Dorfschild (18, 2), Strandschild (8, 12). Die Haustür liegt bei (5, 4) und führt in die separate Innenkarte.

## Kollisions- und Höhenregeln

- Alle 576 Zellen der Außenkarte verwenden Elevation 3.
- Wasser verwendet `MB_OCEAN_WATER`; Sand und Ufer verwenden `MB_SAND`.
- Blumen-/Akzentgras verwendet `MB_SHORT_GRASS`; das Schild-Metatile verwendet `MB_SIGNPOST`.
- Hauswände/-dach, Zaun, Felsen, Büsche, Palmen und Schilder sind über Mapgrid-Kollisionsbits blockiert.
- Nemila steht auf einer begehbaren Steinfläche.

## Aktueller technischer Stand

- `Cucharico`: 32 × 18, 1.152 Byte `map.bin`, 76 blockierte Kartenfelder.
- `Cucharico_Path`: 32 × 24, 1.536 Byte `map.bin`, 60 blockierte Kartenfelder; mit Cucharico verbunden.
- `Cucharico_PlayerHouse`: 11 × 9, eigene Kartenregistrierung und Rückwarp. Das Innenlayout ist noch eine Kopie der Hoenn-Spielerhauseinrichtung.
- Eigenes indiziertes 4-bpp-Tileset mit 16 Metatiles und 16 gleichartigen Paletten-Dateien liegt im Repository.

Die automatisierte technische Vorprüfung steht in [PORYMAP_PRUEFUNG.md](PORYMAP_PRUEFUNG.md).

## Noch offene Punkte

- Porymap-GUI- und Emulatorprüfung von Grafik, Kollision, Höhen, Events und Kartenverbindungen.
- Eigenes Paldea-Interieur für das Spielerhaus.
- Eigenes Nemila-Sprite.
- Paldea-Region-/Kartenabschnittswerte und passende Musik.
- Trainer, Wildbegegnungen und weitere Story-Events auf dem Cucharico-Pfad.

**Wichtig:** Die Karten sind technisch registrierte Prototypen. Ohne erfolgreichen Build und Emulatorprüfung werden sie nicht als fertige spielbare Karten bezeichnet.
