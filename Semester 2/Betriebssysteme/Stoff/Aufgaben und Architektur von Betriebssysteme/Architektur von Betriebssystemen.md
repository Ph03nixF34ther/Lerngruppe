# Inhalt:

## Darstellung in Schalenmodell

- Veredelung der Hardware mit jeder Schicht
- Kommunikation mit benachbarten Schichten/ über festgelegte Schnittstellen
- Aufruf und Verwendung von Funktionen von benachbarten schichten
- Dienste: Funktionen einer Schicht
- Protokolle: Nutzungsvorschrift der Dienste

### Kern des Systems

- setzt direkt an der Hardware des physischen Systems an
	- Verwaltung von Ressourcen
	- Stellt Funktionen zur Ressourcennutzung bereit 
- Wesentliche Bestandteile des Kernels:
	- Treiber
	- Speicherverwaltung
	- Prozessverwaltung

### Anwendungsschicht

- Schnittstelle zum Anwender
- nutzt Schnittstellen von Betriebssystemen
- Wesentlicher Bestandteil der Anwendungsschicht:
	- Anwendungsprogramme
	- Grafische Oberfläche
	- Programmierschnittstellen (API)

## Monolithische Systeme

- "klassischer Aufbau"
- Sammlung von Programmen und Funktionen
	- werden bei Bedarf aufgerufen
- wird vollständig in Hautspeicher geladen und ausgeführt
### Bestandteile:

- Programme und Funktionen
- Datenstrukturen zur Verwaltung von Geräten, Prozessen und Benutzern
### Vorteile:

- Systemverhalten nicht von User-Programmen abhängig
- Kommunikation zwischen BS-Modulen
### Nachteile:

- Änderungen an Bestandteilen aufwendig
- Isolation des SW-Komponenten schwierig

## Mikrokern-Systeme

- modularer Aufbau
- Aufteilung der Systemdienste in separaten Programmen
- Kommunikation über IPC(Intern Prozess Kommunikation)-Mechanismen
	- Hardware-Traps -> Abgerungen zu Interrupts
### Bestandteile:

- Mikrokern
- Programme
	- "Server"-Prozesse
### Vorteile:

- Einfacher Tausch von Softwarekomponenten
- Hohe Absturzsicherheit
### Nachteile:

- Geschwindigkeitseinbußen durch Wechsel der Prozesse
- Schwierige Synchronisation der einzelnen Prozesse

## Hybridkernel-Systeme

- vereint Mikrokern- und Monolith-Vorteile
- Systemfunktionen im Kernel
- Programme und Funktionen als Server-Prozesse
- Reduzierung der Kontextwechsel
- Beispiel: Treiber im System-Kernel