# Einführung und Allgemeines

## Welche Aufgaben hat ein Betriebssystem?

Ein Betriebssystem ist für die Abstraktion des Gesamten Systemen Zuständig. Ebenfalls stellt es Dienste für Anwender und Anwendungsprogramme bereit. Zusätzlich Verwaltet es die Systemressourcen. Ein Typisches Programm des Betriebssystem ist der Taskmanager oder der Reckeddit 

## Was sind Protokolle und Dienste im BS-Kontext?

Dienste eines Betriebssystems sind die Funktionen der einzelnen Schichten (Anwendungsprogramme, Betriebssystemkern). Die Protokolle wiederum sind die Nutzungsvorschriften der einzelnen Dienste.

## Welche Schichten beinhaltet das Schichtenmodell?

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

Eine API (Application Programming Interface) ist eine definierte Schnittstelle, über die Anwendungsprogramme auf Dienste und Funktionen des Betriebssystems oder einer Bibliothek zugreifen können, ohne deren interne Implementierung zu kennen. Sie sorgt für die Abstraktion von Programmen zwischen unterschiedlichen Systemen sowie einen einheitlichen Zugriff auf Systemfunktionen.

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

Prozesse werden über den Prozesskontrollblock verwaltet, der in einer zentralen Prozesstabelle des Betriebssystems abgelegt ist. Dort sind alle für die Verwaltung notwendigen Informationen gespeichert.

## Welche Ursachen für einen Kontextwechsel existieren?

- Systemaufruf:
	- Prozess gibt Kontrolle (Prozessor) freiwillig ab
- Interrupt:
	- Behandlung des Interrupts erfolgt im BS Autom. Timer verhindern Monopol-Steuerung
- Ausnahme:
	- Prozess wird ggf. beendet. Behandlung der Ausnahme im Betriebssystem 
- Warten auf Ressourcen:
	- Prozess wartet bspw. auf Netzwerkressourcen und blockiert den Fortschritt

## Was beinhaltet der Programmspeicher eines Prozesses? (Nicht in der Klausur)

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

- Alle Prozesse mit dem Status bereit sind in einer Warteschlange nach dem FIFO Prinzip geordnet
- Jeder Prozess erhält bei Ausführung eine festgelegte Teil der Zeitscheibe (Quantum)
- In dieser Zeit wird der Prozess abgearbeitet
- Nach Ablauf der Zeiteinheit wird der Prozess unterbrochen und ans Ende der Warteschlange eingereiht
- Das Risiko von Latenzen entsteht bei zu vielen aktiven Prozessen

## Wozu dient der Prozesskontrollblock?

Der Prozesskontrollblock enthält wichtige Information der einzelnen Prozesse. Diese dienen dazu den Prozess in der Prozesstabelle zu verwalten. 

## Welche Ziele werden beim Scheduling verfolgt?

- Fairness
- Reaktionszeit
- Ressourcennutzung
- Auftrags-Wartezeiten
- Programm-Durchsatz

## Was beinhaltet der Prozessdeskriptor?

- Eindeutige Prozessidentifikation (PID)
- Priorität
- Zustand
- Ressourcenverbrauch
- Zugriffsrechtsdeskriptor
- Hauptspeicherdeskriptor
- Dateideskriptor
- Maschinenzustand

# Rechnerarchitekturen

## Was zeichnet echte Parallelität aus?

Echte Parallelität bedeutet, dass tatsächlich zwei Prozesse zur selben Zeit bearbeitet werden, dass kann nur durch mehrere Prozessoren realisiert werden

## Was zeichnet nebenläufige Prozesse aus?

Nebenläufige Prozesse laufen scheinbar parallel ab, tatsächlich wechselt der Kontext immer wieder in kurzer Zeit zwischen den Prozessen.

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

## Was ist der Unterschied zwischen Kernel- und User-Threads? Nennen Sie je ein Beispiel für einen dieser Threads!

Der Wechsel zwischen User-Level-Threads ist sehr schnell, blockiert allerdings den gesamte Prozess mit allen seinen Threads. Beispiel: Eingabeverwaltung.

Kernel-Level-Threads können unabhängig von den anderen blockieren oder ausgeführt werden. Sie werden direkt vom Betriebssystem gestartet. Sie laufen echt Parallel bei einem Multiprozessor System. Der Kontextwechsel dauert jedoch länger. Beispiel: Systemaufruf.

## Nennen Sie die Bestandteile eines Threadkontrollblocks!

- Thread-ID
- Stackpointer
- Register
- Scheduling Eigenschaften
- Statusinformationen

## Welche Ziele werden beim Multithreading verfolgt?

- Optimiertes Antwortverhalten
- Gemeinsame Nutzung von Ressourcen
- Effiziente Nutzung von Mehrkernarchitekturen
- Wirtschaftlichkeit

## Wie werden Threads und Prozesse miteinander verknüpft?

Threads werden mit Prozesse über die Thread-ID Verknüpft

## Welcher Umstand sorgt dafür, dass ein Prozess blockiert wird?

Ein Prozess wird Blockiert, wenn ihm Notwendige Ressourcen entzogen werden, oder die Vorgegebene Zeitscheibe überschritten werden. Ebenfalls ist eine Blockade durch einen Internen Fehler möglich.

## Wann wird ein Programm zu einem Prozess?

Ein Programm wird zu einem Prozess sobald es sich in Ausführung befindet.

## Ein BS pflegt eine Prozesstabelle. Was ist darin enthalten?

Die Prozesstabelle hat für jeden Prozesses einen Eintrag. Dieser Eintrag ist der Prozesskontrollblock für den jeweiligen Prozess.

# Kommunikation zw. System und Anwender

## Erklären Sie, wie Polling funktioniert!

Beim Polling Interagieren Rechner und Controller miteinander. Der Controller hat dabei ein Passives Verhalten. Der Rechner liest zyklisch das BUSY-Bit, bis der Wert "Bereit" anzeigt.

## Was ist der Unterschied zwischen Polling und Interrupt-Steuerung?

Bei der Interrupt Steuerung gibt es keine Zyklische Abfrage durch den Rechner. Der Controller meldet sich im Interrupt-Fall selbstständig.

# Treiber

## Welche Aufgaben hat die geräteunabhängige Software in einem System?

Die Hauptaufgabe der Geräteunabhängigen Software ist die Einheitliche Darstellung unterschiedlicher E/A-Geräte und Treiber. 
Aber auch:
- einheitliches Interface
- Pufferung
- Fehlerbericht
- Anforderung/Freigabe von Geräten
- Geräteunabhängige Blockgröße

## Nennen Sie drei Aufgaben eines Gerätetreibers!

- Ereignisverwaltung
- antworten auf Hardwaresignale
- aktivieren des Gerätes

## Aus welchen Bestandteilen besteht ein Gerätetreiber?

Sie bestehen aus einem Geräte abhängigen Teil, einem Geräteunabhängigen Teil und einem Systemunabhängigen Teil. 

# Ein und Ausgabegeräte

## Erläutern Sie Funktionsweise und Vorteile einer beliebigen Direct Memory Access-Strategie

Single Bus Detached:

Alles Module nutzen das Selbe Bus-System. Dadurch kann das DMA als Stellvertretender Prozessor gesehen werden. Jedoch sind Zwei Buszyklen pro Übertragung Nötig. Bei zu vielen angeschlossenen Geräten entsteht die Gefahr eines Bottle-Necks. 
Der Vorteil dieses Systems ist, dass es simpel und billig ist.

## Worin unterscheiden sich blockorientierte und zeichenorientierte Kommunikation?

Blockorientierte Kommunikation speichert Informationen in Blöcken mit fester Größe an jeweils eigenen Adressen. Die Zeichenorientierte Kommunikation verarbeitet die Zeichenströme ohne auf eine Blockstruktur zu Achten. Dadurch sind diese einzelnen Ströme nicht direkt Adressierbar.

# Speichermedien

## Was unterscheidet Cache-Speicher vom Hauptspeicher?

Der Cachespeicher ist im Gegensatz zum Hauptspeicher nicht flüchtig. Er ist keine Physische Komponente eines Computers sondern lediglich in der CPU/Grafikkarte. der Cache Speicher ist Teurer und hat eine geringere Speicherkapazität, hat jedoch eine geringere Zugriffszeit.

## Was bedeuten die Abkürzungen RAM- und ROM-Speicher?

RAM: Random Access Memory

ROM: Read Only Memory

## Wie können mit einer Flash-Speicherzelle mehr als ein Bit gespeichert werden? Erläutern Sie die verwendete Technik mit wenigen Sätzen!

Im Standartfall wird die Spannung zwischen Source und Drain gemessen. Bei 0V ist das Bit eine 0 und bei 1V ist das Bit eine 1. Wenn die Spannung jetzt genauer Ausgewertet wird, kann eine höheren Spannungen noch einen Drittenwert darstellen. Bspw. Ab 2V stellen zwei Bits eine 10 dar.

## Nennen Sie drei Aufgaben der Speicherverwaltung!

- Relocation
- Protection
- Sharing

## Was unterscheidet direkte und dynamische Speicherverwaltung?

Bei der Direkten Speicherverwaltung wird der Speicher in gleich große Partitionen aufgeteilt. Jeder Prozess erhält eine Solche Partition. Wenn der Prozess nicht den gesamten Speicherplatz der Partition ausnutzt ist dieser Verloren, bis zur Freigabe des gesamten Blockes.
Bei der dynamischen Speicherverwaltung wird der Speicher in Blöcke mit Variabler Länge aufgeteilt, dadurch erhält jeder Prozess genau so viel Speicher, wie er benötigt.

## Welche Anforderungen werden an eine SV gestellt?

- Relocation
- Protection
- Sharing
- Physical Organisation
- Logical Organisation

## Erläutern Sie eine beliebige der Ihnen bekannten SV-Anforderungen!

Protection:
Da die Daten und Informationen für Prozesse nebeneinander im Speicher Abgelegt werden muss die SV dafür sorgetragen, dass die einzelnen Prozesse die Daten der anderen Prozesse weder Lesen oder verändern können, es sei den dies ist gewollt. Ebenfalls dürfen die Daten nicht versehentlich vermischt werden.

# Speicherverwaltung

## Was verstehen Sie unter Paging?

Das Paging ist ein Prinzip der Speicherverwaltung. Bei diesem Verfahren wird der Hauptspeicher in definiert große Blöcke unterteilt, diese werden Seitenrahmen genannt. Der logische Adressraum eines Prozess wird in Seiten unterteilt. Dabei ist die maximale Seitengröße ein Seitenrahmen. Die Seiten werden dann auf Seitenrahmen aufgeteilt.

## Warum werden HDD-Festplatten defragmentiert?

Durch eine Defragmentierung von HDD-Festplatten, werden einzelne Speicherblöcke, die zum selben Prozess gehören, zusammengelegt. Dadurch verkürzt sich die Zugriffszeit, da der Lesekopf einen geringeren Weg zurücklegen muss.
Außerdem wird mehr nutzbarer Speicher frei.

## Warum sollten Flash-Speichermedien nicht defragmentiert werden?

Da die Position der einzelnen Speicherblöcke eines Prozesse bei Flash-Speicher irrelevant von der Zugriffszeit ist, hat eine Defragmentierung lediglich den unnötigen verbrach von Lese und Schreibzyklen der Festplatte zur folge.

## Erläutern Sie, wie es im Hauptspeicher zur Speicherfragmentierung kommen kann!

Im Hauptspeicher kann es zu Zwei Arten der Fragmentierung kommen, Interner und Externer.

Externe Fragmentierung:

Es kommt zur Externen Fragmentierung bei Dynamische Partitionierung wenn Prozesse beendet werden, der Speicher freigegeben wird und in der entstehenden Lücke Speicher für einen neuen Prozess belegt wird, der etwas geringer ist, als der Vorgänger. Diese kleine Lücke reicht nicht aus um Speicher für einen Neuen Prozess zu bieten. Dadurch ist er Verloren.


Interne Fragmentierung:

Es kommt zur Internen Fragmentierung bei der Aufteilung des Hauptspeichers in feste Partitionen. Da Jedem Prozess eine vorgegebene Größe an Speicher zugeteilt wird, geht der Speicher einer Jeden Partition, den der Prozess nicht benötigt verloren, bis zur Freigabe durch den Prozess.

## Welches Ziel wird bei der Segmentierung von Speicher verfolgt?

Bei der Segmentierung des Speichers wird, der Speicher in unterschiedlich Große Segmente Geteilt. Jedes Segment hat dementsprechend eine andere Größe, gleichzeitig hat jedes Speichersegment eine Unterschiedliche Zugriffsberechtigung. Dies wird verwendet um unterschiedlichen teilen eines Programmes lediglich die Nötigen Berechtigungen zu erteilen und dementsprechend unrechtmäßigen Zugriff zu verhindern.

## An welcher Stelle findet interne Fragmentierung statt? Mit welchem Verfahren lässt sie sich theoretisch beheben?

Es kommt zur Internen Fragmentierung bei der Aufteilung des Hauptspeichers in feste Partitionen. Da Jedem Prozess eine vorgegebene Größe an Speicher zugeteilt wird, geht der Speicher einer Jeden Partition, den der Prozess nicht benötigt verloren, bis zur Freigabe durch den Prozess. Den kann entgegengewirkt werden, indem die Partitionen unterschiedliche Größen haben. Dadurch geht weniger Speicher verloren.

## Welche Komponenten verwaltet die Speichermedien und den Datenfluss in einem Rechnersystem?

Die Memory Management Unit (MMU)

## Was wird mit der Working-Set-Methode versucht zu verhindern?

Die Working-Set-Methode versucht Seitenfehler zu verhindern, indem der Gesamte Arbeitsablauf geladen wird.

## Welche Systeme verfügen nicht über L3-Cache?

Lediglich Multikernsysteme verfügen über ein L3-Cache. Dieser ermöglicht den Datenaustausch zwischen den Kernen.

## Welche Komponente übersetzt logische in physische Speicheradressen? Warum passiert dieser Schritt nicht auf Programm/Prozessebene?

Die Memory Management Unit übersetzt die logischen Adressen in physische. Dieser Schritt erfolgt nicht auf Programm- bzw. Prozessebene, da Anwendungsprogramme keine Kenntnis von der tatsächlichen physischen Speicherbelegung haben. Außerdem ist die Übersetzung auf Hardware Ebene effizienter und schneller.

# Datensicherung

## Warum ist RAID 0 kein „richtiges“ RAID-System?

Bei einem RAID 0 werden die Daten auf Zwei Festplatten Aufgeteilt, dies erhöht die Geschwindigkeit, jedoch führt dies nicht zu einer Datenredundanz und das System ist somit kein richtiges RAID-System.

## Was wird mit dem Prinzip der Deduplizierung erreicht?

Die Deduplizierung erhöht die Speichereffizienz von Sicherungen indem es redundante Daten innerhalb der Sicherung entfernt und mit Pointern ersetzt.

## Warum ist es ratsam, persönliche/wichtige Dateien unabhängig von einem Systemabbild zu sichern?

Bei einem Systemabbild wird das Gesamte System gesichert. Bei einer Wiederherstellung kann dementsprechend nur alles Wiederhergestellt werden. Einzelne Daten können aus dieser Sicherung nicht entnommen werden. Daher ist es sinnvoll wichtige und Persönliche Daten separat zu sicher um die Widerherstellung dieser Daten schneller zu ermöglichen.

## Was unterscheidet File-Level-Backup und Block-Level-Backup?

Bei einem File-Level-Backup werden ganze Dateien Gespeichert, beim Block-Level-Backup dagegen werden die Physischen Speicherblöcke gesichert. Das ausschließliche Speichern der geänderten Blöcke führt zu einer effizienteren Speichernutzung, jedoch ist es dadurch nicht mehr möglich einzelne Dateien wie beim File-Level-Backup wiederherzustellen.

## Was wird bei einem Wiederherstellungspunkt gesichert?

Bei einem Wiederherstellungspunkt werden System- und Konfigurationsdateien des Betriebssystem gespeichert. Persönliche Dateien werden dabei nicht gesichert.

## Was ist ein Systemprüfpunkt? Welche Informationen werden dabei nicht gesichert?

Ein Systemprüfpunkt sind durch das System automatisch angelegte Wiederherstellungspunkte. Dabei werden keine persönliche Dateien gesichert.

# Sicherheit in Betriebssystemen

## Nennen Sie drei Arten von Malware

- Trojaner
- Würmer
- Viren

## Wie verbreiten sich Computerwürmer?

Würmer verbreiten sich Aktiv über ein Netzwerk, indem sie sich kopieren und selbst ausführen. Dabei nutzen Hilfsproramme zur Verbreitung z.B. E-Mail-Programme.

## Welche Phasen durchläuft ein Virus?

- Schlafphase
	- Virus ist nicht aktiv und Wartet auf ein Ereignis. Nicht jeder Virus hat eine Schlafphase.
- Verbreitungsphase
	- Identische Klone werden in andere Programme oder Systembereiche gesetzt.
- Auslösephase
	- Virus wird Aktiviert. Bspw. durch ein Systemereignis
- Ausführungsphase
	- Schadfunktion wird ausgeführt.

## Erläutern Sie das Prinzip einer digitalen Signatur für eine Software!

Mit einer Privat Key kann aus einem Programm ein Prüfsumme Gebildet werden. Diese Prüfsumme kann anschließend durch einen Public Key bestätigt werden. Damit wird sichergegangen, dass das Programm tatsächlich vom Herausgeber stammt.

## Nach welchen Zwecken lässt sich Schadsoftware unterscheiden?

Schadsoftware lässt sich unterscheiden zwischen Zugriffs Wege und tatsächliche Schadprogramme. Während Schadprogramme tatsächlichen Schaden an Software oder Hardware zu folge haben, konzentrieren sich die Anderen darauf Daten abzugreifen.

## Worauf zielen Phishing-Angriffe ab?

Phishing-Angriffe zielen mit der Nachahmung von bekannten/vertrauenswürdigen Seiten auf auf die persönlichen Daten ab.

## Was stellt das Regelwerk in einer Firewall dar?

Das Regelwerk einer Firewall enthält alle Informationen über Nutzer, Authentifizierungsverfahren, Verbindung etc., die notwendig sind um eine Entscheidung über ein Protokollelement zu treffen.

## Wo ist die Bastion einer Firewall zu finden?

Als Bastion werden IT-Systeme mit dem App-Gateway bezeichnet.

## Was ist die Aufgabe eines Proxys?

Ein Proxy übernimmt die Kommunikation zwischen dem Anwendergerät und dem Zielsystem. Sämtliche Kommunikation wird über den jeweiligen Proxy abgehandelt. Damit können die einzelnen Pakte genau analysiert werden.

## Erläutern Sie die Arbeitsweise eines Packet-Filters!

Packet-Filter interpretieren den Inhalt eines empfangenen Pakets. Anschließend verifizieren sie den Header-Inhalt mit der definierten Regeln für die jeweilige Kommunikationsebene.

## Warum ist es sicherheitskritisch, Firewall-Regeln offen zu legen?

Wenn die Firewall-Regeln bekannt sind, können Angreifer erkennen, wie die Schutzmechanismen aufgebaut sind. Dieses Wissen erleichtert es Sicherheitslücken im Regelwerk zu identifizieren und auszunutzen.

## Nennen und erläutern Sie ein Designkonzept einer Firewall!

Getrenntes Security Management:
Es soll keine Möglichkeit geschaffen werden von außen auf das Sicherheitsmanagement zuzugreifen. Aufgrund von minimaler Software muss das Security Management von den Sicherheitsfunktionen des aktiven Firewall-Elementes getrennt realisiert werden. Die Realisierung dieser Firewall muss auf einem separaten IT-System innerhalb des Sicheren Netzwerkes erfolgen. 

## Was bedeutet „transparente Arbeitsweise“ im Bezug auf eine Firewall?

Andere Teilnehmer haben keinerlei Informationen das über eine Firewall kommuniziert wird. Das wird realisiert indem die Latenz so gering wie möglich gehalten wird. 

## Welche Unterscheidung können Sie zwischen Safety und Security treffen?

Safety schützt das System vor Softwarefehlern, Störungen und Ausfällen. Security hingegen schützt ein System Menschen und Rechnern vor Angriffen.

## Welche Kanäle lassen sich zur verdeckten Kommunikation nutzen?

Zur verdeckten Kommunikation lässt sich der Zeitkanal und der Speicherkanal nutzen.

## Warum ist verdeckte Kommunikation so schwer aufzudecken?

Verdeckte Kanäle sind so schwer zu Identifizieren, da sie die Bandbreite eines legetimen Kanals nutzen um Informationen zu übermitteln. Sie können nur identifiziert werden, wenn das Verhalten des Angreifers mit dem des Nutzers abweicht. Dafür müssen gewisse Schwellenwerte festgelegt werden.

## Nach welchem Prinzip arbeitet das Bell-Lapadula-Modell?

Jeder Nutzer wird in eine Sicherheitsstufe eingeordnet. Die Sicherheitsstufe bestimmt welche Dateien lesbar, beschreibbar oder überhaupt nicht aufrufbar sind. Dabei sind Dateien der eigenen und Niederen Sicherheitsstufe immer lesbar und beschreibbar doch Dateien einer höheren stufe nur bedingt Lesbar. 

## Welche Fragen können bei einer Authentisierung gestellt werden?

- Was hat jemand?
- Was weiß jemand? 
- Was ist jemand?

## Erläutern Sie das Prinzip der drei ihnen bekannten Sicherheitspolitiken und nennen Sie je einen Vor- und Nachteil!

Offenen Politik:
Bei der Offenen Politik sind Grundsätzlich alle Zugriffe erlaubt. Es gibt keine Beschränkungen welche Seiten besucht beziehungsweise nicht besucht werden dürfen.
- Vorteil: Wenig bis keinen Aufwand
- Nachteil: Hohes Risiko

Eingeschränkte Politik:
Bei der Eingeschränkten Sicherheitspolitik wird der Zugriff schädliche und unerwünschte Seiten gesperrt. Alle nicht explizit Gesperrte Seiten sind Aufrufbar.
- Vorteil: Regeln können universell auf Alle Nutzer angewendet werden.
- Nachteil: hoher verwaltungsaufwand

Exklusive Politik:
Bei der Exklusiven Politik werden grundsätzlich alle Seiten gesperrt. Es sind lediglich für einen Nutzer freigegebene Seiten Aufrufbar.
- Vorteil: Hohe Sicherheit
- Nachteil: Jeder Nutzer benötigt individuelle Anpassungen

## Nennen Sie vier Aufgaben einer Firewall!

- Alarmierung
- Rechteverwaltung
- Zugangskontrolle
- Entkopplung von Diensten


# Linux-Systeme

## Warum sind Echtzeit-Linux-Systeme nicht so performant, wie „echte“ Realtime-Betriebssysteme?

Echtzeit-Linux-Systeme hat einen großen Overhead, wodurch es nicht nicht auf den echtzeitbetrieb ausgelegt sind, anders als die real time Betriebssysteme.

## Distributionen liefern Werkzeuge und Applikationen. Was ist der Unterschied? Nennen Sie je ein Beispiel!

Werkzeuge sind für die Konfiguration und Wartung des Betriebssystems zuständig. Sie werden hauptsächlich für das System und Administratoren entwickelt.
Beispiel: Dateimanager

Applikationen hingegen sind Programme die der Endanwender aktiv Nutz. 
Beispiel: Paint

## Was unterscheidet UNIX-artige und UNIX-oide Betriebssysteme?

UNIX-artige Systeme enthalten Originalcode auf UNIX. UNIX-oide Systeme hingegen haben keine Verbindung zum echten UNIX. Sie wurden unabhängig entwickelt, ahmen aber die Funktionen von UNIX nach.

## Erläutern Sie das Prinzip “Everything is a file“

Everything is a file ist eine definierte Eigenschaft von UNIX-Systemen. Nach diesem Prinzip sind Ein- / Ausgabe-Ressourcen aber auch Interprozess- und Netzwerkverbindung als Byteströme durch Dateisysteme verfügbar.

## Wie wirkt sich die modulare monolithische Struktur des Linux-Kernels aus?

Die Monolithische Struktur ist nur ein kleiner Teil des Kernels der beim Systemstart geladen wird, dadurch hat der Kernel nur einen Geringen Speicher während der Laufzeit, da nachträglich nur wirklich nötige Treiber geladen werden.

# Dateisysteme

## Lineare Dateisysteme finden in modernen BS keine Verwendung mehr. Warum?

Da alle Dateien in in einem Verzeichnis abgelegt werden, ist es bei der immer größer werdenden Anzahl von Dateien wurde es immer schwerer mir diesem System zu Arbeiten unter anderem, weil die Dateien nur sequentiell lesbar sind.

## Erläutern Sie die Funktionsweise des Magic Words

Magic Word ist eine Option um Dateien zu Unterscheiden. Durch eine bestimmte Bytesequenz am Beginn der Datei wird der Dateityp Identifiziert.

## Kann eine Datei modifiziert werden, ohne den Inhalt zu ändern?

Ja, bspw. kann der Dateiname unabhängig vom Inhalt geändert werden.

## Was ist die Hauptaufgabe eines Dateisystems? Zwischen welchen Schichten vermittelt ein Dateisystem?

Die Hauptaufgabe ist die Verwirklichung sinnvoller Abstraktionen zum Strukturieren der abzulegenden Information und das Management des Freispeichers. Ein Dateisystem vermittelt zwischen der logischen Schicht und der physikalischen Schicht.

## Für welche Speichermedien findet das FAT-Dateisystem hauptsächlich Verwendung?

Wechselmedien

## Welches Dateisystem muss genutzt werden, um ISO-Dateien > 4GB auf einem USB- Stick ablegen zu können?

FAT 32

# Netzwerkbetriebssysteme

## Welche Schwerpunkte werden bei NOS vorrangig gesetzt?

Spezialisierte Betriebssysteme:
- Datendurchsatz
- Verfügbarkeit
- Effizient

Server-Betriebssysteme:
- Datendurchsatz
- Ressourcenverwaltung
- Sicherheitsfunktionen
- Multitasking

## Warum sind automatische Updates bei Server-Systemen riskant?

Bei Automatischen Updates werden möglicherweise vor beginn keine Backups angelegt, dadurch kann es bei einem Fehlerhaftem Update zum Datenverlust kommen. 
Ebenfalls ist es möglich, dass vor kurzem erschienen Updates Fehler enthalten, die noch nicht entdeckt wurden. Diese können dem System schaden.

## Was unterscheidet dedizierte und nicht dedizierte Server?

Dedizierte Server haben nur einen Anwendungszweck. Auf nicht dedizierten Server hingegen laufen mehrere Anwendungen. 

## Erläutern Sie das Prinzip „Run-to-Completion“!

Das Run-to-Completion Prinzip besagt, dass eingehende packte mittels Interrupts so schnell wie möglich weitergeleitet werden bis Sie ihr angegebenes Ziel erreicht haben.

## Beschreiben Sie das Prinzip des NUMA-Speichers in eigenen Worten!

Beim Prinzip des NUMA-Speichers Wird der RAM in einzelne Knoten geteilt. Dadurch werden mehrere Speicherbereiche für mehrere Prozessoren geschaffen. Das minimiert die Latenz von Speicherzugriffen.

## Nennen Sie zwei Anwendungsbereiche für Netzwerkbetriebssysteme!

- Gemeinsame Nutzung von Software
- Virtualisierung von Systemen

# Virtualisierung

## Was unterscheidet den Bare-Metal-HyperV und Hosted HyperV

Der Bare-Metal-HyperV setzt direkt auf der Hardware und dadurch wesentlich Performater. Es wird eher in der Industrie genutzt. der Hosted HyperV setzt auf einem Betriebssystem auf ist dadurch Kostengünstiger. Diese System wird hauptsächlich im Privaten Sektor verwendet.

## Nennen Sie vier Zwecke, wofür die Verwendung einer virtuellen Maschine sinnvoll ist!

- Test von Programmen
- Skalierbarkeit / Wenn mehrere Systeme angeboten werden sollen aber nur ein server zur Verfügung steht
- Erhöhte Verfügbarkeit von Systemen durch Redundanz
- Effektivere Nutzung von Hardware

## Was unterscheidet Simulation und Emulation?

Simulation:
Ein System wird so gut wie nötig nachgebildet. Dem Anwender ist bewusst, das es sich nicht um die Wirklichkeit handelt, da es unwichtige Faktoren, wie bspw. die Zeit verändert.

Emulation:
Mittels Software wird Hardware so detailgetreu wie möglich nachgebildet. Es werden Echtweltdaten verwendet um den Eindruck zu erwecken, dass es die Wirklichkeit ist.

## Welcher Reale Faktor wird bei virtuellen Systemen in der Regel vernachlässigt?

Zeit und andere Physische Faktoren wie der Stromverbrauch.

## Was unterscheidet Container-Systeme von Virtuellen Maschinen?

Bei Virtuellen Maschinen wird das gesamte Betriebssystem Virtualisiert bei einem Container-Systeme gibt es nur ein Bereich für eine Anwendung. Ebenfalls ist die Lebensdauer kürzer als bei einer Virtuellen Maschine