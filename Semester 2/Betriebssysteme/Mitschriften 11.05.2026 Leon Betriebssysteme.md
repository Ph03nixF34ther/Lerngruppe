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

## Warteschlangen für Prozesse

- Verkettung von Prozessdeskriptoren zu Zustandsabhängigen Listen
- --Infos aus Präsentation--
- Wechsel der Liste durch Kontextwechsel (Zustandsübergang)

## Kontextwechsel

(Weiterführung von Vorheriger Folie)
--Infos aus Präsentation--

## Ursachen für Prozesswechsel

- Systemaufruf
	- Prozess gibt Kontrolle (Prozessor) freiwillig ab
- Interrupt
	- Behandlung des Interrupt erfolgt im BS Autom. Timer verhindert Monopol-Steuerung
- Ausnahme:
	- Prozess wird ggf. beendet. Behandlung der Ausnahme im Betriebssystem
- Warten auf Ressourcen 
	- Prozess wartet bspw. 
	- --Infos aus Präsentation--

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

## Beendigung von prozessen

- Ursachen:
	- Befehlszähler am Ende angelangt 
	- Fehler innerhalb des Prozesses
- Ablauf im Betriebssystem:
	- Freigegeben von Ressourcen und hauptspeicher
	- Schließen offener Dateien
	- --Infos aus Präsentation--

## Kontextwechsel durch Systemaufruf

- Ursache: 
	- Einsprung ins Betriebssystem (Systemmodus)
- Ablauf im Betriebssystem:
	- Sichern des gesamten Prozessorstatus
	- Prozess in Status: bereit
	- Ausführung/Initiierung des Auftrags
	- Sprung zum Scheduler
		- (Anderer) Prozess wird aktiviert

## Kontextwechsel durch Ausnahme

- Usrachen:
	- Interner Fehler: währedn Ausführung des Prozesses
- Ablauf im Betriebssystem:
	- Sichern des gesamten Prozessorstatus
	- Abhängig von Ausnahem:
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

- Zuteilung der Prozessorzeit auf mehrere 
- --Infos aus Präsentation--
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

- nicht-verdrängende Verfahren für Warteschlangenverwaltung
- verdrängende Verfahren für Timesharing-Betrieb
	- Scheduler entzieht dem Proess die CPU-Ressource
	- Steuerung durch Interrupts
	- Fehlerhafte Prozesse lösen keine Blockade aus
	- Verdrängung durch Timer- oder hardware-Interrupts
- Kooperativen Verfahren (auch verdrängendes Verfahren)
	- Prozess gibt Ressource selbständig zurück 
	- Keine alternativer Eingriff des Scheduler 
	- Fehlerhafte Prozesse können Blockaden auslösen
- gemischte Verfahren mit dynamischen Prioritäten
- Prioritäten


--Infos aus Präsentation--

# Mehrstufige Feedback-Listen

--Infos aus Präsentation--

# Interprozesskommunikation

- Das wichtigste Mittel zur Koordination mehrerer Prozesse ist Informationsaustausch
- Wozu sollen Informationen ausgetauscht werden?
	- Geordnete Zugriffe auf Ressourcen
	- Auflösung von Prozessabhängigkeit
	- Informationsaustausch zwischen Prozessen
- Die Kommunikation zwischen Prozessen auf demselben Computer deren Spiecherbereich aber strikt voneinander getrennt sind.
aber auch
- Den Datenaustausch in verteilten Systemen, bspw. mittels Threads in einem Laufzeitsystem oder über Programme auf unterschiedlichen aber miteinander verbundenen Rechnern.
- --Infos aus Präsentation--