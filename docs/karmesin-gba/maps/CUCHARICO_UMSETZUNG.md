# Cucharico – Umsetzungsplan für die erste echte Spielkarte

Status: Kartenregistrierung vorhanden; Layoutgrafik und Verbindungen sind noch Platzhalter – noch keine spielbare Karte.

## Ziel
Die erste Paldea-Karte wird als eigenständige Außenkarte im Emerald-Engine-Format angelegt. Der Ortsname im Spiel lautet **Cucharico**. Die Karte soll eine kleine Küstensiedlung mit südlichem Strand, zentralem Dorfplatz und nördlichem Ausgang zum Cucharico-Pfad werden.

## Engine-Anforderungen (aus dem bestehenden Projekt geprüft)
Jede Karte benötigt mindestens:
- `data/maps/<MapName>/map.json`
- `data/maps/<MapName>/scripts.inc`
- einen Eintrag in `data/maps/map_groups.json`
- eine registrierte Map-Konstante bzw. die vom Projekt generierte Map-ID
- ein Layout mit passender Layout-Definition sowie `map.bin` und `border.bin`
- passende Tilesets/Metatiles und eine im Spiel verfügbare Kartenmusik

Die vorhandene Karte Littleroot Town zeigt das JSON-/Event-Schema. Ihre Layout-Binärdateien sind eigene Dateien; eine reine JSON-Skizze reicht daher nicht für eine kompilierbare Karte.

## Geplanter Kartenaufbau
Zielgröße: **32 × 18 Metatiles**.

Koordinatenursprung: oben links (0,0).

| Bereich | Koordinaten | Inhalt |
|---|---:|---|
| Nordausgang | x 14–17, y 0–2 | Übergang zum Cucharico-Pfad |
| Nordwest | x 1–11, y 2–7 | Wohnhaus und kleiner Garten |
| Nordost | x 20–29, y 2–7 | Klippen, Palmen und Aussicht |
| Dorfplatz | x 11–21, y 7–12 | Brunnen/Platz, Nemila-Treffpunkt |
| Westküste | x 0–8, y 8–15 | Sand, Wasserlinie, Steg |
| Südost | x 20–30, y 12–16 | Strandzugang und Küstenweg |
| Südausgang | x 14–18, y 17 | Rückweg/Ankunft am Küstenbereich |

## Event- und Warp-Entwurf
- Warp am Nordausgang führt später auf den Cucharico-Pfad.
- Ein Haus-Warp führt in die separate Spielerhaus-Karte.
- Nemila steht zunächst am Dorfplatz; ihr Intro-Event wird erst nach Fertigstellung der Kartenverknüpfungen eingebaut.
- Schilder am Dorfeingang und beim Strand erhalten kurze deutsche Orts-/Hinweistexte.
- Keine Trainerkämpfe auf dieser ersten Karte.

## Grafikrichtung
- GBA-Pokémon-Perspektive von oben, 16×16-Metatile-Raster.
- Mehrere abgestimmte Farben pro Material: Gras, Sand, Wasser, Fels und Dächer.
- Küstenwasser mit wechselnden Ufer-Metatiles; Wege mit klaren Kanten.
- Häuser, Palmen, Büsche, Blumen und Steg als echte Tileset-Objekte statt Textzeichen oder Farbflächen.

## Tatsächlicher Zwischenstand auf `private-karmesin-gba`
- `map.json`, `scripts.inc`, Map-Gruppen-Eintrag und `LAYOUT_CUCHARICO` sind angelegt.
- Das Layout ist 32 × 18 Metatiles groß, aber `map.bin` besteht derzeit nur aus demselben Platzhalter-Metatile `0x0130` an jeder Position. Das ergibt noch kein gestaltetes Dorf.
- Die beiden Schild-Events und Nemilas NPC-/Dialogeintrag sind vorhanden. Nemilas Position und Höhe müssen nach dem echten Layout geprüft werden.
- Die Karte verwendet vorläufig Hoenn/Littleroot-Regiondaten und Littleroot-Musik. Diese Werte sind ausdrücklich Platzhalter und müssen durch gültige Paldea-Konstanten bzw. passende Musik ersetzt werden, sobald sie im Projekt definiert sind.
- Es gibt noch keine Warps oder Kartenverbindungen. Cucharico ist daher noch nicht mit Spielerhaus oder Cucharico-Pfad verbunden.
- Die aktuelle Nemila-Grafik ist `OBJ_EVENT_GFX_GIRL_3`; das ist nur ein Platzhalter, kein eigenes Nemila-Sprite.
- Es wurde kein ROM-Build und kein Emulator-Test durchgeführt.

## Noch notwendige technische Arbeit
1. Eigenes Paldea-Tileset bzw. zulässige, passende Basis-Metatiles festlegen.
2. Layout in Porymap anlegen und die Binärdateien erzeugen.
3. Layout-Definition und Map-Gruppe nach den Generator-Konventionen registrieren.
4. Map-JSON, Warps, NPCs und Skripte ergänzen.
5. ROM mit der passenden GBA-Toolchain bauen und Karte im Emulator testen.

**Wichtig:** Bis Schritt 5 abgeschlossen ist, ist Cucharico ein Entwurf und keine im Spiel erreichbare Karte.