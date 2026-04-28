
# Modulinhalte Zusammenfassung

- Auffgaben u Architektur v BS
- Schnittstellen v BS
- Aufbau BS
- Grundlagen Software Verwaltung
- IO v Daten
- Speicherverwaltung
- Resourcenverwaltung
- IT-Sec

# Agenda

Definition
Aufgaben
Entwicklung
Klassifizierung

# Definition 

Zusammenfassende Bezeichnung für alle Programme, die die Ausführung aller Benutzerprograme, die Verteilung der Betriebsmittel auf die einzelnen Benutzerprogramme und die Aufrechterhaltung der Betriebsart steuern und Überwachen.

# Aufgaben

- Systemabstraktion (Werkzuge und IO reicht)
- Dienste für Anwender und Programme
- Verwaltung der Systemresourcen (Koordination, Schutz der Informationen)

## Abstraktion

- Nutzbarmachen des Systems
- Verstecken technischer Details
- Automatisierung von Vorgängen
- Ermöglichen einer einfachen und benutzerfreundlichen Bedienung

Ziel: 
Vereinfachung, Nutzbarmachung

Mittel und Wege

- Bereitstellung von standartisierten, aufgabenorientierten Ein- und Ausgabeschnittstellen
- Definitionen von Nutzkonzepten (Prozess- Datei- und Speicherkonzept)
	- Prozess-Konzept "Es gibt Prozesse, die können gestartet werden"
	- Datei-Konzept "Daten sind in Dateien sortiert. Es gibt Dateitymen"
- Dienste (vodefiniert, unveränderlich, vom physikalischen Gerät abhängig)

## Dienste

- Laden von Programmen
- Erzeugen von Programmen
- Operationen für E/A-Geräte
- Interprozesskontrolle

Ziel
Privilegiensystem zum Schutz der Anwendungen untereinander

## Realisierung der Anwenderdienste

- Systemaufrufe (Lesen / Schreiben)
- Application Programming Interface
	- von Software zur Verfügung gestellter Programmteil
	- Programmierschnittstelle, meist auf Quelltextebene
	- Wiederkehrende Nutzung von Schnittstellen zur Verwendung in unterschiedlichen Programmen

## Verwaltung der Systemresourcen

- Koordination von Prozessen
- Steuern von Abläufen
- Strategien zur Resourcenverwaltung

Ziel:
Effiziente, zuverlässige und sichere Resourcennutzung

# Methoden zur Resourcenverwaltung

Semaphore: ein Weg, um parallele Zugriffe zu vermeiden 

- Priorisierung von Prozessen
...

Distribution = Betriebssysem + Anwendungen

# Klassifizierung nach Betriebsart

### Stapelverarbeitung (Batch-Processing)

- frühere Beriebssystee ausschließlich über den Sachbetrieb
- Programmabfolgen erfolgen nacheinander

### Dialogbetrieb (Interactive-Procressing)

- Steuerung über einen Dialog
- Verwendung von E/A-Geräten

### Netzwerksbetriebssystem (Network-Processing)

- Dass der Rechner mit anderen im Netzwerk arbeitet und kommuniziert
- Zugriff auf fremde Resourcen und Daten
- Unterscheidung Peer2Peer <-> Cloud-Server


# Architektur von Betriebssystemen

- Veredelung von Hardware mit jeder Schicht
- Kommunikation mit benachbarten schichten
- Aufruf und Verwendung 

- Komunikation über festgelegte Schnittstellen
- Dienste: Funktionen einer Schicht
- Protokolle: Nutzvorschrift der Dienste

## Kernelschicht

- setzt direkt an der HW der physischen Systems an

Wesentliche Bestandteile des Kernels:
- Treiber
- Speicherverwaltung
- Prozessverwaltung
## Anwendungschicht

- Schnittstelle zum Anwender
- nutz Schnittstellen von BS

Wesentliche Bestandteile der Anwendungschicht:
- Anwendungsprogramme
- Grafische Oberfläche 
- API


## Monolithische Systeme 
- klassischer Aufbau
- Sammlung von Programmen und Funktionen
- wird vollständig im Hauptspeicher geladen und ausgeführt

Bestandteile
- Programme und Funktionen
- Datenstrukturen zur Verwaltung von Geräten, Prozessen und Benutzern

Vorteile:
- Systemverhalten nicht von Userprogrammen abhängig
- Kommunikation zwischen BS-Modulen

Nachteile: 
- Änderungen an Bestandteilen aufwendig
- Isolation der SW-Komponenten schwierig.

## Mikrokern-Systeme
- modularer Aufbau
- Aufteilung der Systemdienste in separate Programme
- Kommunikation über IPC-Mechanismen
	- Hardware-Traps

Bestandteile
- Mikrokern
- Programme
- Serverprozesse

Vorteile:
- Einfacher Tausch von Softwarekomponenten
- Hohe Absturzsicherheit

Nachteile: 
- Geschwindigkeitseinbußen durch Wechsel der Prozesse
- Schwierige Synchronisation der einzelnen Prozesse

## Hybridkernsysteme

- vereint Mikrokern- und Monolith-Vorteile

- Systemfunktionn im Kernel
- Programme und Funktionen als Serverprozesse
- Reduzierung der Konzextwechsel
