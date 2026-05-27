# Prozessoperationen

## Erzeugen von Prozessen

- Zuweisung einer Prozesskennung
	- Prozesstabelle
- Zuteilung von Speicherplatz an den Prozess
	- Programmcode, Daten, Stack
- Initialisierung des Prozesskontrollblock
	- Zustand: Bereit
	- Ressourcen können von Elternprozesses geerbt werden
- Einhängen der Prozesse in Warteschlangen


## Kontextwechsel (Prozesswechsel)

- Prozessorstatus im Prozesskontrollblock sichern
	- Zustände vom Speicher, Geräten, Dateien, Registern etc.
- Prozesskontrollblock aktualisieren
	- Prozesszustand, Grund der Deaktivierung, statistische Werte
- Prozess in Warteschlange einreihen
	- Verwaltung mehrerer Warteschlangen im Betriebssystem
- Nächsten Prozess auswählen: Scheduler
- Prozesskontrollblock des neuen Prozesses aktualisieren
	- Zustand: aktiv
- Aktualisierung der Speicherverwaltungsstruktur
- Prozessorstatus aus neuem Prozesskontrollblock laden

## Warteschlangen für Prozesse

- Verkettung von Prozessdeskriptoren zu Zustandsabhängigen Listen
	- Aktiv: P1
	- Bereit: P4    P3
	- Tastatureingabe: P2
	- Speicher - E/A:  P5
	- Interrupt: 
- Wechsel der Liste durch Kontextwechsel (Zustandsübergang)


## Ursachen für Prozesswechsel

- Systemaufruf
	- Prozess gibt Kontrolle (Prozessor) freiwillig ab
- Interrupt
	- Behandlung des Interrupt erfolgt im BS Automatisch. Timer verhindert Monopol-Steuerung
- Ausnahme:
	- Prozess wird ggf. beendet. Behandlung der Ausnahme im Betriebssystem
- Warten auf Ressourcen 
	- Prozess wartet bspw. auf Netzwerkressourcen und blockiert den Fortschritt

## Synchrone und asynchrone Ereignisse

- Reaktion auf eintretende Ereignisse vor Fortführung des regulären Programms
- Unterscheidung in synchrone und asynchrone Ereignisse 
- synchron:
	- wird durch Operation des ausgeführten Programms ausgelöst
- asynchron:
	- vom Programm unvorhersehbar Zeitpunkt des Auftretens hat keinen Bezug zum Prozess.

## Unterbrechung von Prozessen

### Prozesse werden unterbrochen durch ...

- Synchrone Ereignisse:
	- Systemaufrufe
	- Programmfehler
- Asynchrone Ereignisse
	- Hardware-Interrupts
	- Hardwarefehler
	- Software-Interrupt
	- Seitenfehler

## Beendigung von Prozessen

- Ursachen:
	- Befehlszähler am Ende angelangt 
	- Fehler innerhalb des Prozesses
- Ablauf im Betriebssystem:
	- Freigeben von Ressourcen und Hauptspeicher
	- Schließen offener Dateien
	- Entfernen des Prozessdeskriptor aus Prozesstabelle
	- Information an Elternprozess

## Kontextwechsel durch Systemaufruf

- Systemaufruf: Aufruf einer vom BS bereitgestellten Funktion
- Ursache: 
	- Einsprung ins Betriebssystem (Systemmodus)
- Ablauf im Betriebssystem:
	- Sichern des gesamten Prozessorstatus
	- Prozess in Status: bereit
	- Ausführung/Initiierung des Auftrags
	- Sprung zum Scheduler
		- (Anderer) Prozess wird aktiviert

## Kontextwechsel durch Ausnahme

- Ursache:
	- Interner Fehler: während Ausführung des Prozesses
- Ablauf im Betriebssystem:
	- Sichern des gesamten Prozessorstatus
	- Abhängig von Ausnahme:
		- Beenden des Prozesses
		- Blockieren des Prozesses
		- Behebung der Ursache der Ausnahme
	- Sprung zum Scheduler

## Kontextwechsel durch Interrupt 

- Ursachen:
	- Auslösen eines Interrupts
- Ablauf im Betriebssystem :
	- Sichern des gesamten Prozessorstatus
	- Status des Prozess auf: bereit
	- Ursache des Interrupts ermitteln
	- Ereignis behandeln (z.B. E/A-Gerät)
	- Wechsel des wartenden Prozesses von: wartend zu: bereit
	- Sprung zum Scheduler
		- Kontextwechsel zum durch Interrupt aufgeweckten Prozess

# Scheduling 

- Zuteilung der Prozessorzeit auf mehrere Prozesse
- Frühere: Stapelbetrieb
	- "Ein Programm nach dem anderen"
- Herkunft des Wortes "Stack"/ "Stapel"
- Notwendig bei mehreren Anwendern oder mehreren Prozessen
- Entscheidung darüber,
	- welche Prozesse wie viel Prozessorzeit bekommen
	- in welcher Reihenfolge Prozesse bearbeitet werden 
	- nach welchem Schema welche Prozesse verdrängt werden
- Prozessorzeit
- Reihenfolge
- Verdrängung
- Mehrere Ziele müssen berücksichtigt werden:
	- Fairness
	- Ressourcennutzung
	- Reaktionszeit
	- Auftrags-Wartezeit
	- Programm-Durchsatz

## Scheduling Algorithmen

### nicht-verdrängende Verfahren für Warteschlangenverwaltung

#### First In First Out:

$$
	
	\begin{array}
	\text{IN:} \\
	4(5\text{ms}) \\
	3(2\text{ms}) \\
	2(3\text{ms}) \\
	1(7\text{ms}) \\
	\\
	\text{OUT: 1; 2; 3; 4}
	\end{array}
	
$$
- "Wer zuerst kommt, mahlt zuerst!"
- findet in Praxis kaum Anwendung
- Vorteil:
	- Faires Verfahren
- Nachteile:
	- Keine Unterscheidung zwischen Prioritäten der Prozesse
	- Kurze Aufträge müssen auf längere Prozesse warten
#### Short Job First:

$$
	\begin{array}
	\text{IN:} \\
	4(5\text{ms}) \\
	3(2\text{ms}) \\
	2(3\text{ms}) \\
	1(7\text{ms}) \\
	\\
	\text{OUT: 3; 2; 4; 1}
	\end{array}
$$

- Auswahl des jeweils kürzesten Jobs aus der Warteliste
- Schätzung der Laufzeit risikobehaftet
	- Schätzung des Zeitaufwandes obliegt dem User
- Vorteil:
	- Kurze Jobs werden als erstes ausgeführt
- Nachteile:
	- Prozesse können nach Ablauf der Zeit abgebrochen werden
	- Gefahr des "Verhungerns" in der Warteschlange

### verdrängende Verfahren für Timesharing-Betrieb

- Scheduler entzieht dem Prozess die CPU-Ressource
- Steuerung durch Interrupts
- Fehlerhafte Prozesse lösen keine Blockade aus
- Verdrängung durch Timer- oder hardware-Interrupts
- Round Robin:
	- Zeitscheibenverfahren
	- Zuteilung von fest definierten Zeitslots
	- Dauer kann abhängig von Prozessorlast variieren
	- faires Verfahren
	- Gefahr von Latenzen bei vielen aktiven Prozessen

### Kooperativen Verfahren (auch verdrängendes Verfahren)

- Prozess gibt Ressource selbständig zurück 
- Keine alternativer Eingriff des Scheduler 
- Fehlerhafte Prozesse können Blockaden auslösen
### gemischte Verfahren mit dynamischen Prioritäten

- Ziel: Minimierung der mittleren Wartezeit
- Kompromiss zwischen FIFO und SJF
$$
	\text{Priorität} = \frac{\text{Wartezeit} + \text{Ausführungzeit}}  {\text{Ausführungszeit}}
$$
- Beispiel
	- "Höchstes Antwortzeitverhältnis zuerst"
- Bevorzugung von kurzen Jobs
- Einbeziehung längerer Jobs mit langer Wartezeit
- Arten von Mischverfahren:
	- Random Job First
	- Shortest Remaining Time
	- Earliste Due Date
	- Earliest Deadline First
- Scheduler ist für bestimmte Anwendungszwecke optimiert
- Praktische Anwendungen von adaptiven und parametrisierten Prioritäts-basierten Verfahren
- Unterteilung der Prozesse in
	- Rechenintensiven  
	- E/A-intensiven

### Prioritäten

- Dient zur Erfüllung von Echtzeitergebnissen 
- erlaubt Aufteilung von Prozesstypen
- Dynamische und statische Prioritäten

- Dynamische Prioritäten:
	- werden vom BS mehrmals neu berechnet
	- Einbeziehung von Prozessmerkmalen und Systemzustandsmerkmalen
- Statische Prioritäten:
	- Zuordnung durch Administrator oder Anwender
	- sind unveränderlich

## Mehrstufige Feedback-Listen

- Die zu bearbeitenden Prozesse sind in Prioritäten unterteilt
	- von höchster zu niedrigster Priorität
	- jede Priorität enthält eine Liste der zu bearbeitenden Prozessen
	- Die Prozesse warten in dieser Warteschlange mit dem Zustand "bereit"
- Nach dem die CPU den aktuellen Thread abgearbeitet hat:
	- Prozess aus höchster nicht leerer Priorität wird gewählt und bearbeitet
	- Nach dem der aktuelle Thread bearbeitet wurde, wird der Prozess in der nächst Niedrigeren Priorität wieder eingeordnet
	- Der aktuelle Prozess wird verdrängt, wenn ein Prozess in einer höheren Priorität in den Zustand "bereit" wechselt
- Neue Prozesse werden immer in die höchste Priorität eingeordnet
- Blockierte Prozesse werden in einer externen Warteschlange eingereiht
	- Nachdem die Blockade gelöst wurde kehrt der Prozess in die zuvor verlassene Liste zurück
- Vorteile:
	- Schnelle Ausführung von kurzen Programmen, weil diese von Anfang an eine hohe Priorität haben.
	- Schnelle Bedienung von E/A-intensiven Prozessen, weil diese in hoher Prioritätenklasse verbleiben.
	- Lange Anwendungen bekommen geringere Priorität, nutzen Prozessor seltener aber dafür länger.
	- Mögliche Variation durch Anpassung der Quantumsgröße und Beachtung der Prioritäten oder Wartezeiten

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
