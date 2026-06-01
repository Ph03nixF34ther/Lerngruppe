# Speicherverwaltung

## Speichermedien

### HDD-Festplatten

- Nummeriert Spuren auf mehreren Platten
	- 0 (außen) ... N (innen)
- Zylinder -> Spuren -> Sektoren -> 512 Byte

### Logical Block Adressierung

- Nummerierung aller Blöcke beginnend bei 0
	- Linearer Adressraum entsteht
- Lokalisierung eines Datenblocks über log. Blockadresse
- Verwendung von 48 Bit und 28 Bit Adressen
- Größte mögliche Adresse 128 PByte
- Abstraktion der Festplattenstruktur
	- Physische Struktur der Festplatte für BS nicht bekannt
- Ausblenden von defekten Blöcken
	- --Infos aus Präsentation--

# Anforderungen an die Speicherverwaltung

## Relocation

- Gemeinsame Nutzung des Hauptspeichers durch mehrere Programme
- Auslagerung von Prozessen/Programmen
- Prozessorhardware und BS-Software müssen gespeicherte Informationen wiederfinden können
- Logische Adressen müssen --Infos aus Präsentation--

## Protection

- Prozessinformationen und -daten liegen im Speicher nebeneinander ab
- Daten von einzelnen Prozessen dürfen nicht miteinander vermischt werden
- Fremde Prozesse sollen nicht in der Lage sein, Informationen von anderen Prozessen zu lesen oder zu verändern!
	- (Es sei denn, dies ist gewollt!)

## Logical Origanisation 

- Realisierung von Speicherzellen als linearer Adressraum (1-dimensional)
- Realisierung von Programmen als modulare Software mit mehreren Bestandteilen
- Die SV muss die modularen Softwarebestandteil in die lineare Speicherstruktur integrieren können
- Die modulare --Infos aus Präsentation--

## Sharing

 - Prozesse können gemeinsam genutzt Speicherbereiche verwenden.
- Wird ein Programm zweimal ausgeführt, muss zweimal auf die gleiche Stelle im Speicher zugegriffen werden.
- Die SV muss reibungslosen Zugriff auf geteilten Speicher ermöglichen!

## Physical Origanisation

- Verwendung von Hauptspeicher/Arbeitsspeicher und Hintergrundspeicher in einem System
- Transport und Ent-/ladung von Daten notwendig
- Die SV muss in der Lage sein, Date vom Hauptspeicher in den Langzeitspeicher und zurück transportieren zu können!

# Speicherverwaltungsstrategien

## Freispeicherverwaltung

- Verwaltung in Form einer Kette von freien Seicherblöcken
- Blöcke haben unterschiedliche Länge und verschiede Informationen

### First-Fit-Verfahren

- Durchlaufen der Liste
- Wahl des erstbesten, ausreichenden Speicherbereich
- Teilung der Speicherbereiche

### Alternative Verfahren

- --Infos aus Präsentation--

## Direkte Speicherverwaltung

- Belegung fester Speicherbereiche 
- selbständige Organisation des Speicherplatz durch Programme
- nur in Systemen mit Einzelprozessbetrieb
- Haltung mehrerer vollständiger Prozesse im Hauptspeicher
 
### Aufteilung des Hauptspeichers in feste Partitionen

- gleiche Größe
- unterschiedliche Größe
- --Infos aus Präsentation--

### Dynamische Partition

- Einteilung des Speichers in Partitionen
	- variable Länge und variable Anzahl
- exakt passende Speicherbereiche für jeden Prozess
- Ein und Auslagerung führt zu externer Fragmentierung
	- Defragmentierung erforderlich

### Fragmentierung

#### Externe Fragmentierung 

Dynamische Partitionierung 
- Einteilung des Speichers in Partitionen
	- variabler Länge und variable Anzahl
- exakte passende Speicherbereiche für jeden Prozess
- Ein- und Auslagerung führt zu externer Fragmentierung
- Problem:
	- Stetige

--Infos aus Präsentation--

#### Interne Fragmentierung

--Infos aus Präsentation--

### Defragmentierung

- dient zur Rückgewinnung und Reorganisation von Speicherplatz
- Verschub von belegten Speicherbereichen zur Gewinnung von großen freien Bereichen
- Welcher Speicher kann defragmentiert werden?
	- Hintergrundspeicher auf HDD-Festplatten
	- Hauptspeicher

#### Speicherkompaktierung

- --Infos aus Präsentation--

#### Defragmentierung von HDD-Festplatten

--Infos aus Präsentation--

#### Defragmentierung von SSD-Festplatten

- Blockweise Datenstrukture ohne 

 
# Paging

## Paging

- Prinzip zur Speicherverwaltung
- Aufteilung des Hauptspeichers in definiert große Blöcke in Seitenrahmen
- Unterteilung des logischen Adressraums eines Prozesses in Seiten
- Seiten-bezogene Adressierung und Hauptspeicher-Zuteilung
	- Seitengröße = Seitenrahmen
- Problem:
	- wo befindet sich welche Seite eines Prozesses?
- Lösung:
	- Verwaltung der Seiten in einer prozesseigenen Seitentabelle
- Inhalt:
	- Adresse und Zustand jeder Seite --Infos aus Präsentation--

## Seitentabelleneinträge

20 Bit:
- Seitenrahmennummer
3 Bit:
- Zugriffsrechte
Je 1 Bit:
- Present/Absent-Bit
- Modified-Bit (Dirty Bit)
- Reference Bit
- Cachabel-Bit

### Seitenadressen

- --Infos aus Präsentation--

### Seitenfehler

--Infos aus Präsentation--

### Working-Set-Methode

- Verknüpfung des Paging mit der Struktur des ausgeführten Programms
- Unterteilung des Programms in Phasen
	- bspw. rekursive Funktionen / Schleifen
- Erstellung eines Working-Sets aus allen für eine Phase benötigten Seitenrahmen
- Verhindern von Seitenfehlern durch vollständigen Laden des Working-Sets

### Segmentierung

- Unterteilung des logischen Adressraums eines Prozesses in Segmente unterschiedlicher Größe
- Zweckbestimmte Zugriffsrechte der jeweiligen Segmente
- Unterschiedliche Verwendungszwecke der einzelnen Segmente
- Größe der Segmente wird von Anwendung bzw. dem Compiler festgelegt und hängt von Programmiersprache ab
- Segmente werden genutzt für:
	- Speicherbereiche für geladene Dateien
	- --Infos aus Präsentation--

## --Infos aus Präsentation--

# Sicherheit in IT-Systemen

## Begriffsklärung

Definition von Sicherheit in der Informatik:
- Safety:
	- Schutz vor Risiken durch:
		- Softwarefehlern (Bugs)
		- Störungen
		- Ausfällen
	- --Infos aus Präsentation--
- Security:
	- Schutz von Menschen und Rechnern vor intendierenden Fehlern (Angriffen)
	- --Infos aus Präsentation--

Malware:
- Kunstwort aus "Malicious Software"
- Überbegriff für schädliche und unerwünschte Software
- Synonym für Schadsoftware, Schadprogramme usw.

Sicherheit in BS:
- Jemanden 
- davon abhalten 
- etwas 
- Unerwünschtes zu tun
	- Lesen / Schreiben / Verändern von Dateien
	- Verwenden von falschen Identitäten
	- Verbrauch von Ressourcen
	- etc.
	- Unterscheidung zwischen Angriff von innen und außen

## Arten von Schädlingen

- Coin-Miner
- Würmer
- Trojaner
- Cheats/Hacks
- Adware
	- Automatische Software, zum Anzeigen von Werbung
	- "Harmlos" aber nervig
	- Oft als heimlicher Zustand bei Installationsprogrammen dabei
	- Kann für Datenerfassung oder Überwachung --Infos aus Präsentation--
- Ransomware
	- Ransom = engl. Lösegeld
	- Zugang zu System oder Dateien wird gesperrt / verschlüsselt
	- Erpressersoftware, Ziel ist Zahlung von "Lösungsgeld"
	- --Infos aus Präsentation--
- Spyware
- Viren
	- Abgeleitet von biologischen Viren
	- Ein sich replizierendes Programm
	- Wird an Programmcode angehängt und so ausgeführt
	- Infiziert Programme führen zu Virusreproduktion
	- Auslöser können zeitgesteuert oder eventgesteuert sein
	- Schaden kann Software und indirekt Hardware betreffen
	- Phasen:
		- Schlafphase: Virus ist nicht aktiv. wartend auf Ereignis (Datum o.ä; Nicht jedes Virus schläft)
		- Verbreitungsphase: Identische Klone werde in andere Programme oder Systembereiche gesetzt
		- Auslösephase: Virus wird aktiviert (Systemereignis, bspw. durch Anzahl Kopien)
		- --Infos aus Präsentation--
	- Bekannte Beispiele:
		- MyDoom
		- Anna Journikova
	- Arten von Viren:
		- --Infos aus Präsentation--
- Phishing