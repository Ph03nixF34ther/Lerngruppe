# Anforderung an ein E/A-System

- Hohe Geschwindigkeit
- Zuverlässigkeit
- Kompatibilität
- Benutzerfreundlichkeit
- Fehlertoleranz

# Theoretische Unterscheidung

- Blockorientiert: 
	- speichern Informationen in Blöcken mit fester Größe am jeweils eigenen Adressen
	- Blöcke können unabhängig voneinander gelesen und geschrieben werden
- Zeichenorientiert: 
	- Verarbeitet Zeichenströme ohne auf Blockstrukturen zu achten. 
	- Sie sind nicht adressierbar

# Zusammensetzung E/A-Geräte

- bestehen aus Controller (Elektronik) und gesteuerter Mechanik

## Controller:
- verwaltet und steuert Geräte
- Stellt einfache Schnittstelle für Betriebssystem dar
- Besitzt Register und Datenpuffer für Kommunikation

## Integration:
- Idealisierte, grundsätzliche Struktur einer IO-Verwaltung
- Kommunikation zwischen Benachbarten Schichten


$$ 	
\begin{array}{c|c}
\text{User Mode} & \text{Benutzerprozess} \\ \\
\hline
\text{Kernel Mode} & \text{kernel-Verteiler} \\
 & \text{Auftragsverwaltung} \\
 & \text{Pufferung} \\
 \text{System} & \text{Treiber} \\
 \hline 
 \text{Gerät} & \text{Controller} \\
  & \text{Gerät} 
\end{array}
$$

# E/A-Techniken

## Programmierte E/A Systeme

Prozesse warten im Block-Zustand,
bis E/A-Operation abgeschlossen ist.

## Unterbrechungsgesteuerte E/A

Prozess ruft E/A-Befehl auf, und setzt Abarbeitung dann fort. E/A-Interrupt folgt.

## Direct Memory Access

DMA-Modul steuert Datenaustausch zwischen RAM und E/A-Modul.
Unterbrechung der CPU bei Übertragung des Blockes

- CPU delegiert Übertragungsaufgaben an eine einfache CPU
- CPU kann parallel für andere Aufgaben genutzt werden 
- Verwendung eines DMA-Request 
	- Adressen Anzahl an Bytes, Reservierung des Hauptspeichers

### Single Bus Detached

- Alle Module nutzen Bus-System gemeinsam
- DMA-Modul kann als stellvtr. Prozessor gesehen werden
- Prinzip ist simpel und billig aber nicht effizient
	- Gefahr eines Flaschenhalses
	- Zwei Buszyklen pro Übertragung benötigt

### Single Bus Integrated

- E/A- Geräte an DMA- Controllern
- Einsparung von Bus-Zyklen gegenüber dem "Single Bus Detached"- Prinzip

### Separated DMA Bus

- Alle E/A-Geräte an einem DMA-Controllern
- Räumliche Trennung der Bus-Netzte
- Einfach skalierbare Architektur
- Prozessor hat theoretisch keine E/A-Aufgaben

# Rolle des Betriebssystem

- Einheitliche Schnittstellen
- Geräteverwaltung
- Zugriffschutz
- Ressourcensteuerung