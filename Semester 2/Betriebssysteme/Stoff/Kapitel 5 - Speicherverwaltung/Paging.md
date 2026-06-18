# Paging

- Prinzip zur Speicherverwaltung
- Aufteilung des Hauptspeichers in definiert große Blöcke in Seitenrahmen
- Unterteilung des logischen Adressraums eines Prozesses in Seiten
- Seiten-bezogene Adressierung und Hauptspeicher-Zuteilung
	- Seitengröße = Seitenrahmen
- Problem:
	- wo befindet sich welche Seite eines Prozesses?
- Lösung:
	- Verwaltung der Seiten in einer prozesseigenen Seitentabelle
- Inhalt:
	- Adresse und Zustand jeder Seite Typ. Größe eines Eintrags 32 Bit

# Seitentabelleneinträge

20 Bit:
- Seitenrahmennummer
3 Bit:
- Zugriffsrechte
Je 1 Bit:
- Present/Absent-Bit
- Modified-Bit (Dirty Bit)
- Reference Bit
- Cachabel-Bit

## Seitenadressen

- Aufteilung in Seitenadresse und Byte-Distanz (Displacment)
- Seitenadresse / Seitennummer:   Nummer in Seitentabelle
- Displacement / Offset:                 Nummer der Speicherzelle
- Seiten der Prozesse werden beliebig auf Seitenrahmen verteilt
- Verwaltung dieser Zuordnung mit einer Seitentabelle 
- Displacement ist in logischer und physischer Adresse identisch 
- Verwaltung der Seitenrahmen mit einer Rahmentabelle 
	- Informationen: Frei/Belegt , Welchem Prozess zugeordnet, Zugriffshäufigkeit
- Resultat: Differenzierung der Sicht auf den Hauptspeicher
- Perspektive von Entwickler, Compiler und Prozessor
	- Der Programmspeicher ist linear und beginnt bei Adresse 0. Alle arbeiten mit logischen Adressen
- Realität "Sicht in den Speicher"
	- Prozessdaten liegen an unterschiedlichen Stellen im Speicher ab.


## Seitenfehler

- treten auf, wenn auf eine Seite zugegriffen wird, die sich nicht im Hauptspeicher befindet
- Prozess wird blockiert
- Seite wird geladen
- Instruktion wird wiederholt
- Verwendung des Present-Bit für diesen Zweck
- sollen durch bestimmte Auslagerungsstrategien vermieden werden
- Auslagerung von einzelnen Seiten nach bestimmten regeln
	- Abhängig vom im System verwendeten Verfahren:
	- First In First Out
	- Least Recently Used
	- Least Frequently Used
