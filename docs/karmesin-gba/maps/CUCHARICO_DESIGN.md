# Cucharico – vollständiger GBA-Kartenentwurf

Status: vollständiger Design- und Bauplan; noch nicht als echte Tileset-Karte importiert.

## Spielgefühl und Orientierung
Cucharico ist ein kleines, sonniges Küstendorf. Der Spieler soll vom Haus aus den Dorfplatz sofort erkennen, Nemila dort finden und den Weg nach Norden zum Cucharico-Pfad sehen. Der Strand liegt südlich und westlich; Klippen und Palmen rahmen die Siedlung ein.

## Technische Zielwerte
- Außenkarte: **32 × 18 Metatiles** (16 × 16 Pixel pro Metatile).
- Kamera: klassische GBA-Pokémon-Draufsicht.
- Hauptmaterialien: sattes Küstengras, heller Sand, warmes Pflaster, türkisblaues Wasser, graubrauner Fels.
- Die Karte wird in Porymap gebaut. Die Raster-Skizze ist kein Ersatz für Metatile-Grafiken oder Kollisionsdaten.

## Zonenplan (Koordinaten ab links oben)
| Zone | Bereich | Gestaltung / Funktion |
|---|---|---|
| Nordausgang | x14–17, y0–2 | Wegöffnung zum Cucharico-Pfad; klare Wegkante |
| Nordwest-Wohnviertel | x1–11, y2–7 | Spielerhaus mit Garten, Zaun und Briefkasten |
| Nordost-Klippen | x20–30, y2–7 | Felsstufe, Palmen, Aussichtspunkt; nicht begehbare Begrenzung |
| Dorfplatz | x11–21, y7–12 | Pflasterfläche, kleiner Brunnen/Blumenkreis, Nemila-Treffpunkt |
| Westküste | x0–8, y8–15 | Sandstrand, Wasserlinie und kurzer Holzsteg |
| Ostgasse | x22–29, y8–13 | Verbindung vom Platz zum Strand und zu einem Nachbarhaus |
| Südstrand | x9–22, y13–16 | freie Sandfläche, Stranddetails, südlicher Küstenweg |
| Südausgang | x14–18, y17 | Wegkante als späterer Anschluss; vorerst geschlossen/dekorativ |

## Layout-Raster
Legende: G Gras, P Pflasterweg, H Haus, D Tür, F Zaun, T Baum/Palme, R Fels, S Sand, W Wasser, N Nemila-Treffpunkt, B Dorfplatz-Detail, . freier Boden.

```
RRRRRRRRRRRRRRPPPP RRRRRRRRRRRR
RGGFFFFGGGGGGGPPPP RRRRRRRRRRRR
RGGHHDGGGGGGGGPPPP RRRRTTTTRRRR
RGGGGGGGGGGGGGPPPP RRRRRRRRRRRR
RGGTTGGGGGGGGGPPPP RRRRRRRRRRRR
RGGTTGGGGGGGGGPPPP RRRRRRRRRRRR
RGGGGGGGGGGGGGPPPP RRRRRRRRRRRR
RGGGGGGGGGGPPPPPPPPPPPPGGGGGGGGR
WWSSSSGGGGGPPPPPPPPPPPPGGTTGGGGR
WWSSSSGGGGGPPPPPNPPPPPPGGGGGGGGR
WWSSSSGGGGGPPPPPBPPPPPPGGGGGGGGR
WWSSSSGGGGGPPPPPPPPPPPPGGGGGGGGR
WWSSSSSSSSSSPPPPPPPPPPPPGGGGGGGR
WWSSSSSSSSSSSSSSSSSSPPPPGGGGGGGR
WWSSSSSSSSSSSSSSSSSSPPPPGGGGGGGR
WWWWSSSSSSSSSSSSSSSSPPPPGGGGGGGR
WWWWWWSSSSSSSSSSSSSSPPPPGGGGGGGR
WWWWWWWWWWWWWWPPPPWWWWWWWWWWWWWW
```

**Raster-Hinweis:** Das Raster ist eine räumliche Kompositionshilfe. Vor Porymap-Import müssen alle Zeilen auf exakt 32 Zellen normalisiert und die Zonen anhand der Koordinatentabelle gesetzt werden. Die Leerzeichen dienen nur der Lesbarkeit und sind keine Tiles.

## Interaktionspunkte
- Spielerhaustür im Nordwesten: Warp in die separate Spielerhaus-Karte.
- Nemila: am Dorfplatz, zunächst nach dem Haus-Intro ansprechbar; ihre aktuelle Position (22,9) wird auf die finale freie Pflasterfläche verschoben, falls nötig.
- Dorfschild am nördlichen Weg: Name „Cucharico“ und kurzer Ortsgruß.
- Strandschild am westlichen Strandzugang: kurzer Hinweis auf den Strand.
- Nordausgang: Warp/Verbindung zum Cucharico-Pfad, sobald die Zielkarte existiert.
- Strandzugang: frei begehbar, aber kein Story-Zwang.

## Kollisions- und Höhenregeln
- Wasser, Felswände, Hauswände und Zäune blockieren.
- Pflaster, Gras, Sand und Steg sind begehbar; Steg erhält eigene Wasser-/Kollisionskante.
- Hausdach und dekorative Baumkronen werden als Overhead-Objekte behandelt.
- Nemila steht auf einer begehbaren Boden-Metat tile mit passender Elevation; Höhe 3 aus dem aktuellen Platzhalter-JSON nicht blind übernehmen.
- Warps liegen exakt vor Türen bzw. auf der markierten Nordöffnung.

## Grafik- und Audioleitlinie
- Keine Hoenn-Häuser oder Littleroot-Kulisse als finale Paldea-Grafik übernehmen.
- Hausstil: weiß/cremefarbene Wände, terrakottafarbenes Dach, dunkle Fenster und dezente orangefarbene Details.
- Vegetation: Palmen, niedrige Küstenbüsche, Blumen und wenige Schattenpixel.
- Wasser: mehrere Ufer- und Wellen-Metatiles, nicht eine einfarbige Fläche.
- Musik: später eine passende, eigens erstellte Paldea-inspirierte GBA-Komposition; bis dahin bleibt die Engine-Musik als Platzhalter markiert.

## Abnahme vor „fertig“
1. 32 × 18 Layout in Porymap angelegt und jede Rasterzeile geprüft.
2. Metatiles, Kollisionswerte, Höhen und Warps gesetzt.
3. Haus-Warp, Nordausgang, Schilder und Nemila-Position im Emulator geprüft.
4. Keine Hoenn-Regionswerte oder Littleroot-Assets mehr in der finalen Paldea-Karte.
5. Erfolgreicher ROM-Build dokumentiert.

## Aktueller technischer Stand
Die Map-Registrierung existiert bereits. Die aktuelle map.bin enthält jedoch nur ein wiederholtes Platzhalter-Metatile; dieser Entwurf ändert das nicht. Ohne echtes Tileset/Porymap-Layout, gültige Paldea-Konstanten, verbundene Zielkarten und Build-Test ist Cucharico weiterhin nicht spielbar.