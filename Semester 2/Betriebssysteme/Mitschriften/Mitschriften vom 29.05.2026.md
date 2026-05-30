# Backup-Strategien

## Differentielles Backup

- Vorteile:
	- geringer Speicherplatz notwendig
	- schnelle Wiederherstellung der Daten möglich
	- redundant Sicherung der Dateien
- Nachteile:
	- ineffiziente Sicherungsmethode, da Dateien immer wieder mehrfach abgelegt werden
	- -- Info aus Präsentation--

# Inkrementelles Backup

- Kopie von neu hinzugefügten oder geänderten Dateien seit dem letzten (inkrementellen) Backup
- Vollsicherung als erster Schritt, darauf aufbauend regelmäßig Kopie von ausschließlich neuen oder geänderten Dateien
- tägliche Ausführung möglich und sinnvoll
- -- Info aus Präsentation--
- Vorteile:
	- schneller als differentielle Sicherung
	- wenig Speicherbedarf notwendig
- Nachteile:
	- Wiederherstellung  der Dateien ist vergleichsweise aufwendiger, weil mehrere Backups verwendet werden müssen 
	- Keine Redundanz der gesicherten Daten

