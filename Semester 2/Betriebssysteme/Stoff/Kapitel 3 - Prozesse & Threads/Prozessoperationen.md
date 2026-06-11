# Erzeugen von Prozessen

- Zuweisung einer Prozesskennung
	- Prozesstabelle
- Zuteilung von Speicherplatz an den Prozess
	- Programmcode, Daten, Stack
- Initialisierung des Prozesskontrollblock
	- Zustand: Bereit
	- Ressourcen können von Elternprozesses geerbt werden
- Einhängen der Prozesse in Warteschlangen


# Kontextwechsel (Prozesswechsel)

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

# Warteschlangen für Prozesse

- Verkettung von Prozessdeskriptoren zu Zustandsabhängigen Listen
	- Aktiv: P1
	- Bereit: P4    P3
	- Tastatureingabe: P2
	- Speicher - E/A:  P5
	- Interrupt: 
- Wechsel der Liste durch Kontextwechsel (Zustandsübergang)


# Ursachen für Prozesswechsel

- Systemaufruf
	- Prozess gibt Kontrolle (Prozessor) freiwillig ab
- Interrupt
	- Behandlung des Interrupt erfolgt im BS Automatisch. Timer verhindert Monopol-Steuerung
- Ausnahme:
	- Prozess wird ggf. beendet. Behandlung der Ausnahme im Betriebssystem
- Warten auf Ressourcen 
	- Prozess wartet bspw. auf Netzwerkressourcen und blockiert den Fortschritt

# Synchrone und asynchrone Ereignisse

- Reaktion auf eintretende Ereignisse vor Fortführung des regulären Programms
- Unterscheidung in synchrone und asynchrone Ereignisse 
- synchron:
	- wird durch Operation des ausgeführten Programms ausgelöst
- asynchron:
	- vom Programm unvorhersehbar Zeitpunkt des Auftretens hat keinen Bezug zum Prozess.

# Unterbrechung von Prozessen

### Prozesse werden unterbrochen durch ...

- Synchrone Ereignisse:
	- Systemaufrufe
	- Programmfehler
- Asynchrone Ereignisse
	- Hardware-Interrupts
	- Hardwarefehler
	- Software-Interrupt
	- Seitenfehler

# Beendigung von Prozessen

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

# Kontextwechsel durch Ausnahme

- Ursache:
	- Interner Fehler: während Ausführung des Prozesses
- Ablauf im Betriebssystem:
	- Sichern des gesamten Prozessorstatus
	- Abhängig von Ausnahme:
		- Beenden des Prozesses
		- Blockieren des Prozesses
		- Behebung der Ursache der Ausnahme
	- Sprung zum Scheduler

# Kontextwechsel durch Interrupt 

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