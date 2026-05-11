# Kommunikation zwischen Anwendung

- es gibt drei Systeme
- Menschlesbare Geräte: LEDs/ Lampen
- Maschinen Lesbare: Netzwerk Ports/ Speicher
- Kommunikationsgeräte: Netzwerke/ Telefon/ Server

## Schnittstellen Mensch- Maschine:

- Grafische Benutzeroberfläche
- Kommandozeile
- Touchscreen
- Sprachsteuerung
- Gestensteuerung
## Kommunikation mit Anwender
### Varianten der Kommunikation:
Zeichen/ Blockorientiert: Netzwerk/ Speicher(Festplatten)
Sequentiell/ Wahlfreier Zugriff: Speicherzugriff
Synchron/ Asynchrone Übertragung: Netzwerk: Warten auf Antwort(Synchron); 
Gemeinsame/ Exlusiv genutze Kanäle: Anschlüsse auf dem Mainboard(Exlusiv (mehr bandbreite)); 
Read-Write/Read Only/ Write Only: 

## Anforderung an ein E/A-System

- Hohe Geschwindigkeit
- Zuverlässigkeit
- Kompatibilität
- Benutzerfreundlichkeit
- Fehlertoleranz

### Ein-/Ausgabegeräte

Blockorientiert: speichern Informationen in Blöcken mit fester Größe am jewils eigenen Adressen
			Blöcke können unabhängig voneinander gelsen und geschrieben werden
Zeichenorientiert: verabeitet Zeichenströme ohne auf Blockstrucktur zu achten. Sie sind nicht adressierbar

- bestehen aus Controller (Elektronik) und gesteuerter Mechanik
- Controller:
	- verwaltet und steuert Geräte
	- Stellt einfache Schnittstelle für Betriebssystem dar
	- Besitzt Register ... 
--Infos aus Präsentation--

### Programmierte E/A Systeme

Prozesse warten im Block-Zustand,
bis E/A-Operation abgeschlossen ist
### Unterbrechungsgesteuerte E/A

Prozess ruft E/A-Befehl auf, und setzt Abarbeitung dann fort. E/A-Interrupt folgt.
### Direct Memory Access

DMA-Modul steuert Datenaustausch zwischen RAM und E/A-Modul.
Unterbrechung der CPU bei Übertragung des Blockes
- CPU delegiert Übertragungsaufgaben an eine einfache CPU
- CPU kann parallel für andere Aufgaben genutzt werden 
- Verwendung eines DMA-Request 
	- Adressen Anzahl an Bytes, Reservierung des Hauptspeichers
	--Infos aus Präsentation--

#### Singel Bus Detached
- Alle Module nutzen Bus-System gemeinsam
- DMA-Modul kann als stellvtr. Prozessor gesehen werden
- Prinzip ist simpel und billig kann aber nicht effizient
	- Gefahr eines Flschenhals
	- Zwei Buszyklen pro Übertragung benötigt

#### Singel Bus Integrated

- E/A- Geräte an DMA- Controllern
- Einsparung von Bus-Zyklen gegenüber dem "Singel Bus Detached"- Prinzip

#### Separated DMA Bus

- Alle E/A-Geräte an einem DMA-Controllern
- Räumliche Trennung der Bus-Netzte
- Einfach skalierbare Architektur
- Prozessor hat theoretisch keine E/A-Aufgaben

### Rolle des Betriebssystem

- Einheitliche Schnittstellen
- Geräteverwaltung
- Zugriffschutz
- Ressourcensteuerung

# Kommunikation mit E/A-Geräten

#### Polling:

- Interaktion zwischen Rechner und Controller 
	- Passives verhalten des Controllers
- Verwendung von Statusbits am Controller
- Praktisch ineffizient
- Ablauf:
	- Rechner liest zyklisch des BUSY-Bit, bis Wert "bereit" anzeigt
	- Rechner überträgt ein Byte in Ausgaberegister
	- Rechner setzt EXECUTE-Bit
	- Controller erkennt, dass er arbeiten soll und setzt BUSY-Bit
	- Controller liest Schreibbefehl, liest Bytes aus Ausgaberegister und löst Ausgabe aus
	- EXECUTE-Bit, BUSY-Bit und ERROR-Bit wird auf 0 gesetzt
--Infos aus Präsentation--

#### Interrupts

- Keine zyklische Abfrage durch den Rechner
- Controller "meldet sich selbständig"
- Ausführen einer Interrupt Service Routine
- Maskieren von anderen Interrupts
- Umfangreiche Kontrollmechanismen für mehrere Interrupts in modernen Systemen
	- Prioritäten, Nebenläufigkeiten etc.


--Infos aus Präsentation--
# Gerätetreiber

- Modul des Systemkerns, das ein oder mehrere Geräte desselben Typs kontrolliert
- Idealerweise Implementierung einer einheitlichen Schnittstelle für sämtliche E/A-Funktionen
- Bspw.: "write" zum Schreiben von Informationen in ein Gerät

#### Aufgaben:

- Stellt eine Schnittstelle für BS und Hardware zur Verfügung
- Übersetzt befehle für Controller 
- Funktionskontrolle
- definiert das Gerät gegenüber dem Betriebssystem
- Ereignisverwaltung
- meldet/leitet weiter Geräte- und Controllerbefehle
- wandelt E/A-Anforderungen im gerätespezifische Befehle um
- bearbeitet Schreib- und Lesebefehle
- definiert sich gegenüber dem Betriebssystem 
- antwortet auf Hardwaresignale
- initialisiert den Controller und das Gerät bei Systemstart
- aktiviert das Gerät
- puffert Daten bei der Ein- und Ausgabe

#### Abhängig vom Betriebssystem ist...

- ob alle Treiber bei der Systemkonfiguration eingebunden werden müssen 
	- Neu Kompilieren/Übersetzten des BS notwendig
- ob sich Treiber später hinzufügen lassen, aber bei Systemstart bekannt sein müssen
- ob Treiber während des Betriebs installiert und gestarrte/ gestoppt werden können

#### Sonderfälle

- Neue Geräte können hinzukommen
	- Identifikation 
	- Alle Anrufer informieren
- Entfernen eines Geräts
	- Aktuelle I/O-Operation beenden
	- Wartende Anfragen entfernen
	- Alle Aufrufer informieren

--Infos aus Präsentation--

#### Ein-/Ausgabe-Anforderungspakete (IORP)

- Enthält alle vom Treiber für die E/A-Operation benötigten Informationen
	- Geräteadresse, Anzahl an Bytes etc.
- Verwaltung der Pakete in gerätespezifischen Listen
	- Verwendung von optimierten Verwaltungsalgorithmen
#### Geräteunabhängige Software

- Unabhängig vom E/A-Gerätdurchführbare Aufgaben
	- einheitliches Interface
	- Pufferung
	- Fehlerbericht
	- Anforderung/Freigabe von Geräten
	- Geräteabhängige Blockgröße

#### Geräteunabhängige Software

Hauptaufgabe:
- Einheitliche Darstellung unterschiedlicher E/A-Geräte und Treiber

weil
- Leichtere Einbindung von Treibern an einheitlichen Schnittstellen

# Prozesse und Threads


## Begriffsklärung

- Task: Synony für Prozess, aber auch Thread; Aufgabe die ein Betriebsystem hat
- Prozess ist ein Programm in der Ausführung
- Programm: statische  
- Thread: ein seq
--Infos aus Präsentation--

### Unterscheidung der Betriebsmodi eines Betriebssystem

#### Anwender Modus:
- CPU-Kontrolle liegt beim aktuellen Programm
- Einfacher Befehlssatz
--Infos aus Präsentation--

- User-Mode nutzt nur API-Funktionen
- Betriebssystem im Kernel-Modus nutzt System direkt
- Umschaltung durch die CPU

"Ein Prozess ist ein in Asführung befindeliches Programm"

--Infos aus Präsentation--

#### Parallelität
- Realität: Bei Einzelprozessorsystemen nur 
--Infos aus Präsentation--

# CPU-Zeitschalt: Quantum

#### Prozessumschaltung
- Problem: Mehrere Proesse sollen ausgeführt werden
- Frage: Welcher Prozess soll gestertet werden?
- Scheduler: "entscheidet" welcher Prozess
--Infos aus Präsentation--

#### Prozessumschaltung durch Scheduling
- Früher:
	- Stapelbetrieb
--Infos aus Präsentation--
- Heute:
	- Unterbrechung durch Timer
	- Scheduler entscheidet über Unterbrechung des laufenden Prozesses
	- Fortsetzung eines laufenden Prozesses zu späterem Zeitpunkt
	- Verteilung der Prozesse anhand unterschiedlicher Parameter
-> Präventives Scheduling 

## Prozessmerkmale

### Prozesse ... 
- sind die aktiven Komponenten eines Systems
- können voneinander abhängen
- besitzt einen eigenen Adressraum
- verfügen über virtuellen Prozessen
- benutzen und benötigen Ressourcen
- haben einen Vaterprozess und ggf. Kindprozesse 

### Prozesse werde erzeugt für ...

- Benutzeranfragen
--Infos aus Präsentation--

### Prozesse werden terminiert ...
- Freiwillig
	- Exit-Schlüsselwort
	- Fehler innerhalb des Prozesses
- Unfreiwillig
	- Schwerwiegende Fehler 
	- Durch andere Prozesse (kill)
	-> Reaktion des Prozesses auf Ereignisse Mögliche 

### Dabei haben Prozesse immer einen der folgenden Zustände:

- aktiv: besitz alle Ressourcen und CPU und wird abgearbeitet
- bereit: besitzt nicht die CPU, aber alle notwendigen Ressourcen
- wartende: wartend auf Zuteilung 

--Infos aus Präsentation--


## Bestandteil eines Prozesses

- zwei Bestandteile des Pro --Infos aus Präsentation--
- Programmspeicher
	- enthält auszuführenden Code des Prozesses
	- Maschinenbefehle
	- abgelegt in geschütztem Speicherbereich
	- Programmkontext: kleiner Speicherbereich für Aufrufparameter und Umgebungsvariablen
	- Maschinencode: Maschinenbefehle, durch Compiler  und Linker aus Programmcode erzeugt
	- Statische Daten: statisch reservierte Bereiche für variablen und Konstanten des Programms
	- Heap: dynamischer Speicher, der während Laufzeit genutzt werden kann
	- Laufzeitstack: dynamischer Speicher, für Daten für Unterprogrammaktivierungen
- Prozessdeskriptor:
	- Datenstruktur des Systemkerns
	- Beinhaltet Metadaten des Prozesses
	- "beschriebt den Prozess"
	- Eindeutige Prozessidentifikation 
	- Zustand
	- Zugriffsrechtsdeskriptor
	- Dateideskriptor
	- Priorität
	- Ressourcenverbrauch
	- Hauptspeicherdeskriptor
	- Maschinenzustand

## Implementierung von Prozessen

- Verwaltung der Prozesstabelle
	- Ein Eintrag pro Prozess
	- Prozesskontrollblock einhält Informationen über Prozesszustand
	- Inhalt des Prozesskontrollblock
		- Prozessidentifikation
		- Stack-Zeiger
		- Verwaltungsinformationen
		- Dateizustände
		- Befehlszähler
		- Speicherbelegung