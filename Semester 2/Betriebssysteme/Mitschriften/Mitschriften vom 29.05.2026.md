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