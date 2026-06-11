# Interprozesskommunikation

- Das wichtigste Mittel zur Koordination mehrerer Prozesse ist Informationsaustausch
- Wozu sollen Informationen ausgetauscht werden?
	- Geordnete Zugriffe auf Ressourcen
	- Auflösung von Prozessabhängigkeit
	- Informationsaustausch zwischen Prozessen

Unter Interprozesskommunikation versteht man…

- Die Kommunikation zwischen Prozessen auf demselben Computer deren Speicherbereich aber strikt voneinander getrennt sind.

aber auch

- Den Datenaustausch in verteilten Systemen, bspw. mittels Threads in einem Laufzeitsystem oder über Programme auf unterschiedlichen aber miteinander verbundenen Rechnern.
- Beispiele:
	- Dateien
	- Nachrichten
	- Pipes
	- Signale
	- Semaphore
	- Socket
	- Shared Memory

# Unterscheidung in: 

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

## Kommunikationsbeziehungen 

Werden bestimmt durch:

- Anzahl Teilnehmer:
	- 1:1
	- 1:n
	- m:1
	- m:n

- Lokalität:
	- lokale Kommunikation
	- entfernte Kommunikation

- Synchronität:
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
		- . Empfangen: Empfänger liest Information, falls empfangen wurde und arbeitet weiter, auch wenn nicht empfangen wurde
		- Nachricht muss zwischengespeichert werden
		- Keine sichere Art der Kommunikation
		- Bei Kommunikationsabbruch entsteht keine Blockade beim Empfänger

- Gleichzeitigkeit von Hin- und Rückkanal:
	- unidirektional
	- bidirektional


## Verbindungsarten

- Verbindungsorientiert
	- Aufbau der Verbindung; Übertragung;  Abbau der Verbindung
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
2. Der Empfänger prüft den Zugang und wartet auf Dateifreigabe
3. Sender entsperrt die Datei
4. Empfänger sperrt und liest die Datei

## Kommunikation über Pipes

- erste richtige Form der IPC
- Spezielle gepufferter Informationskanal
- Ablauf über FIVO
- unidirektionaler Zugriff im Halb-Duplex-Verfahren
	- Streampipes erlauben Duplex-Betrieb
- Prozess bekommt die Umleitung nicht mit
	- Synchronisation im Kernel
- nur möglich zwischen Prozessen mit gemeinsamen Vorfahren
- Streampipes erlauben Duplexbetrieb 

### Ablauf

1. Initialisierung der Pipe
2. Senden der Daten
3. Empfangen der Daten
4. Schließen der Verbindung
5. Löschen der Pipe