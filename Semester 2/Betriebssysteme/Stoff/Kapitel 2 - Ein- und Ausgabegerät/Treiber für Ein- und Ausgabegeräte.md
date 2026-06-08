# Gerätetreiber

- Modul des Systemkerns, das ein oder mehrere Geräte desselben Typs kontrolliert
- Idealerweise Implementierung einer einheitlichen Schnittstelle für sämtliche E/A-Funktionen
- Bspw.: "write" zum Schreiben von Informationen in ein Gerät

# Aufgaben:

- antwortet auf Hardwaresignale
- wandelt E/A-Anforderungen im gerätespezifische Befehle um
- definiert das Gerät gegenüber dem Betriebssystem
- definiert sich selbst gegenüber dem Betriebssystem 
- initialisiert den Controller und das Gerät bei Systemstart
- bearbeitet Schreib- und Lesebefehle
- puffert Daten bei der Ein- und Ausgabe
- Ereignisverwaltung
- aktiviert das Gerät
- meldet/leitet weiter Geräte- und Controllerbefehle
- Funktionskontrolle
- Übersetzt befehle für Controller 
- Stellt eine Schnittstelle für BS und Hardware zur Verfügung

# Abhängig vom Betriebssystem ist...

- ob alle Treiber bei der Systemkonfiguration eingebunden werden müssen 
	- Neu Kompilieren/Übersetzten des BS notwendig
- ob sich Treiber später hinzufügen lassen, aber bei Systemstart bekannt sein müssen
- ob Treiber während des Betriebs installiert und gestarrte/ gestoppt werden können

# Sonderfälle

- Neue Geräte können hinzukommen
	- Identifikation 
	- Alle Anrufer informieren
- Entfernen eines Geräts
	- Aktuelle I/O-Operation beenden
	- Wartende Anfragen entfernen
	- Alle Aufrufer informieren

# Systemkontext

$$
	\begin{array}{c|c|c}
	\text{User Mode} & \text{write} &  \\
	\hline \\
	\text{Kernel Mode} & \text{sys\_write} & \text{systemunbahängig} \\ \\
	\hline
	 & \text{Zugriffsrechte checken} &  \\
	 & \text{Pufferung verwalten} &  \\
	 &  & \text{geräteunabhängige Software} \\
	 &  \text{Treiber-Funktion} & \\
	 &  \text{aufrufen} &  \\
	 \hline \\
	 \text{System}  & \text{einheitliche Geräteschnittstelle} \\
	 \hline \\
	 \text{Geräte}  & \text{dev\_write} & \text{gerätespezifisch}  \\
	\end{array}
$$

dev_write: Bildschirm, Platte, Drucker

# Ein-/Ausgabe-Anforderungspakete (IORP)

- Enthält alle vom Treiber für die E/A-Operation benötigten Informationen
	- Geräteadresse, Anzahl an Bytes etc.
- Verwaltung der Pakete in gerätespezifischen Listen
	- Verwendung von optimierten Verwaltungsalgorithmen
# Geräteunabhängige Software

- Unabhängig vom E/A-Gerätdurchführbare Aufgaben:
	- einheitliches Interface
	- Pufferung
	- Fehlerbericht
	- Anforderung/Freigabe von Geräten
	- Geräteabhängige Blockgröße

Hauptaufgabe:
- Einheitliche Darstellung unterschiedlicher E/A-Geräte und Treiber

weil
- Leichtere Einbindung von Treibern an einheitlichen Schnittstellen