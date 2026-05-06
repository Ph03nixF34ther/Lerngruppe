# Einführung

Es gib unterschiedliche Betriebssysteme für unterschiedliche Anwendungen. Ein Betriebssystem wird immer auf die Anwendung und den Nutzer angepasst. Die Grundlage eines jeden Betriebssystem ist der [[Von-Neuman-Architektur|von-Neuman-Rechner]].

$$
Unterschiedliche Systeme für verschiedene Anwendungszwecke
Grundlagen aller Systeme ist der von-Neumann-Rechner
$$


## Definition: 
"Zusammenfassende Bezeichnung für alle Programme, die die Ausführung der Benutzerprogramme, die Verteilung der Betriebsmittel auf die einzelnen Benutzerprogramme und die Aufrechterhaltung der Betriebsart steuern und überwachen"

## Aufgaben eines Betriebssystems:
### Abstraktion des Systems: 
- Bereitstellung von Werkzeugen zur Benutzung des Systems
- Bereitstellung von A/E-Schnittstellen
- Nutzbar machen des Systems
- Verstecken technischer Details
- Automatisierung von Vorgängen
- Ermöglichen einer einfachen u. Benutzerfreundlichen Bedienung
- Ziel: Vereinfachung der Nutzung, Vermeidung von Fehler
#### Mittel und Wege zur Abstraktion:
- Bereitstellen von Ein- und Ausgabeschnittstellen
	- standardisierte, aufgabenorientierte Schnittstellen
- Definition von Nutzungskonzepten
	- Prozess-Konzept
	- Datei-Konzept
	- Speicher-Konzept
- Dienste zur einfachen Nutzung von Systemressourcen
	- Vordefinierte und unveränderlich
	- Unabhängig von physischen Gerät
	
### Dienste für Anwender und Anwendungsprogramme:
- Bereitstellung von Programmierschnittstellen
- Laden von Programmen
- Erzeugen von Prozessen
- Operationen für A/E-Geräte
	- In der Regel keine Nutzerkontrolle über diese Geräte
- Interprozesskontrolle
- Ziel: Privilegien System zum Schutz der Anwendung untereinander
#### Realisierung der Anwenderdienste:
- Systemaufruf
	- Zugriff auf vom BS bereitgestellte Funktionalitäten (Bsp.: Lesen/Schreiben) 
- Application Programming Interface
	- Von Software zur Verfügung gestellter Programmteil
	- Programmierschnittstelle, meist auf Quelltextebene
	- Wiederkehrende Nutzung von Schnittstellen zur Verwendung in unterschiedlichen Programmen
	
### Verwaltung der Systemressourcen:
- Koordination von Prozesse
- Schutz der systeminternen und verarbeiteten Informationen
- Steuern von Abläufen
- Strategien zur Ressourcenverwaltung (Scheduling)
- Ziel: Effizient, zuverlässige und sichere Ressourcennutzung
#### Methoden zur Ressourcenverwaltung:
- Priorisierung von Prozessen
	- Systemprozesse vor Anwendungsprozessen bspw.
- Steuern von Abläufen
	- Regelungen von Zugriffszeiten
	- Vermeidung von Deadlocks (Semaphore) oder Speicherverletzungen
- Strategien zur Ressourcenverwaltung (Scheduling)
	- Auch hier Verwendung von Priorisierung und Aufteilung der CPU-Zeiten bspw.

## Klassifizierung nach Betriebsart
### Stapelverarbeitung (Batch-Processing)
- Frühere Betriebssysteme verfügten ausschließlich über Stack-Betrieb
	- Programmierung mittels Lochkarten oder Magnetstreifen
- Programmabfolge erfolge nacheinander
	- kein Multitasking und keine parallelen Aufgaben
### Dialogbetrieb (Interactive-Processing)
- Steuerung des Systems über ein Dialog
	 - Eingabe werden mit Ausgaben beantwortet
- Verwendung von E/A-Geräten
	 - Maus/ Tastatur/Gamepads und Bildschirme
- Dargestellte Oberfläche können textbasiert oder grafisch sein
### Netzwerkbetriebssystem (Network-Processing)
- Sind darauf ausgelegt, dass Rechner mit anderen Rechnern in einem Netzwerk arbeiten und kommunizieren
- zugriff und Verwendung von fremden Ressourcen und Daten von Rechnern innerhalb des Netzwerks
- Unterschiede in Peer-To-Peer-Systeme und Client-Server-Systeme 
### Realzeit-Betriebssysteme (Realtime-Processing)
- Reagiert in Echtzeit mit Eingabegeräte (Sensoren)
- werden hauptsächlich für Steuerungs- oder Regelungsaufgaben genutzt 
	 - meist in Embedded-Bereich zu finden
- Fokus liegt auf kurzen Verarbeitungs- und Antwortzeit der einzelnen Prozessen und Aufgaben
- Ermittlung von Informationen über Sensoren
- Reaktion auf Einflüsse nahezu in Echtzeit (10 - 100ms)
- Benötigen spezielle Hard- und Software
- Universelle Betriebssysteme 
	- Erfüllen mehrerer der vorweg genannten Kriterien
	- Können für mehr als einen bestimmten Anwendungszwecken genutzt werden

## Klassifizierung nach Prozessanzahl
### Singeltasking 
- Ein Programm zu einem bestimmten Zeitraum
- mehrere Programme nur nacheinander möglich 
- Bspw. bei Echtzeitsystemen zu finden
### Multitasking
- Mehre Programme zu einem bestimmten Zeitpunkt
	- Gleichzeitig
	- Zeitlich verschachtelte (Parallel)
- Abgrenzung zwischen "echter" und "pseudo" Parallelität
### Ein-Prozessor-Betriebssysteme
- Konfiguration gemäß Von-Neumann-Architektur
- Ein physischer Prozessor
- Gängigste Konfiguration von Rechnern
- Meisten BS sind auf einen Prozessor ausgelegt
### Mehr-Prozessor-Betriebssysteme
- Aufteilung der Prozessorlast auf zwei physische Prozessoren
	- Theoretische Verdopplung der Leistung
- Erfordert spezielle Treiber bzw. Steuerungssoftware
	- Probleme bei Ressourcenverwaltung oder Speicherzugriffen
	- Deadlocks oder Latenzen
- Anfang der 2000er-Jahre populär
	- Reduzier . . .

## Architektur von Betriebssystemen
### Darstellung in Schalenmodell
- Veredelung der Hardware mit jeder Schicht
- Kommunikation mit benachbarten Schichten/ über festgelegte Schnittstellen
- Aufruf und Verwendung von Funktionen von benachbarten schichten
- Dienste: Funktionen einer Schicht
- Protokolle: Nutzungsvorschrift der Dienste

### Kern des Systems
- setzt direkt an der Hardware des physischen Systems an
	- Verwaltung von Ressourcen
	- Stellt Funktionen zur Ressourcennutzung bereit 
- Wesentliche Bestandteile des Kernels
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

### Monolithische Systeme
- "klassischer Aufbau"
- Sammlung von Programmen und Funktionen
	- werden bei Bedarf aufgerufen
- wird vollständig in Hautspeicher geladen und ausgeführt
#### Bestandteile:
- Programme und Funktionen
- Datenstrukturen zur Verwaltung von Geräten, Prozessen und Benutzern
#### Vorteile:
- Systemverhalten nicht von User-Programmen abhängig
- Kommunikation zwischen BS-Modulen
#### Nachteile:
- Änderungen an Bestandteilen aufwendig
- Isolation des SW-Komponenten schwierig

### Mikrokern-Systeme
- modularer Aufbau
- Aufteilung der Systemdienste in separaten Programmen
- Kommunikation über IPC(Intern Prozess Kommunikation)-Mechanismen
	- Hardware-Traps -> Abgerungen zu Interrupts
#### Bestandteile:
- Mikrokern
- Programme
	- "Server"-Prozesse
#### Vorteile:
- Einfacher Tausch von Softwarekomponenten
- Hohe Absturzsicherheit
#### Nachteile:
- Geschwindigkeitseinbußen durch Wechsel der Prozesse
- Schwierige Synchronisation der einzelnen Prozesse

### Hybridkernel-Systeme
- vereint Mikrokern- und Monolith-Vorteile
- Systemfunktionen im Kernel
- Programme und Funktionen als Server-Prozesse
- Reduzierung der Kontextwechsel
- Beispiel: Treiber im System-Kernel



