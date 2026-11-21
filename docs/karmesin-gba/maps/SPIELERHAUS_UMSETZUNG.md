# Spielerhaus in Cucharico – Karten- und Szenenvorbereitung

Status: vollständiger Innenraum- und Story-Bauplan; noch keine Porymap-Karte und keine Events im ROM.

## Ziel
Das Spielerhaus ist der tatsächliche Startpunkt des Paldea-Abenteuers. Der Spieler beginnt im Obergeschoss in seinem Zimmer, geht nach unten, spricht kurz mit einem Elternteil und verlässt das Haus nach Cucharico. Nemila wartet später am Dorfplatz.

## Technische Aufteilung
- Zwei getrennte Innenkarten: Spielerzimmer/Obergeschoss und Erdgeschoss.
- Beide Innenkarten verwenden eigene Layout-IDs und jeweils eigene map.json-, scripts.inc-, map.bin- und border.bin-Dateien.
- Die Haustür im Erdgeschoss erhält einen Warp nach Cucharico vor die Haustür des Spielers.
- Eine Treppe verbindet Ober- und Erdgeschoss über passende Warps.
- Die Startposition eines neuen Spielstands liegt im Spielerzimmer, nicht direkt auf der Außenkarte.

## Obergeschoss – Spielerzimmer (Zielgröße 14 × 10 Metatiles)

```
##############
#............#
#..BBBB......#
#..BBBB..WW..#
#..........T.#
#..DD........#
#..DD....SS..#
#..........T.#
#......VV....#
##############
```

Legende: # Wand, B Bett, W Fenster, T Deko/Pflanze, D Schreibtisch, S Spielkonsole/Regal, V Treppe nach unten, . begehbarer Boden.

### Raumdetails
- Bett links oben; der Spieler startet direkt davor.
- Fenster an der oberen/rechten Wand mit kleinem Tageslicht-Akzent.
- Schreibtisch mit Notizbuch; optionaler Untersuchungsdialog.
- Regal oder Spielkonsole als dekoratives Objekt.
- Treppe unten mittig führt ins Erdgeschoss.
- Keine unnötigen NPCs im Startzimmer; das Intro soll ruhig beginnen.

## Erdgeschoss – Wohnbereich (Zielgröße 14 × 10 Metatiles)

```
##############
#....KK......#
#....KK..TT..#
#............#
#..TT....CC..#
#............#
#......VV....#
#............#
#......DD....#
##############
```

Legende: K Küchenzeile, T Tisch/Stühle, C Schrank/Kommode, V Treppe nach oben, D Haustür, . begehbarer Boden.

### Raumdetails
- Küchenzeile im oberen linken Bereich.
- Kleiner Esstisch rechts oben; Stühle als blockierende Möbel.
- Kommode/Schrank an der rechten Wand.
- Treppe mittig unten verbindet zum Obergeschoss.
- Haustür unten mittig; Warp nach Cucharico.
- Ein Elternteil-NPC steht seitlich im freien Laufbereich, nicht direkt auf dem Warp.

## Intro-Ablauf
1. Neuer Spielstand startet im Spielerzimmer. Eine kurze Textbox begrüßt den Morgen.
2. Spieler kann das Zimmer kurz ansehen und geht die Treppe hinunter.
3. Elternteil sagt: „Guten Morgen! Heute wartet ein besonderer Tag auf dich. Nemila wollte dich am Dorfplatz treffen.“
4. Spieler kann optional Küche/Tisch untersuchen; diese Objekte blockieren keine Wege.
5. Spieler geht zur Haustür. Beim Verlassen wird der Intro-Fortschritt gespeichert.
6. Außen-Warp setzt den Spieler vor das eigene Haus in Cucharico.
7. Der Weg zum Dorfplatz ist offen; Nemilas Starter-Szene wird erst nach ihrer separaten Implementierung aktiviert.

## Event- und Zustandsplanung
- Einen freien Story-Flag/Variablenbereich erst nach Prüfung der vorhandenen IDs auswählen; keine vorgeschlagenen IDs ungeprüft verwenden.
- Intro-Textboxen dürfen beim erneuten Betreten des Hauses nicht erneut abgespielt werden.
- Die Elternteil-Interaktion erhält einen Vorher-/Nachher-Dialog abhängig vom Intro-Flag.
- Treppen-Warps müssen die Rückkehr an die jeweils richtige Position erlauben.
- Der Haustür-Warp muss in beide Richtungen funktionieren.

## Grafikrichtung
- GBA-Innenraum mit warmem Holzfußboden, hellen Wänden und terrakotta/orangefarbenen Akzenten.
- Möbel als passende 16×16-Metatiles oder zusammengesetzte größere Objekte.
- Fenster mit Tageslicht; keine modernen 3D- oder HD-Elemente.
- Elternteil-Sprite zunächst als Platzhalter; eigenes Sprite später.

## Technische Checkliste
1. Zwei Layouts in Porymap mit korrekter 14×10-Größe erstellen.
2. Innenraum-Tileset und Kollisionswerte für Möbel/Treppen festlegen.
3. Beide Maps registrieren und Treppen-Warps verbinden.
4. Haustür-Warp mit Cucharico verbinden.
5. Startposition und Intro-Flag mit vorhandener Engine-Logik verknüpfen.
6. Dialog, NPC und Rückkehr-Warps kompilieren und im Emulator testen.

## Noch nicht umgesetzt
Dieses Dokument legt Räume und Ablauf fest. Es erstellt keine Binärlayouts, Grafiken, Warps oder spielbaren Events. Der Startpunkt kann erst umgestellt werden, wenn beide Karten registriert, verbunden und erfolgreich getestet sind.