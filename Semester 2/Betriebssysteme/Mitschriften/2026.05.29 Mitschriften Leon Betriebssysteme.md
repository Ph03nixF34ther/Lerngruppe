-- Info aus Präsentation--

## Backup-Zeiträume

### Recovery Time Objective

- Beschreibt den Zeitraum zwischen einem Ereignis -- Info aus Präsentation--

### Die Badewannenkurve

- Beschreibt das Ausfallverhalten von technischen Geräten gemessen an der Lebensdauer
- Ausfallrisiko zu Beginn und mit zunehmendem Alter der Geräte 
- "Dead On Arrival" bei Ausfall bei Inbetriebnahme

-- Info aus Präsentation--

# Backup-Arten

## File Level Backup

- Sicherung von Vollständigen Dateien auf einem Datenträger
- langsames Verfahren, da große Datenmengen bewegt werden
	- Handling von einzelnen großen Dateien ist zeitaufwendig
- Wiederherstellung der Dateien einfacher als bei Block Level Backups 
	- Dateien können direkt aufgerufen und darauf zugegriffen werden
- Wiederherstellen einzelner Dateien möglich

## Block Level Backup

- Sicherung von geänderten Datenblöcken einer Datei 
- weniger Speicherplatz notwendig
- schnelles Verfahren, da nur bestimmte Datenblöcke bewegt werden 
	- Abstrakte Datenebene erlaubt schnellere Bearbeitung
- Wiederherstellung der Dateien komplexer als bei File Level Backups
	- Dateien müssen erst einzeln bereitgestellt werden
- Wiederherstellung einzelner Dateien nur mit Aufwand möglich

## Duplizierung 

- Verfahren zum Erhöhen der Speichereffizienz einer Sicherung
- Entfernen von Redundanz innerhalb eines Backups
- Identifikation von redundanten Daten auf Blockebene 
- Einsetzen eines Pointers auf erste Instanz der Daten
- Findet Anwendung bei Datensicherungen und Datentransfer
	- Deduplikation von E-Mail-Anhängen bspw.

## Backup-Medien

### Bandlaufwerke

- langsame Geschwindigkeit
- preiswerter als Festplatten

### Festplatten

- hohe Arbeitsgeschwindigkeit
- teuer bei großen Datenmengen

# Raid-Systeme

## Ursprung

- Geschwindigkeiten von Festplattensystemen lassen sich nicht unendlich verbessern
- Physikalische und materielle Grenzen begrenzen Systemleistung bzw. Schreib- und Lesegeschwindigkeit
- Möglichkeit zur Optimierung ist die Verwendung von mehreren -- Info aus Präsentation--
- RAID-Systeme bestehen aus mehreren Festplatten
	- Benutzer und Prozesse nehmen diese als eine große Festplatte wahr.
- Daten werden auf die Festplatten im -- Info aus Präsentation--

## RAID 0

- Spring - Beschleunigung ohne Redundanz
- Kein "echtes" RAID, weil keinen Redundanz vorliegt
- Effekt ist Stagnierung der Datentrans --Info aus Präsentation-- 

## RAID 1

- Spiegelung der Daten
- Mindestens zwei Festplatten gleicher Größe enthalten exakt die gleichen Daten
	- Bei unterschiedlich großen Festplatten reduziert sich die RAID-Kapazität um die Differenz
- Jede Datenänderung wird auf allen beteiligten Platten geschrieben
- Ausfall einer Platte führt nicht zu Datenverlust
- RAID 1 ist kein Ersatz für einen Datensicherung
	- Fehlerhafte Dateioperationen der Virenbefall findet auf allen Platten statt!
- Lesegeschwindigkeit -- Info aus Präsentation--

## RAID 5 

- Block-Level Stripping mit verteilten Paritäts-Infos
- besteht aus mindestens drei Festplatten
- Bietet erhöhten Datendurchsatz und höhere Datensicherheit
- Nutzdaten werden wie bei RAID 0 auf alle Festplatten verteilt
- -- Info aus Präsentation--

## RAID 6

- Block-LS mit doppelt verteilten Paritäts-Infos
- Funktioniert ähnlich wie RAID 5
- verkraftet aber den gleichzeitigen Ausfall von bis zu zwei Festplatten
- Im Gegensatz zu RAID 5 gibt es mehrere mögliche Implementierungsformen, die sich insbesondere in der Schreibleistung und dem Rechenaufwand unterscheiden
	- Bessere Schreibleistung setzt erhöhten rechenaufwand voraus
- Im Gegensatz zu RAID 5 ist die Verfügbarkeit höher, aber der Datendurchsatz insgesamt niedriger
- (RAID 5 und RAID 6 haben RAID 3 weitestgehend ersetz)

# Systemwiederherstellung

## Wiederherstellungspunkte

- Anlegen einer Schattenkopie innerhalb des Systems
- betrifft System- und Konfigurationsdaten des Betriebssystems
	- Persönliche Daten werden nicht gespeichert
- Manuelles Anlegen sinnvoll, bevor Software installiert wird, oder System Anpassung vorgenommen werden
- Windows legt automatisch Wiederherstellungspunkte an, bevor Updates oder bestimmte Treiber installiert werden
	- Automatisch angelegte Punkte werden als Systemprüfpunkte bezeichnet.

## Systemabbild

- Systemabbilder enthalten den gesamten Inhalt eines oder mehrere Laufwerke 
- können verwendet werden, um Laufwerke vollständig in den gesicherten Zustand zurückzusetzen 
- Einzelne Dateien innerhalb eines System Abbilds können dabei nicht ausgewählt werden
	- "Alles oder Nichts"-Prinzip
- Standartfunktion bei Windows seit Windows 7
- Manuelle Sicherung der persönlichen Dateien ratsam, um im Ernstfall komplette Wiederherstellungen zu vermeiden

# Speicherverwaltung

## Begriffsklärung

### Speicherarten

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
	\text{Zugrifsszeit} & \text{Art} & -- Info aus Präsentation--
	\end{array}
$$
### Die Speicherverwaltung 

- ist der Teil eines BS, der die Speicherhierarchie verwaltet
- verfolgt, welche Speicherbereiche gerade benutzt werden
- teilt Prozessen Speicher zu und gibt diesen wieder frei
- verwaltet die Auslagerung von Speicher auf Festplatten
- ist physische -- Info aus Präsentation--

### Logische und Physikalische Dressen

- Verwendung von Logischen Adressen(Virtuelle Adressen) in Prozessen
- Adressierung des Hauptspeichers mit dem physikalischen Adressen
- Umwandlung dieser Adressen in der Memory Management Unit (MMU)
- Identische Adressierung bei absoluter Adressierung
- Bei dynamischer Adressierung zur Laufzeit wird MMU benötigt

### Speicherverwaltungssysteme

- Direkte Speicherverwaltung 
	- Einprogrammbetrieb oder Mehrprogrammbetrieb
	- Vollständiges Laden, Verarbeiten und Entladen von Programmen
- Dynamische Speicherverwaltung
	- Verschieben von Prozessen zwischen Hauptseicher und Platte
	- unter Verwendung von Swapping und Paging

### Swapping

- Auslagerung von inaktiven/blockierten Prozessen
- Reaktion auf Speichermangel im Hauptspeicher 
- Verwendung von Vordefinierten Swapping-Bereichen
- in modernen Systemen in abgewandelter Form aktiv
	- Working-Set-Methode

### Paging

- Prinzip zur Speicherverwaltung
- Aufteilung des Hauptspeicher in definierte große Blöcke in Seitenrahmen
- Unterteilung des logischen Adressraum eines Prozesses in Seiten
- Seiten-bezogene Adressierung und Hauptspeicher-Zuteilung
	- Seitengröße = Seitenrahmen

### ROM

- Read Only Memory
- dauerhafter Speicher ohne Schreibzugriff
- mechanische austauschbar

### RAM

- Random Access Memory
- Arbeitsspeicher/Hauptspeicher
- Wahlfreier Zugriff durch Verwendung der direkten Speicheradressen

### Cache-Speicher

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
	- -- Info aus Präsentation--

### Hauptspeicher

- temporärer und flüchtiger Speicher 
- Physischer Bestandteil eines Computers
- physischer Bestandteil der CPU/Grafikkarte
- Zwischenspeicherung von häufig verwendeten Daten zwischen CPU und Festplatten
- beschleunigt Zugriffszeit und Leistung durch bessere Verfügbarkeit
- Umgangssprachlich Arbeitsspeicher

### Hintergrundspeicher

- nicht flüchtiger Langzeitspeicher über Laufzeit des Systems hinweg
- Realisierung durch Festplatten
- Speicherung von Programmen und Daten
	- Liegen bereit, um in den Hauptspeicher geladen zu werden
## Speichermedien

- Wechseldatenträger
	- Ext. festplatten
	- USB-Stick
	- DVD/CD-ROM/Blu-Ray
- -- Info aus Präsentation--

### SSD-Festplatten

- geräuschlos
- schnell
- hohe Datenrate
- keine mechanischen Teile
- Verwendung von Flash-Speicherzellen
- Speicherung von mehreren Zuständen innerhalb einer Zelle
- nicht zur Datenarchivierung geeignet
	- -- Info aus Präsentation--

### HDD-Festplatten

- preiswert
- große Speichermengen
- mechanische Teile
- lauter und langsamer als SSD-Festplatten
- magnetischer Speicher auf Metallscheibe
- Lesen der Festplatte mit einem Schreib-/Lesekopf
- Verwendung mehrerer Scheiben zur Maximierung des Speichers
- Der Abstand zwischen Lesekopf und datenscheiben ist kleiner als ein Staubkorn