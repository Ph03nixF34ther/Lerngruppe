# Inhalt:

## Abstraktion des Systems: 

- Bereitstellung von Werkzeugen zur Benutzung des Systems
- Bereitstellung von A/E-Schnittstellen
- Nutzbar machen des Systems
- Verstecken technischer Details
- Automatisierung von Vorgängen
- Ermöglichen einer einfachen u. Benutzerfreundlichen Bedienung
- Ziel: Vereinfachung der Nutzung, Vermeidung von Fehler

### Mittel und Wege zur Abstraktion:

- Bereitstellen von Ein- und Ausgabeschnittstellen
	- standardisierte, aufgabenorientierte Schnittstellen
- Definition von Nutzungskonzepten
	- Prozess-Konzept
	- Datei-Konzept
	- Speicher-Konzept
- Dienste zur einfachen Nutzung von Systemressourcen
	- Vordefinierte und unveränderlich
	- Unabhängig von physischen Gerät

## Dienste für Anwender und Anwendungsprogramme:

- Bereitstellung von Programmierschnittstellen
- Laden von Programmen
- Erzeugen von Prozessen
- Operationen für A/E-Geräte
	- In der Regel keine Nutzerkontrolle über diese Geräte
- Interprozesskontrolle
- Ziel: Privilegien System zum Schutz der Anwendung untereinander

### Realisierung der Anwenderdienste:

- Systemaufruf
	- Zugriff auf vom BS bereitgestellte Funktionalitäten (Bsp.: Lesen/Schreiben) 
- Application Programming Interface
	- Von Software zur Verfügung gestellter Programmteil
	- Programmierschnittstelle, meist auf Quelltextebene
	- Wiederkehrende Nutzung von Schnittstellen zur Verwendung in unterschiedlichen Programmen
	
## Verwaltung der Systemressourcen:

- Koordination von Prozesse
- Schutz der systeminternen und verarbeiteten Informationen
- Steuern von Abläufen
- Strategien zur Ressourcenverwaltung (Scheduling)
- Ziel: Effizient, zuverlässige und sichere Ressourcennutzung

### Methoden zur Ressourcenverwaltung:

- Priorisierung von Prozessen
	- Systemprozesse vor Anwendungsprozessen bspw.
- Steuern von Abläufen
	- Regelungen von Zugriffszeiten
	- Vermeidung von Deadlocks (Semaphore) oder Speicherverletzungen
- Strategien zur Ressourcenverwaltung (Scheduling)
	- Auch hier Verwendung von Priorisierung und Aufteilung der CPU-Zeiten bspw.


