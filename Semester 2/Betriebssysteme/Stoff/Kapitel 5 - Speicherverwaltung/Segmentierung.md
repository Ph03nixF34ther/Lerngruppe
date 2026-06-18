# Segmentierung

- Unterteilung des logischen Adressraums eines Prozesses in Segmente unterschiedlicher Größe
- Zweckbestimmte Zugriffsrechte der jeweiligen Segmente
- Unterschiedliche Verwendungszwecke der einzelnen Segmente
- Größe der Segmente wird von Anwendung bzw. dem Compiler festgelegt und hängt von Programmiersprache ab
- Segmente werden genutzt für:
	- Speicherbereiche für geladene Dateien
	- Laufzeitstack
	- Speicherbereich für statische Variablen
	- Code aus dynamisch geladenen Bibliotheken
	- Speicherbereiche für Interprozesskommunikation
	- Programmcode

# Richtlinien

- Wenige große Segmente: Programmcode / Daten / Stack
- Mehrere/Viele mittlere Segmente: Prozeduren / Module / Programmbibliotheken
- Extrem viele kleine Segmente: Objekte / Verbunde (Records)

# Unterschiedliche Zugriffsrechte für einzelne Segmente

- Lese-Berechtigung für Dateiinhalte-Segment
- Ausführ-Berechtigung für Code-Segment
- Schreib- und Leseberechtigung für Speicher-Segment

# Funktionsweise

- Unterteilung der Speicheradresse in 
	- Segment
	- Distanz
- Verwaltung mittels Segmenttabelle innerhalb des Prozesses
- Praxis: Kombination mit Paging

# Verknüpfung mit Paging

- Segmentnummer dient als Index für Segmenttabelle
- Aufteilung der Segmentdistanz in segmentbezogene Seitennummer und Seitendistanz 
- Berechnung der Rahmennummer aus Seitennummer mittels der Seitentabelle 
- Prüfung ob Offset kleiner als Segmentlänge 
- Physische Adresse ergibt sich aus Anfangsadresse + Offset
