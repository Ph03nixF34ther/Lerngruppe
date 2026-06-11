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
- 
- Prozessorzeit
- Reihenfolge
- Verdrängung
- Mehrere Ziele müssen berücksichtigt werden:
	- Fairness
	- Ressourcennutzung
	- Reaktionszeit
	- Auftrags-Wartezeit
	- Programm-Durchsatz

# Scheduling Algorithmen

## nicht-verdrängende Verfahren für Warteschlangenverwaltung

### First In First Out:

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

### Short Job First:

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

## verdrängende Verfahren für Timesharing-Betrieb

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

## Kooperativen Verfahren (auch verdrängendes Verfahren)

- Prozess gibt Ressource selbständig zurück 
- Keine alternativer Eingriff des Scheduler 
- Fehlerhafte Prozesse können Blockaden auslösen
## gemischte Verfahren mit dynamischen Prioritäten

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

## Prioritäten

- Dient zur Erfüllung von Echtzeitergebnissen 
- erlaubt Aufteilung von Prozesstypen
- Dynamische und statische Prioritäten

- Dynamische Prioritäten:
	- werden vom BS mehrmals neu berechnet
	- Einbeziehung von Prozessmerkmalen und Systemzustandsmerkmalen
- Statische Prioritäten:
	- Zuordnung durch Administrator oder Anwender
	- sind unveränderlich

# Mehrstufige Feedback-Listen

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