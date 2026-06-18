# File Level Backup

- Sicherung von Vollständigen Dateien auf einem Datenträger
- langsames Verfahren, da große Datenmengen bewegt werden
	- Handling von einzelnen großen Dateien ist zeitaufwendig
- Wiederherstellung der Dateien einfacher als bei Block Level Backups 
	- Dateien können direkt aufgerufen und darauf zugegriffen werden
- Wiederherstellen einzelner Dateien möglich

# Block Level Backup

- Sicherung von geänderten Datenblöcken einer Datei 
- weniger Speicherplatz notwendig
- schnelles Verfahren, da nur bestimmte Datenblöcke bewegt werden 
	- Abstrakte Datenebene erlaubt schnellere Bearbeitung
- Wiederherstellung der Dateien komplexer als bei File Level Backups
	- Dateien müssen erst einzeln bereitgestellt werden
- Wiederherstellung einzelner Dateien nur mit Aufwand möglich

# Duplizierung 

- Verfahren zum Erhöhen der Speichereffizienz einer Sicherung
- Entfernen von Redundanz innerhalb eines Backups
- Identifikation von redundanten Daten auf Blockebene 
- Einsetzen eines Pointers auf erste Instanz der Daten
- Findet Anwendung bei Datensicherungen und Datentransfer
	- Deduplikation von E-Mail-Anhängen bspw.



