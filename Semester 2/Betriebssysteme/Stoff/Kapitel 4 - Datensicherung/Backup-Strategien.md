# Vollsicherung

- Sicherung des gesamten Systems
- Kopie des Gesamten Datensatzes
- unabhängig der Änderungen seit dem letzten Backup
- wird in der Regel nur selten durchgeführt

## Vorteile

- Schnelle Widerherstellung der Dateien möglich
- einfache Methode zur Sicherung der Daten

## Nachteile

- Viel Speicherbedarf
- Anlegen mehrerer Unnötiger Dateikopien
- verhältnismäßig zeitaufwendiges Verfahren

# Synthetische Vollsicherung

- Vergleich der Dateien im System mit Dateien im Backup
- Konsolidierung der letzten Änderungen seit dem letzten Vollbackup
- Übernehmen der Änderungen innerhalb der Dateien

## Vorteile

- weniger Bandbreite Notwendig
- für Anwender unsichtbares Verfahren 

## Nachteile

- ebenso viel Speicherbedarf wie bei vollständigen Sicherungen
- verhältnismäßig zeitaufwendiges Verfahren
- setzt voraus, dass Dateien auf dem Backup-Medium unversehrt sind

# Differentielles Backup

- Sicherung der Änderungen seit letztem vollständigen Backup
- Kopie von neu hinzugefügten oder geänderten Dateien seit dem letzten vollständigen Backup
- Vollsicherung als erster Schritt, darauf aufbauend regelmäßige Kopie von neuen oder geänderten Dateien
- setzt regelmäßige Vollsicherung voraus

## Vorteile

- geringer Speicherplatz notwendig 
- schnelle Wiederherstellung der Daten möglich 
- redundante Sicherung der Dateien

## Nachteile

- ineffiziente Sicherungsmethode, da Dateien immer wieder mehrfach abgelegt werden
- hoher Zeitaufwand

# Inkrementelles Backup

- Sicherung oder Änderungen seit dem letztem Backup
- Kopie von neu hinzugefügten oder geänderten Dateien seit dem letzten (inkrementellen) Backup
- Vollsicherung als erster Schritt, darauf aufbauend regelmäßige Kopie von ausschließlich neuen oder geänderten Dateien
- tägliche Ausführung möglich und sinnvoll 
- setzt regelmäßige Vollsicherung voraus

## Vorteile

- schneller als differentielle Sicherung 
- wenig Speicherbedarf notwendig

## Nachteile

- Wiederherstellung der Dateien ist vergleichsweise aufwendiger, weil mehrere Backups verwendet werden müssen 
- Keine Redundanz der gesicherten Daten