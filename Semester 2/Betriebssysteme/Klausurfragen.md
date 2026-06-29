# Einführung und Allgemeines

## Welche Aufgaben hat ein Betriebssystem?

Ein Betriebssystem ist für die Abstraktion des Gesamten Systemen Zuständig. Ebenfalls stellt es Dienste für Anwender und Anwendungsprogramme bereit. Zusätzlich Verwaltet es die Systemressourcen. Ein Typisches Programm des Betriebssystem ist der Taskmanager oder der Reckeddit 
## Was sind Protokolle und Dienste im BS-Kontext?

Dienste eines Betriebssystems sind die Funktionen der einzelnen Schichten (Anwendungsprogramme, Betriebssystemkern). Die Protokolle wiederum sind die Nutzungsvorschriften der einzelnen Dienste.

## Welche Schichten beinhaltet das Schichtenmodell

- Hardware
- Betriebssystem Kern (Kernel)
- Anwendungsprogramme

## Was ist ein Deadlock? Wie kann es verhindert werden?

Bei einem Deadlock blocken sich zwei oder mehr Programme gegenseitig in dem Sie Ressourcen anfordern die Bereits dem jeweils anderem Prozess zugeordnet sind. Die Prozesse warten auf die Freigabe der Ressourcen des Jeweils anderen.

Dies kann verhindert werden mit Semaphoren. Das sind Algorithmen die die Nutzung von Ressourcen verwaltet beziehungsweise Priorisiert.

## Wie kommunizieren Mikro-Kern-Systeme?

Mikro-Kern-Systeme kommunizieren über IPC-Mechanismen (Intern Prozess Kommunikation)  

## Was ist der Unterschied zwischen Traps und Interrupts

Eine Trap ist ein eine Unterbrechung eines Prozesses, die durch den Prozess selber ausgelöst wurde. 
Ein Interrupt ist eine unplanmäßige Unterbrechung ausgelöst durch ein externes Ereignis.

## Welche drei Nutzungskonzepte werden bei der Abstraktion vom System Verfolgt?

- Nutzbar machen des Systems
- Verstecken technischer Details
- Automatisierung von Vorgängen

## Was ist der Zweck einer API? 

Eine API (Application Programming Interface) ist eine definierte Schnittstelle, über die Anwendungsprogramme auf Dienste und Funktionen des Betriebssystems oder einer Bibliothek zugreifen können, ohne deren interne Implementierung zu kennen. Sie sorgt für die Abstraktion von Programmen zwischen unterschiedlichen Systemen sowie einen einheitlichennmZugriff auf Systemfunktionen.

# Prozesse und Prozesszustände

## Was sind die Hauptmerkmale eines Prozesses?

- Ein eigener (logischer) Adressraum mit Code-, Daten-, Heap- und Stack-Bereich 
- Ein eigener Ausführungskontext (Programmzähler, Registerinhalte, Prozessorstatus) 
- Eine eindeutige Prozess-Identifikationsnummer (PID) 
- Ihm zugeordnete Ressourcen (offene Dateien, Geräte, Kommunikationskanäle) 
- Ein aktueller Prozesszustand (z.B. bereit, laufend, blockiert) 
- Ein Prozesskontrollblock (PCB), in dem alle relevanten Informationen verwaltet werden

## Welche Zustände kann ein Prozess einnehmen? Was sagt jeder Zustand aus?

- Erzeugt:
	- Die Verwaltungsstruktur wurde angelegt, der Prozess aber noch nicht.
- Bereit:
	- Dem Prozess sind alle nötigen Ressourcen abgesehen von der CPU zugeteilt.
- Ausführung:
	- Der Prozess wird gerade von der CPU ausgeführt
- Blockiert/Wartend:
	- Der Prozess wartet auf Zuteilung von Notwendigen Ressourcen oder einem anderen Ereignis.
- Beendet:
	- Die Verwaltungsdaten existieren noch, der Prozess ist Terminiert.

## Worüber werden Prozesse vom Betriebssystem verwaltet?

Prozesse werden über den Prozesskontrollblock verwaltet, der in einer zentralen Prozesstabelle des Betriebssystems abgelegt ist. Dort sind alle für die Verwaltung notwendigen Informationen  gespeichert.

## Welche Ursachen für einen Kontextwechsel existieren?

- Systemaufruf:
	- Prozess gibt Kontrolle (Prozessor) freiwillig ab
- Interrupt:
	- Behandlung des Interrupts erfolgt im BS Autom. Timer verhindern Monopol-Steuerung
- Ausnahme:
	- Prozess wird ggf. beendet. Behandlung der Ausnahme im Betriebssystem 
- Warten auf Ressourcen:
	- Prozess wartet bspw. auf Netzwerkressourcen und blockiert den Fortschritt

## Was beinhaltet der Programmspeicher eines Prozesses?

- Programmkontext 
	- kleiner Speicherbereich für Aufrufparameter und Umgebungsvariablen
- Maschinencode
	- Maschinenbefehle, durch Compiler und Linker aus Programmcode erzeugt
- Statische Daten
	- statische reservierte Bereiche für Variablen und Konstanten des Programms
- Heap
	- dynamischer Speicher, der während Laufzeit genutzt werden kann
- Laufzeitstack
	- dynamischer Speicher, für Daten der Unterprogrammaktivierung

## Was unterscheidet den Kernel-Modus vom User-Modus?

- User-Modus:
	- CPU Kontrolle liegt beim Aktuellen Programm
	- eingeschränkten Rechten: Einfacher Befehlssatz
- Kernel-Modus:
	- CPU wird in privilegierten Modus versetzt
	- Geringere Sicherheit: Erweiterter Befehlssatzt
	- Aufhebung hardwareseitiger Speicherzugriffbeschränkungen

## Mit welchem Zustand startet ein Prozess immer?

Ein Prozess Startet immer im Zustand Neu.

# Prozessverwaltung und Scheduling

## Was unterscheidet kooperative und verdrängende Scheduling-Verfahren?

- Kooperative Verfahren:
	- Prozess gibt Ressource selbständig zurück
	- Kein Aktiver eingriff des Scheduler
	- Fehlerhafte Prozesse können Blockaden auslösen
- Verdrängende Verfahren:
	- Scheduler entzieht dem Prozess die CPU-Ressource
	- Steuerung durch Interrupt
	- Fehlerhafte Prozesse lösen keine Blockaden aus
	- Verdrängung durch Timer- und Hardware-Interrupts

## Wie funktioniert das Round-Robin-Verfahren? Welches Risiko birgt dieses Verfahren?

- Alle Prozesse mit dem Status bereit sind in einer Warteschlange nach dem FIVO Prinzip geordnet
- Jeder Prozess erhält bei Ausführung eine festgelegte Teil der Zeitscheibe
- In dieser Zeit wird der Prozess abgearbeitet
- Nach Ablauf der Zeiteinheit wird der Prozess unterbrochen und ans Ende der Warteschlange eingereiht
- Das Risiko von Latenzen entsteht bei zu vielen aktiven Prozessen

## Wozu dient der Prozesskontrollblock?

Der Prozesskontrollblock enthält wichtige Information der einzelnen Prozesse. Zu diesen gehören:
- Prozessidentifikation
- Dateizustände
- Stack-Zeiger
- Befehlssätze
- Verwaltungsinformationen
- Speicherbelegung

## Welche Ziele werden beim Scheduling verfolgt?

- Fairness
- Reaktionszeit
- Ressourcennutzung
- Auftrags-Wartezeiten
- Programm-Durchsatz

## Was beinhaltet der Prozessdeskriptor?

- Eindeutige Prozessidentifikation
- Priorität
- Zustand
- Ressourcenverbrauch
- Zugriffsrechtsdeskriptor
- Hauptspeicherdeskriptor
- Dateideskriptor
- Maschinenzustand

# Rechnerarchitekturen

## Was zeichnet echte Parallelität aus?

Echte Parallelität bedeutet, dass tatsächlich zwei Prozesse zur selben Zeit bearbeitet werden, dass kann nur durch mehrere Prozessoren Realisiert werden

## Was zeichnet nebenläufige Prozesse aus?

Nebenläufige Prozesse laufen scheinbar Parallel ab, tatsächlich wechselt der Kontext immer wieder in kurzer Zeit zwischen den Prozessen.

## Erläutern Sie die Abarbeitung von zwei „pseudo parallelen“ Prozessen!

Bei pseudo-paralleler Ausführung auf einem einzelnen Prozessorkern läuft zu jedem Zeitpunkt nur einer der beiden Prozesse. Das Betriebssystem schaltet über das Scheduling sehr schnell zwischen beiden Prozessen hin und her, indem es jeweils einen Kontextwechsel durchführt. Durch die hohe Wechselfrequenz entsteht für den Benutzer der Eindruck, beide Prozesse würden gleichzeitig laufen, obwohl die CPU sie nur abwechselnd, scheibchenweise bearbeitet.

## Welchen Vorteil bietet die Distributed-Memory-Access-Architektur ggü. der Uniform-Memory-Architektur ?

Bei einer Uniform-Memory-Architektur greifen alle Prozessoren über einen gemeinsamen Bus auf einen zentralen Hauptspeicher zu, wodurch bei steigender Prozessorzahl der Bus zum Engpass wird. 
Bei einer Distributed-Memory-Architektur besitzt dagegen jeder Prozessor einen eigenen, lokalen Speicherbereich mit sehr schnellem Zugriff. Dadurch können Speicherzugriffe stärker parallelisiert werden und das System lässt sich deutlich besser auf viele Prozessoren skalieren.

# Interprozesskommunikation

## Was unterscheidet synchrone und asynchrone Kommunikation?

Bei synchroner Kommunikation müssen Sender und Empfänger zum Zeitpunkt der Übertragung beide bereit sein. Auf Jede gesendete Nachricht folgt eine Bestätigung. 
Bei asynchroner Kommunikation kann der Sender eine Nachricht abschicken und sofort mit seiner Arbeit fortfahren, ohne auf den Empfang durch den Empfänger warten zu müssen. Diese Art der Kommunikation ist nicht sicher.

## Erklären Sie die Kommunikation über Pipes!

Eine Pipe ist ein unidirektionaler Kommunikationskanal zwischen zwei Prozessen. Ein schreibender Prozess legt Daten am Eingang der Pipe ab, ein lesender Prozess entnimmt sie am Ausgang in genau der Reihenfolge, in der sie geschrieben wurden. Die Pipe besitzt einen begrenzten Puffer im Kernel. Ist der Puffer voll, wird der schreibende Prozess blockiert, bis wieder Platz frei ist. Wenn der Puffer leer ist, wird der lesende Prozess blockiert, bis neue Daten verfügbar sind.

## Was unterscheidet Multicast- und Broadcast-Informationen?

Eine Broadcast-Nachricht wird an alle Teilnehmer eines Netzes bzw. Systems gesendet, während eine Multicast-Nachricht gezielt nur an eine ausgewählte Gruppe von Empfängern adressiert wird.

## Was unterscheidet ein Signal von einer Nachricht?

Ein Signal ist eine kurze, asynchrone Benachrichtigung ohne Nutzdateninhalt. Eine Nachricht dagegen transportiert tatsächliche Daten/Inhalte zwischen Prozessen und wird gezielt vom empfangenden Prozess gelesen und verarbeitet.

## Nennen Sie drei Möglichkeiten zur Interprozesskommunikation!

- Kommunikation über Dateien
- Kommunikation über Nachrichten
- Kommunikation über Shared Memory

## Erläutern Sie die Funktionsweise eines Monitors!

Ein Monitor fasst Daten und die Prozeduren, die auf diese Daten zugreifen, in einer gemeinsamen Einheit zusammen. Die Laufzeitumgebung stellt dabei sicher, dass zu jedem Zeitpunkt nur ein Thread oder Prozess innerhalb des Monitors aktiv sein kann, wodurch der gegenseitige Ausschlussautomatisch garantiert wird. Zusätzlich besitzt ein Monitor Bedingungsvariablen, über die wartende Prozesse schlafen gelegt und bei Eintreten einer bestimmten Bedingung von anderen Prozessen wieder geweckt werden können.

## Welches Risiko birgt synchrone Kommunikation zwischen zwei Prozessen? 

Es besteht das Risiko eines Deadlocks: Wenn beide Prozesse gleichzeitig blockierend aufeinander warten. Beide könnten darauf warten, dass der jeweils andere zuerst sendet oder empfängt dadurch blockieren sich beide gegenseitig dauerhaft, und keiner von ihnen kann fortfahren.

# Verklemmung 

## Wie kann Verklemmungen in einem System vorgebeugt werden?

- Vermeidung von unnötigen Exklusivsperrungen
- Ressourcen müssen in einer Geordneten Reihenfolge angefordert werden
- Alle benötigten Ressourcen werden vor Ausführung vergeben
- Entzug von Ressourcen zulassen
- Verklemmungserkennung mit Softwareseitiger Auflösung

## Erläutern Sie das Erzeuger-Verbraucher-Problem!

Beim Erzeuger-Verbraucher-Problem produzieren ein oder mehrere Erzeuger-Prozesse Daten und legen sie in einem gemeinsamen Puffer begrenzter Größe ab, während ein oder mehrere Verbraucher-Prozesse diese Daten aus dem Puffer entnehmen und weiterverarbeiten. Dabei muss sichergestellt werden, dass ein Erzeuger nicht in einen vollen Puffer schreibt und ein Verbraucher nicht aus einem leeren Puffer liest oder Beide Gleichzeitig auf den Speicher zugreifen.

## Welche Bedingungen führen zu einer Verklemmung in einem System?

- Exklusivnutzung von Ressourcen
	- Ressourcen werden exklusiv von einem Prozess genutzt
- Reservieren und Warten
	- Reservierte Ressourcen werden erst nach der Nutzung Freigegeben
- Keine Wegnahme
	- Ressourcen, die ein Prozess reserviert hat, werden ihm nicht weggenommen
- Gegenseitiges Warten
	- Es gibt mehrere Prozesse die auf Ressourcen werten, die von jedem Prozess Reserviert sind

## Erklären Sie die Strategie der atomaren Ressourcenzuteilung!

Bei der atomaren Ressourcenzuteilung muss ein Prozess vor Beginn seiner Ausführung alle Ressourcen anfordern, die er insgesamt benötigt. Das Betriebssystem vergibt diese Ressourcen entweder vollständig und gleichzeitig oder gar nicht. Können nicht alle angeforderten Ressourcen sofort bereitgestellt werden, wird der Prozess zurückgestellt. Dies kann jedoch dazu führen das der Prozess sehr lange Wartezeit hat bis zur Ausführung.

# Threads und Threadverwaltung





## Was passiert beim Polling?



## Welche Aufgaben hat die geräteunabhängige Software in einem System?

## Nennen Sie drei Aufgaben eines Gerätetreibers


## Erläutern Sie Funktionsweise und Vorteile einer beliebigen Direct Memory Access-Strategie

## Zeichne das Erweiterte Prozessmodell

## Worüber werden Prozesse vom Betriebssystem verwaltet

## Wo werden zur Laufzeit erzeugte Variablen bei einem Prozess gespeichert?

## Was unterscheidet den Kernel-Modus vom User-Modus?

Direkter Zugriff auf das System. Es gibt weniger Sicherheitsvorkehrungen.

## ?Aus welchen Bestandteilen besteht ein Gerätertreiber?

## ?Welche Aufgaben übernimmt ein Gerätetreiber?

## ?Ein Betriebssystem pflegt eine Prozesstabelle. Was ist drin enthalten?

## ?Wann wird ein Programm zu einem Prozess?

## ?Warum versucht Schadsoftware den Kernel-Modus ein System zu erreichen?

## ?Welcher Umstand führt dazu, dass ein Prozess auf Wartend gesetzt wird?

## Welcher Schritt ist notwendig um Signale zu Interpretieren?

  

## Nennen Sie drei Bestandteile des Prozessdeskriptor!

  

## Welche Ziele werden beim Scheduling verfolgt?

  

## Wie wird der Vorgang genannt, wenn der Prozessor von einem Prozess zum anderen wechselt?

  

Der Vorgang wird Kontext Wechsel genannt.

  

## Was bedeutet "kooperatives Scheduling"? Worin besteht das Risiko bei diesem Verfahren?

  

## Erläutern Sie den Unterschied zwischen synchronen und asynchronen Ereignissen während eines Prozesses!

  

## Wozu kommunizieren Prozesse miteinander? Welche Ziele werden verfolgt?

  

Es werden Daten und Informationen ausgetauscht. Dies ist notwendig um zugriff auf begrenzt Ressourcen zu koordinieren, oder Informationen an einen Kind Prozess weiter zu geben.

  

## Welche Informationen sind in der Thread-ID im Threadkontrollblock enthalten?

  

## Welche Umstände führen zu Verklemmungen zwischen Prozessen?

  

## Welcher Faktor verhindert, dass ein System durch Parallelisierung nicht unendlich beschleunigt werden kann?

  

## Was wird hauptsächlich durch das Anlegen mehrerer Threads auf User-Ebene erzeugt?

  

## RAID-System Lückentext

## Wissen: Systemprüfpunkt

## Was wird mit dem Prinzip der Deduplizierung erreicht?

## RAID 0 ist kein echtes RAID-System. warum?

## Warum können keine einzelne Dateien aus einem Windows-Systemabbild wiederhergestellt werden?

## Warum können Dateien aus einem Blocklevel-Backup nicht ohne viel Mehraufwand hergestellt werden?

## Wie viele Festplatten können bei RAID 6 ausfallen bevor Schaden entsteht?

## Wann wird ein Systemprüfpunkt angelegt? Was wird hier nicht gesichert?

## Erläutern Sie den Unterschied zwischen einem differentiellen und einem inkrementellen Backup!

## Welche Speichermedien eignen sich speziell für Backups? Warum?

## Was unterscheidet persistenten und flüchtigen Speicher? Nennen Sie je ein Beispiel!

## Wie ist es möglich, dass mehr als ein Zustand in einer Flash-Zelle gespeichert wird? Worin besteht der Nachteil bei diesem Verfahren?

## Welche Systeme verfügen nicht über L3-Cache? Wofür wird dieser Speicher genutzt?

## Welche Komponente übersetzten logische in physische Speicheradressen? Warum passiert dieser Schritt nicht auf Programm-/Prozessebene?

## Was soll mit der Defragmentierung einer Festplatte erreicht werden?

## Wann tritt der Seitenfehler auf? Welches Verfahren soll Seitenfehler vermeiden?

## Wo tritt interne Fragmentierung auf? 

## Erläutern Sie eine der fünf Anforderungen an eine Speicherverwaltung!

## An welcher Stelle findet interne Fragmentierung statt? Mit welchem Verfahre lässt sie sich theoretische beheben?

## Welche Komponente verwaltet die Speichermedien und den Datenfluss in einem Rechnersystem?

Memory Management Unit

## Welche Anforderungen werden an ein Speichersystem gestellt?

## Was wird mit der Working-Set-Methode versucht zu verhindern?

## Welche Unterscheidung können Sie zwischen Safety und Security treffen?

## Wie beschreiben Sie Malware?

## Welche Phasen durchläuft ein Virus? Was passiert in der jeweiligen Phase?

## Was unterscheidet Spoofing und Phishing?

## Bringen Sie Authentisierung, Autorisierung und Authentifizierung in die richtige Reihenfolge!

## Welche zwei Werkzeuge nutzt ein Computerwurm zur Verbreitung?

## Nenn Sie zwei Eigenschaften eines sicheren Systems!

## Nach welchen zwei Zwecken lässt sich Schadsoftware unterscheiden?

## Welche Kanäle lassen sich zur verdeckten Kommunikation nutzen?

- Zeitkanal:
- Speicherkanal:

## Warum ist verdeckte Kommunikation so schwer aufzudecken?


## Nach welchem Prinzip arbeitet das Bell-Lapadula-Modell?


## Welche Fragen können bei einer Authentifizierung gestellt werden?


## Erläutern Sie das Prinzip der drei ihnen bekannten Sicherheitspolitiken und nennen Sie je einen Vor- und Nachteil!

## Nennen Sie vier Aufgaben der Firewall!

## Aufbau der Firewall kennen und die Funktionsweise/ den Nutzen der einzelnen Komponenten kennen.



# Soll ich aufschreiben:

Vermittlung zw. logischer Sicht von Dateien und Verzeichnissen und physikalischer Sicht von Blöcken, Spuren, Sektoren, Geräten, Netzlaufwerken etc.