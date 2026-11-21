# Nemila – Sprite-Konzept für Cucharico

## Ziel
Eine eigene, gut erkennbare GBA-Overworld-Figur für Nemila (Nemona), passend zur Pokémon-Karmesin-Figur und zur begrenzten Auflösung der Emerald-Engine.

## Entwurfsmerkmale
- Kleine GBA-Overworld-Proportionen mit klarer Silhouette.
- Dunkles, langes Haar mit deutlich erkennbarem Seitenscheitel.
- Helle Schuluniform mit orangefarbenen Akzenten.
- Dunkle Shorts und sportliche Schuhe.
- Freundlicher, energiegeladener Gesichtsausdruck.
- Vier Blickrichtungen und Geh-Animationen im vorhandenen Object-Event-Format.

## Technische Umsetzung
- Eigenes Sprite-Sheet und passende Palette im Stil der vorhandenen Overworld-Grafiken erstellen.
- Grafik und Palette in die Object-Event-Grafikregistrierung eintragen.
- Neue Grafik-ID für Nemila anlegen und in `data/maps/Cucharico/map.json` statt des vorläufigen `OBJ_EVENT_GFX_GIRL_3` verwenden.
- Danach mit mapjson/Build-Tools kompilieren und im Emulator prüfen.

## Status
Die NPC-Position und das erste Gespräch sind eingetragen. Die individuelle Grafik ist noch nicht integriert; Nemila verwendet bis dahin eine vorhandene Platzhalterfigur. Das Dokument ist die Spezifikation für den nächsten Grafikschritt.
