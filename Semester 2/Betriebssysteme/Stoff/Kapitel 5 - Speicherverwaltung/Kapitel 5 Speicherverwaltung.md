# Begriffsklärung

## Speicherarten

- CPU-integrierter Cache
	- ++ Teuer, ++ Schnell und sehr klein
- externer Cache
	- + Teuer, + Schnell und klein
- Hauptspeicher
	- - Teuer, - Schnell und groß
- Festplatten
	- -- Teuer, -- Schnell und sehr groß

$$
	\begin{array}{c|c|c}
	\text{Zugrifsszeit} & \text{Art} & \text{Speicherkapazität} \\
	\hline
	<\text{1ns} & \text{CPU-Register} & \text{Byte} \\
	\text{2ns} & \text{CPU-Cache} & \text{ca. 20 MB} \\
	\text{50 ns} & \text{Hauptspeicher (RAM)} & \text{8/16/64 ... Gigabyte} \\
	\text{10 ms} & \text{Massenspeicher} & \text{x TB / GB} \\
	\text{100 s} & \text{Wechseldatenträger} & \text{4,7 / 64 / 128 GB}
	\end{array}
$$

## Die Speicherverwaltung 

- ist der Teil eines BS, der die Speicherhierarchie verwaltet
- verfolgt, welche Speicherbereiche gerade benutzt werden
- teilt Prozessen Speicher zu und gibt diesen wieder frei
- verwaltet die Auslagerung von Speicher auf Festplatten
- ist physische und logischer Bestandteil des Prozessors

## Logische und Physikalische Dressen

- Verwendung von Logischen Adressen(Virtuelle Adressen) in Prozessen
- Adressierung des Hauptspeichers mit dem physikalischen Adressen
- Umwandlung dieser Adressen in der Memory Management Unit (MMU)
- Identische Adressierung bei absoluter Adressierung
- Bei dynamischer Adressierung zur Laufzeit wird MMU benötigt

## Speicherverwaltungssysteme

- Direkte Speicherverwaltung 
	- Einprogrammbetrieb oder Mehrprogrammbetrieb
	- Vollständiges Laden, Verarbeiten und Entladen von Programmen
- Dynamische Speicherverwaltung
	- Verschieben von Prozessen zwischen Hauptspeicher und Platte
	- unter Verwendung von Swapping und Paging

## Swapping

- Auslagerung von inaktiven/blockierten Prozessen
- Reaktion auf Speichermangel im Hauptspeicher 
- Verwendung von Vordefinierten Swapping-Bereichen
- in modernen Systemen in abgewandelter Form aktiv
	- Working-Set-Methode

## Paging

- Prinzip zur Speicherverwaltung
- Aufteilung des Hauptspeicher in definierte große Blöcke in Seitenrahmen
- Unterteilung des logischen Adressraum eines Prozesses in Seiten
- Seiten-bezogene Adressierung und Hauptspeicher-Zuteilung
	- Seitengröße = Seitenrahmen

## ROM

- Read Only Memory
- dauerhafter Speicher ohne Schreibzugriff
- mechanische austauschbar

## RAM

- Random Access Memory
- Arbeitsspeicher/Hauptspeicher
- Wahlfreier Zugriff durch Verwendung der direkten Speicheradressen

## Cache-Speicher

- temporärer Speicher
- Physischer Bestandteil der CPU/Grafikarte oder von Anwendungen
- Zwischenspeicherzugriff von häufig verwendeten Daten zwischen CPU und Festplatten
- beschleunigt Zugriffszeit und Leistung durch bessere Verfügbarkeit
- Zwischenspeicherung von häufig genutzten Daten
- Verwendung von Cache in
	- Hardware:
		- Prozessoren
		- Grafikkarten
		- Netzwerke
	- Software:
		- Browsern 
		- Datenbanken
		- Anwendungen
- L1-Cache
	- 16-64kB Speicher für Befehle und Daten Häufig genutzte Befehle und Daten 
	- Spart wiederkehrende RAM-Zugriffe
- L2-Cache
	- 4MB-20MB Zwischenspeicher für RAM-Daten
	- Speicher für Aktive Prozesse
- L3-Cache
	- nur bei Multicoresystemen
	- sichert Datenkonsistenz zw. Kernen Cache-Koheränz-Protokoll
	- Datenaustausch zwischen Kernen

## Hauptspeicher

- temporärer und flüchtiger Speicher 
- Physischer Bestandteil eines Computers
- physischer Bestandteil der CPU/Grafikkarte
- Zwischenspeicherung von häufig verwendeten Daten zwischen CPU und Festplatten
- beschleunigt Zugriffszeit und Leistung durch bessere Verfügbarkeit
- Umgangssprachlich Arbeitsspeicher

## Hintergrundspeicher

- nicht flüchtiger Langzeitspeicher über Laufzeit des Systems hinweg
- Realisierung durch Festplatten
- Speicherung von Programmen und Daten
	- Liegen bereit, um in den Hauptspeicher geladen zu werden

# Inhalt

- [[Anforderungen an die Speicherverwaltung]]
- [[Speichermedien]]
- [[Speicherverwaltungsstrategien]]
- [[Paging]]
- [[Working-Set-Methode]]
- [[Segmentierung]]
- [[Fragmentierung]]
- [[Defragmentierung]]
