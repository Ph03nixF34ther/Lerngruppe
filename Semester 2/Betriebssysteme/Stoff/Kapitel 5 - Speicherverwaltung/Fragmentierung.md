# Externe Fragmentierung 

Dynamische Partitionierung 
- Einteilung des Speichers in Partitionen
	- variabler Länge und variable Anzahl
- exakte passende Speicherbereiche für jeden Prozess
- Ein- und Auslagerung führt zu externer Fragmentierung
- Problem:
	- Stetiges Ein- und Auslagerung von Prozessen
- Folge:
	- Speicherlücken zw. Prozessen sind zu klein für neue Prozesse
- Ergebnis:
	- Ungenutzter Speicher 

# Interne Fragmentierung

- Haltung mehrerer vollständiger Prozesse im Hauptspeicher
- Aufteilung des Hauptspeichers in feste Partitionen
	- gleicher Größe
	- unterschiedlicher Größe
- ungenutzter Speicherplatz ist verloren, bis Speicher neu verteilt wird
- Problem:
	- Verwendung von einheitlichen Blockgrößen
- Folge:
	- Keine exakte Zuteilung von Prozessen auf Speicherblöcke
- Ergebnis:
	- Ungenutzter Speicherplatz innerhalb der Speicherblöcke
