# Katalog:

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



## Welche drei Nutzungskonzepte werden bei der Abstraktion vom System Verfolgt?

- Nutzbar machen des Systems
- Verstecken technischer Details
- Automatisierung von Vorgängen

## Was ist der Zweck einer API? 


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