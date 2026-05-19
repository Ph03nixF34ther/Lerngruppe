# Interprozesskommunikation

## Unterscheidung in: 

Synchronisation:
- Signale
- Semaphoren

Kommunikation:
- nachrichtenbasiert
	- Nachrichten
- Strombasiert
	- Pipes
	- Socket
- speicherbasiert
	- Shared Memory
	- Dateien

## Kommunikationsbeziehungen werden bestimmt durch

Anzahl Teilnehmer:
- 1:1
- 1:n
- m:1
- m:n

Lokalität:
- lokale Kommunikation
- entfernte Kommunikation

Synchronität:
- synchron
	- Senden: Sender warten (blockiert), bis Empfänger Information quittiert hat
	- Empfangen: Die Empfangsoperation blockiert den Empfänger bis Information eintrifft
	- Direkte Zustellung der Information (ohne Puffer)
	- Implizite Empfangsbestätigung
	- Blockade bei Abbruch der Übertragung
	- einfacher zu programmieren
	- Standard bei Unix- Systemen
- asynchron
	- Senden: Sender setzt nach Senden seine Arbeit fort ("Fire and Forget")
	- . --Infos aus Präsentation--
	- Nachricht muss zwischengespeichert werden
	- Keine sichere Art der Kommunikation
	- Bei Kommunikationsabbruch entsteht keine Blockade beim Empfänger
Gleichzeitigkeit von 
--Infos aus Präsentation--

Verbindungsarten
- Verbindungsorientiert
	- Aufbau der Verbindung Abbau der Verbindung
	- Beispiele: analoge Telefone, TCP-Protokoll, Pipes
- verbindungslos
	- Übertragung
	- Beispiele: IP-Protokoll, Signale
Unicast
- Informationen werden nur zwischen zwei Teilnehmern gesendet

Multicast
- Informationen werden nur eine ausgewählte gruppe gesendet 

Broadcast
- Informationen werden an alle gesendet

## Kommunikation über Dateien

- ältester IPC-Mechanismus
- zweimaliger Zugriff auf Massenspeicher notwendig
- überlappender Zugriff durch Sender und Empfänger
- Realisierung durch Sperren der Datei

### Ablauf

1. Sender sperrt und schreibt die Datei
2. Der Empfänger prüft den Zugang und wertet
3. Sender entsperrt die Datei --Infos aus Präsentation--

## Kommunikation über Pipes

- erste richtige Form der IPC
- Spezielle gepufferter Informationskanal
- Ablauf über FIVO
- unidirektionaler Zugriff im Halb-Duplex-Verfahren
	- Streampipes erlauben Duplex-Betrieb
- Prozess bekommt die Umleitung nicht mit
	- Synchronisation im Kernel
- nur möglich zwischen Prozessen mit gemeinsamen Vorfahren

### Ablauf

1. Initialisierung der Pipe
2. Senden der Daten
3. Empfangen der Daten
4. Schließen der Verbindung
5. Löschen der Pipe

# Prozesssynchronisation 

## Erzeuger-Verbraucher-Problem

### Probleme: 

- Zugriff auf Daten, die noch gar nicht produziert sind
- Ablage in einem schon vollen Speicher
- Gleichzeitige Speicherzugriffe

### Hintergrund:

- Zugriff auf gemeinsam genutzten Ressourcen muss synchronisiert sein
- Vermeidung von Race-Conditions
	- entsteht wenn die Ausführung von zwei oder mehreren Prozessen gleichzeitig beginnt das Ergebnis allerdings vom zeitlichen Verhalten der Fertigstellung abhängig ist.
	- --Infos aus Präsentation-- (Race-Conditions und Kritischer Bereich)
- Lösung:
	- Verwendung eines Ring-Buffers zwischen zwei Prozessen

## Mutex

- Blockade des kritischen Bereich eines Prozesse
- Synchronisationsobjekt mit den Zuständen "frei" und "belegt"
- exklusive Besitzerbindung (vgl. Semaphore)
- Gefahr eines Deadlocks bei mehreren Mutex ohne Reihenfolge

## Spinlocks 

- kleine Sperrvariable schützt kritischen Abschnitt eines Prozesses
- wiederholte Prüfung auf Zugriff (busy-waiting)
- Warten in einer aktiven Schleife
- Sinnvoll für kurze, frequente oder Kritische Abschnitte eines Prozesses

## Monitore

- Kontrollkonzept zur Synchronisation von Zugriffen
- Kontrolliert Zugang zu kritischem Bereich in einem Programm
- Prozesse/Threads in Monitor- Warteschlange sind blocked
- Als Monitor definierter Bereich im Quellcode
- Zugriff auf Kritischen Bereich im Monitor-Operationen
- Ausführung unter wechselseitigem Ausschluss der Akteure 
- Erkennung eines Monitors beim Kompilieren des Programms
- Verwaltung auf Betriebssystem-Ebene

## Zusammenfassung

$$
	\begin{array}{c|c|c|c}
	 & \text{Mutex} & \text{Semaphore} & \text{Monitor} \\
	\hline \\
	\text{Hauptzweck} & \text{Exlusiver Zugriff} & \text{Zugriff mit Zählerbegrenzung} & \text{Strukturierte Synchronisation eines Objekts} \\
	\hline \\
	\text{Gleichzeitige Zugriffe} & \text{Genau einer} & \text{Beliebig viele} & \text{Genau 1 im kritischen Bereiech} \\
	\hline \\
	\text{Besitzerprinzip} & \text{Ja, meist ein Besitzer} & \text{Kein strenger Besitzer} & \text{Implezit über das Objekt/Laufzeitkonzept} \\
	\hline \\
	\text{Typische Ebene} & \text{BS/Laufzeit} & \text{BS/Laufzeit} & \text{Sprache/Laufzeit} \\
	\hline \\
	\text{Beispiel} & \text{Eine Datei Sperren} & \text{3Schnittstellen verwalten} & \text{Gemeinsame Warteschlange mit wait/signal} 
	\end{array}
$$
--Infos aus Präsentation--

## Verklemmung

Verklemmung treten auf, wenn folgende Bedingungen erfüllt sind:
- Exklusivnutzung
	- Ressourcen werden exklusiv von einem Prozess genutzt
- Reservieren und Warten
	- Reservierte Ressourcen werden erst nach der Nutzung freigegeben
- Keine Wegnahme
	- Ressourcen, die ein Prozess reserviert hat, werden ihm nicht weggenommen
- Gegenseitiges Warten
	- Es gibt mehrere Prozesse p, die auf Ressourcen warten, die --Infos aus Präsentation--

## Vogel-Strauß-Algoritus

- Problem ignorieren -> Kopf in den Sand stecken
Entdeckung, Behebung / Verhindern von Verklemmungen ist mit Aufwand verbunden.
Was passiert bei Verklemmung? Wie groß ist das Risiko?
-> Bei geringem Risiko keine Behandlung von Verklemmungen

## Verklemmungen

Vermeidung der Verklemungsvoraussetzungen
- Vermeidung von unnötigen Exklusivsperren
	- Keine Sperren von nicht exklusiv benötigten Ressourcen
	- Beispiel: Exklusive Schreib und Leserechte
- Atomare Ressourcenreservierung
	- Einmalige Ressourcenanforderung bei Prozessstart
	- Anforderung aller benötigten Ressourcen auf einmal
	- Risiko des Verhungerns 
- Wegnahme von Ressourcen
	- Prozesse nehmen sich gegenseitig die Ressourcen weg
	- Blockieren der Prozesse notwendig
	- Wegnahme nur möglich, wenn Prozess unterbrochen und wiederaufgenommen werden kann
	- Erfordert technischen Aufwand --Infos aus Präsentation--
- Gegenseitiges Warten vermeiden
	- Softwarelösung
	- Verwaltung der Ressourcen durch Indizierung / Nummerierung
	- Festlegen einer Strategie zur geordneten Reservierung von Ressourcen

### Entdeckung und Behebung

- Kontrolle über Ressourcennutzung der Prozesse erforderlich
- System führt regelmäßig "Zyklustests" durch, um auf Verklemmungen zu prüfen 
- Terminierung oder Ressourcenwegnahme als Lösung

# Parallele Rechnerarchitekturen

- Bisher behandelte [[Von-Neuman-Architektur]] 

## Ausprägung der parallelen Befehlsverarbeitung 

Parallele Befehlsverarbeitung 
- zeitlich
	- Eine Einheit eines Typs verarbeiten gleichzeitig --Infos aus Präsentation--
- räumlich
--Infos aus Präsentation--

## Amdahlsches Gesetzt

- Gene Amdahl
	- In den 60er Jahren Entwickler bei IBM
	- Entwickelte parallelel verarbeitende Vektorrechner
- --Infos aus Präsentation--
- max. Speedup: Beschleunigung des Algorithmus
	- Kann nie kürzer als Zeit für sequentiellen Teil des Algorithmus sein

## Shared Memory-Architektur

Uniform Memory Access (UMA)-Architektur
- Verwendung eines globalen Adressraums 
- Zugriffsweise der Prozessoren auf Speichermodulen ist identisch (gleichförmig )
- Vorteile: 
	- Einfaches Programmiermodell mit Zugriff
--Infos aus Präsentation--

## Begriffsklärung

### Parallelität

Zwei Aktivitäten sind Parallel, wenn sie echt gleichzeitig ausgeführt werden können und kausal voneinander unabhängig sind.
Dies ist nur auf Multiprozessorsystemen möglich.

### Nebenläufigkeit

Zwei Aktivitäten sind nebenläufig, wenn sie parallel ausgeführt werden können und es keinen --Infos aus Präsentation--

betrifft:
- Kommunikation zwischen Prozessen 
- Gemeinsame Nutzung von und Wettbewerb --Infos aus Präsentation--

# Definition eines Threads

- Threads als sequenzielle Bestandteile eines Prozesses
--Infos aus Präsentation--

"Ein Thread (thread of controll, Kontrollfaden) ist eine sequentiell abzuarbeitende Befehlsfolge innerhalb eines Programms"

"Man spricht von Multithreadding, wenn innerhalb eines --Infos aus Präsentation--"

## Vorteile von Multithreading 

- Mehrere Kontrollflüsse innerhalb eines Programms möglich
- Echte Parallelität möglich (Hyper Threading oder Multiprozessor)
- Schnellere Umschaltung zwischen Threads als zw. Prozessen
- Nutzung von Prozessressourcen innerhalb mehrerer Threads 
- Bessere Nutzung der verfügbaren Rechenzeit
	- Kürzere Reaktionszeiten auf Benutzereingaben
	- Wartezeiten können auf einzelne Threads ausgelagert werden

## Bestandteile eines Threadkontrollblock

- Thread-ID: Kennung zu Thread und des dazugehörigen Prozessen
- Stack Pointer: Zeiger auf Speicherbereich
- Register: Speicherbereich für Steuersignale usw.
- Scheduling Eigenschaften: Zustand, Metadaten, Deadline, Prioritäten etc.
- Statusinformationen: Dateizustände, Prozesszustände etc.  

## Threadmodelle 

### Kernel-Level-Thread

- bekannt im gesamten Systemkontext
- Implementierung innerhalb des Systems
- Threadkontrollblock wird auf systemebene bzw. im Systemkern angelegt und verwaltet.
--Infos aus Präsentation--

Vorteile:
- KLTs des gleichen Prozesses können echt parallel auf unterschiedlichen Prozessoren eines SMP-Systems gleichzeitig rechnen
- Bei Blockade eines Systemaufrufs wird nur aufrufender KLT blockiert. Andere bereitere KLTs des --Infos aus Präsentation--

Nachteile:
- Weil jeder KLT ein Systemaufruf ist, sind u.U. aufwendige Kerneintritte und -austritte notwendig
- Erzeugen eines KLT erfordert zusätzliche --Infos aus Präsentation--

### User-Level-Thread

- Wird verwendet, um mehrere Steuerungsflüsse innerhalb eines Programms zu realisieren
- nur im Programmkontext / innerhalb des Prozesses bekannt
- Implementierung über API --Infos aus Präsentation--

Vorteile:
- Alle Operationen sind auf User-Ebene, was die Sequenz automatisch sehr schnell werden lässt
- User-Threads können auch auf System ohne Multithreading-Funktion ausgeführt werden 
- User-Level-Scheduling kann an Rahmenbedingungen des Programms angepasst werden

Nachteile:
- Pro Prozess kann nur ein ULT zu einem Zeitpunkt aktiv sein (Scheduler kennt nur den Prozess)
- Systemaufruf blockieren den gesamten Prozess
- Bei Veränderung eines Ressourcen blockierendes ULT kann es zu latenzen im System --Infos aus Präsentation--

### Threadmodell

- Hybride-Threads
- Vereinigung der Vorteile beider Thread-Modelle
	- Unmittelbare Kontrolle und Werkzeuge der Threadbibliotheken der User Level-Threads
	und
	- --Infos aus Präsentation--
Vorteile: 
- Alle Operationen sind auf User-Ebene, was die Sequenz automatisch sehr schnell werden lässt. 
- User-Threads können auch auf System --Infos aus Präsentation--

# Datensicherung

## Welchen Wert haben meine Daten?

Wertvolle Daten:
- Belege / Zeugnisse /Zertifikate
- --Infos aus Präsentation--