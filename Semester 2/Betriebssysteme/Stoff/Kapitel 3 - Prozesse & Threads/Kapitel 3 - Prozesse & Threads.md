# Begriffsklärung

- Task: Synonym für Prozess, aber auch Thread; Aufgabe die ein Betriebssystem hat
- Prozess: ist ein Programm in der Ausführung
- Programm: statische Beschreibung eines sequentiellen Algorithmus
- Thread: ein seq. Abarbeitungsablauf innerhalb eines Prozesses

## Unterscheidung der Betriebsmodi eines Betriebssystem

### Anwender-Modus:

- CPU-Kontrolle liegt beim aktuellen Programm
- Einfacher Befehlssatz
- Anwendungsprogramme meist im User-Mode
- User-Mode nutzt nur API-Funktionen um aufs System zuzugreifen 

### Kernel-Modus

- CPU wird in privilegierten Modus versetzt
- Erweiterter Befehlssatz
- Aufhebung hardwareseitiger Speicherzugriffsbeschränkungen
- BS arbeitet im Kernel-Modus
- BS nutzt System direkt
- Umschaltung durch die CPU zwischen den Modi
- Hacker und Schadsoftware setzten immer beim Kernel-Modus an


## Parallelität

- "Prozesse spiegeln den Eindruck wider, dass Computer mehrere Aufgaben gleichzeitig erledigen können."
	- Lesen von Festplatte
	- Dateiinhalte drucken
	- Programm ausführen
- Realität: Bei Einzelprozessorsystemen nur simuliert Parallelität
- Zu jedem Zeitpunkt nur ein Programm auf der CPU
- Jeder Prozess erhält nur begrenzte CPU-Zeit
- Echte Parallelität nur durch mehrere Prozessoren
- CPU-Zeitschalt: Quantum

## Prozessumschaltung

- Problem: Mehrere Prozesse sollen ausgeführt werden
- Frage: Welcher Prozess soll gestartet werden?
- Scheduler: "entscheidet" welcher Prozess ausgeführt bzw. fortgesetzt wird

### Prozessumschaltung durch Scheduling

#### Früher:

- Stapelbetrieb
- Prozess zu Ende -> Nächster Prozess starten
$$
	\begin{matrix}
	\text{Upper Next} \\
	\downarrow \\
	\text{Next} \\
	\downarrow \\
	\text{Current} \\
	\end{matrix}
$$
#### Heute:

- Unterbrechung durch Timer
- Scheduler entscheidet über Unterbrechung des laufenden Prozesses
- Fortsetzung eines laufenden Prozesses zu späterem Zeitpunkt
- Verteilung der Prozesse anhand unterschiedlicher Parameter
-> Präventives Scheduling 

# Inhalt

- [[Prozessmerkmale]]
- [[Das Prozessmodell]]
- [[Bestandteile eines Prozesses]]
- [[Implementierung von Prozessen]]
- [[Prozessoperationen]]
- [[Scheduling]]
- [[Interprozesskommunikation]]
- 
- 