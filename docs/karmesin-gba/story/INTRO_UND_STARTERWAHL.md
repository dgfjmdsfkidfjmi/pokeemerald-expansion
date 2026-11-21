# Spielablauf – Intro und Starterwahl in Paldea

Branch: `private-karmesin-gba`

**Status:** Story- und Technikentwurf. Noch keine Dialoge, Events oder Starteränderungen im ROM eingebaut.

## Ziel des Abschnitts

Der Spielstart soll sich wie ein kleines Abenteuer in Paldea anfühlen: Der Spieler wacht zu Hause in Cucharico auf, trifft Nemila und erhält eines der drei Paldea-Starter-Pokémon. Danach beginnt die erste Erkundung des Cucharico-Pfads.

## Geplanter Ablauf

| Schritt | Ort | Ereignis | Technischer Anknüpfungspunkt |
|---|---|---|---|
| 1 | Spielerhaus, 2. Stock | Spieler wacht auf; kurzer Blick auf Zimmer und Kalender | Startposition und erstes Map-Event |
| 2 | Spielerhaus, Erdgeschoss | Elternteil erinnert an den Besuch der Akademie | NPC-Dialog, Story-Variable |
| 3 | Cucharico | Spieler verlässt das Haus; Ortsname wird eingeblendet | Warp und Kartenname |
| 4 | Dorfplatz | Nemila wartet und erklärt, dass drei Pokémon zur Auswahl stehen | NPC-Event und Starter-Szene |
| 5 | Dorfplatz | Spieler wählt Sprigatito, Krokel oder Kwaks | Starter-Auswahl, Party-Übergabe |
| 6 | Dorfplatz | Nemila erklärt kurz die Pokémon-Kämpfe und fordert zu einem freundschaftlichen Testkampf heraus | Trainerkampf und Folgedialog |
| 7 | Cucharico-Pfad | Nemila zeigt den Weg Richtung Pratolido; Spieler darf erstmals frei erkunden | Map-Warp, erste Trainer und Wildbegegnungen |

## Starter-Auswahl

Die drei Starter sind fest für dieses Projekt vorgesehen:

| Auswahl | Art | Typ |
|---|---|---|
| **Sprigatito** | Pflanzenkatze | Pflanze |
| **Krokel** | Feuerkrokodil | Feuer |
| **Kwaks** | Ente | Wasser |

Die Pokémon-Spezies sind bereits in den Species-Definitionen des verwendeten pokeemerald-expansion-Branches vorhanden. Das bedeutet aber noch nicht, dass die Startauswahl sie bereits anbietet.

### Technische Umsetzung – später

Die vorhandene Starter-Auswahl in `src/starter_choose.c` ist auf drei Einträge ausgelegt. Im aktuellen Stand nutzt sie für Emerald Treecko, Torchic und Mudkip und für FRLG Bulbasaur, Charmander und Squirtle.

Für Paldea ist eine eigene Auswahl-Konfiguration nötig:
- die drei Starter-Spezies auf Sprigatito, Fuecoco und Quaxly umstellen;
- die Auswahl nur für den privaten Paldea-Spielmodus aktivieren, damit andere Spielmodi nicht unbeabsichtigt verändert werden;
- Starter-Level, Attacken, Fähigkeit und Spitznamen-Abfrage festlegen;
- prüfen, ob Frontsprites und passende Icons im Build vorhanden sind;
- sicherstellen, dass nach der Auswahl genau ein Starter im Team liegt und die Wahl gespeichert bleibt.

**Wichtig:** Nicht einfach die globalen Emerald-Starter ersetzen. Das könnte andere Spieleinstellungen des Expansion-Projekts beschädigen. Die Paldea-Auswahl sollte über eine eigene Modus- oder Projektkonfiguration laufen.

## Dialog- und Szenenregie (eigene Texte)

1. **Zu Hause:** „Guten Morgen! Heute wartet ein besonderer Tag auf dich. Nemila wollte dich am Dorfplatz treffen.“
2. **Am Dorfplatz:** „Da bist du ja! Ich habe drei Pokémon mitgebracht. Such dir in Ruhe deinen Partner aus.“
3. **Nach der Wahl:** „Eine tolle Wahl! Ich bin gespannt, wie ihr als Team zusammenarbeitet.“
4. **Vor dem Testkampf:** „Wie wäre es mit einem kleinen Übungskampf? Keine Sorge – wir machen es ganz entspannt.“
5. **Nach dem Kampf:** „Das war ein guter Anfang. Auf dem Cucharico-Pfad kannst du noch mehr Pokémon entdecken.“

Die Texte sind neu formulierte Fanprojekt-Dialoge und keine übernommenen Spielskripte.

## Story-Variablen (Vorschlag)

| Variable / Flag (Platzhalter) | Bedeutung |
|---|---|
| `VAR_PALDEA_INTRO_STATE` | Fortschritt des Haus- und Dorf-Intros |
| `VAR_PALDEA_STARTER` | gewählte Starter-Spezies oder Auswahlindex |
| `FLAG_PALDEA_STARTER_CHOSEN` | Starter wurde gewählt |
| `FLAG_NEMILA_TUTORIAL_BATTLE_DONE` | erster Testkampf abgeschlossen |

Die Namen sind Vorschläge. Vor der Umsetzung müssen freie Variablen und Flags im Projekt geprüft werden, damit keine bestehenden IDs doppelt verwendet werden.

## Abnahmekriterien für die spätere Umsetzung

- Neues Spiel startet im Schlafzimmer des Spielerhauses.
- Das Intro kann nicht versehentlich übersprungen oder mehrfach ausgelöst werden.
- Starterwahl zeigt genau Sprigatito, Krokel und Kwaks.
- Nach Bestätigung erhält der Spieler genau das ausgewählte Pokémon.
- Speichern und Laden erhält Starter und Story-Fortschritt.
- Der Testkampf startet nur nach der Starterwahl und kann nicht wiederholt werden, wenn er abgeschlossen ist.
- Der Ausgang zum Cucharico-Pfad ist nach dem Intro offen.

## Noch nicht umgesetzt

Dieses Dokument ist eine konkrete Spielablauf-Spezifikation. Es wurden noch keine Engine-Dateien, Karten, Events oder Starter-Konfigurationen verändert. Es wurde kein ROM-Build gestartet oder getestet.
