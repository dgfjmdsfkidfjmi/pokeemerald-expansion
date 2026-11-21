# Kartenentwurf – Startgebiet Paldea

Branch: `private-karmesin-gba`

**Status:** Die Raster unten sind weiterhin Entwürfe. Cucharico besitzt inzwischen einen ersten 32×18-Terrain-Binärprototyp mit registriertem Tileset und Layout, aber noch keine Porymap-visuell geprüfte oder spielbare Karte. Spielerhaus, Cucharico-Pfad und Inlet-Grotte sind weiterhin Entwürfe; für spielbare Verbindungen fehlen Karten, Warps und Tests.

## Legende
- `G` Gras / begehbares Gelände
- `P` Pflaster / Weg
- `H` Haus
- `D` Tür / Warp
- `T` Baum / nicht begehbar
- `F` Zaun / Begrenzung
- `W` Wasser
- `R` Felswand
- `.` freier Boden
- `S` Startposition

## 1. Spielerhaus – Erdgeschoss (Innenkarte, 14 × 10)

```
##############
#............#
#..T.....T...#
#............#
#..Küche.....#
#............#
#....S.......#
#............#
#......D.....#
##############
```

Ziel: Start im eigenen Zimmer im Obergeschoss; Treppe führt ins Erdgeschoss. Die Haustür führt nach Cucharico. Möbel und Treppe benötigen eigene Metatiles und Kollisionswerte.

## 2. Cucharico – ältere räumliche Skizze (Außenkarte, 32 × 24)

Hinweis: Diese Skizze ist ein früherer Konzeptentwurf. Der aktuelle Terrain-Binärprototyp ist 32 × 18 Metatiles groß und wird separat in `maps/CUCHARICO_UMSETZUNG.md` dokumentiert.

```
TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
TT..H....TT........TT....H....TT
T...D....TT........TT....D....TT
T........PPPPPPPPPPPP...........T
T..TT....P..........P....TT.....T
T..TT....P....S.....P....TT.....T
T........P..........P...........T
TTTT..PPPP..........PPPP..TTTT..T
T....PP................PP.......T
T....P.....TT....TT.....P.......T
T....P.....TT....TT.....P.......T
T....PP................PP.......T
TTTT..PPPP..........PPPP..TTTT..T
T........P..........P...........T
T..H.....P..........P.....H.....T
T..D.....PPPPPPPPPPPP.....D.....T
T................................T
TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
```

Ziel: kleines Küstendorf mit Spielerhaus, wenigen Nachbarhäusern, zentralem Platz und Ausgang zum Cucharico-Pfad. Die Küstenlinie und die finale Kartengröße werden nach Festlegung des Tilesets angepasst.

## 3. Cucharico-Pfad (Außenkarte, 24 × 32)

```
TTTTTTTTTTTTTTTTTTTTTTTT
TGGGGGTTTTTTTTTTGGGGGGGT
TGGGGGTTTTTTTTTTGGGGGGGT
TGGGPPPPPPPPPPPPPPGGGGGT
TGGGPGGGGGGGGGGGGPGGGGGT
TGGGPGGGGGGGGGGGGPGGGGGT
TGGGPPPGGGGGGGGGGPGGGGGT
TGGGGGPGGGTTGGGGGPGGGGGT
TGGGGGPGGGTTGGGGGPGGGGGT
TGGGGGPPPPPPPPPPPPGGGGGT
TGGGGGGGGGGGGGGGGGGGGGGT
TGGGGTTGGGGGGGGTTGGGGGGT
TGGGGTTGGGGGGGGTTGGGGGGT
TGGGGGGGGGGGGGGGGGGGGGGT
TGGGGGGGGGGGGGGGGGGGGGGT
TGGGPPPPPPPPPPPPPPPPGGGGT
TGGGPGGGGGGGGGGGGGGPGGGT
TGGGPGGGGGGGGGGGGGGPGGGT
TGGGPPPPPPPPPPPPPPPPGGGGT
TGGGGGGGGGGGGGGGGGGGGGGT
TGGGGGGGGGGGGGGGGGGGGGGT
TGGGGGGGGGGGGGGGGGGGGGGT
TGGGGGGGGGGGGGGGGGGGGGGT
TTTTTTTTTTTTTTTTTTTTTTTT
```

Ziel: kurzer früher Pfad mit Grasflächen, Trainerplätzen und einem Übergang zur Inlet-Grotte. Begegnungstabellen und Trainer-Events werden später ergänzt.

## 4. Inlet-Grotte (Innenkarte, 20 × 16)

```
RRRRRRRRRRRRRRRRRRRR
R..................R
R..RR......RR......R
R..RR......RR......R
R..................R
R......WWWW........R
R......WWWW........R
R..................R
R....RR......RR....R
R....RR......RR....R
R..................R
R.........S........R
R..................R
R........D.........R
R..................R
RRRRRRRRRRRRRRRRRRRR
```

Ziel: kleine optionale Höhle mit Wasserbecken und einem späteren Story-Auslöser. Der erste Durchgang bleibt einfach und führt zurück auf den Pfad.

## Nächste technische Schritte
1. Eigenes Paldea-Tileset und passende Metatiles erstellen bzw. zulässige Ressourcen auswählen.
2. Raster in Porymap als echte Kartenlayouts anlegen und Kollisionsdaten setzen.
3. Map-JSONs und Warp-Events mit den echten Layout-IDs registrieren.
4. Startposition, Tür-Warps und Übergänge testen.
5. Erst danach einen ROM-Build starten und das Ergebnis im Emulator prüfen.

**Wichtig:** Diese Datei ist ein konkreter Kartenentwurf, keine bereits im Spiel vorhandene oder kompilierte Karte.
