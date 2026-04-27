---
aliases:
---
Eine Komponente des [[Betriebssystem|Betriebssystems]]

Verwaltet den gesamten Speicherplatz des [[Externes Massenspeicher|Massenspeichermediums]] 

Keine Hierarchiebildung vorgesehen

# Aufgaben

- Auffinden von Dateien
- Zuweisen von freien Speicher für [[Programm|Programme]] 
- Freigabe nicht mehr benötigtem Speichers
- Löschen von Dateien

# Arten

## Sequenzielle Dateiorganisation (Heap)

Alle Informationen fortlaufend in Reihenfolge der Eingabe gespeichert und können auch nur in dieser Reihenfolge ausgelesen werden

Ist ein fortlaufender Strom von [[Satz|Datensätzen]] 

Beim Abrufen müssen alle vorliegenden Datensätze gelesen werden

Dateien auf Magnetbandspeichern können aufgrund der sequenziellen Zugriffsart des Magnetbandgerätes nur sequenziell organisiert werden

## Indexierte Dateien

Zugriff auf [[Satz|Datensatz]] über einen Schlüssel

In einer Tabelle, genannt Indexdatei, oder über einen [[Hash]], wird die Adresse des Datensatzes ermittelt
Die Berechnungsvorschrift wäre Teil der Dateidefinition

![[Indextabelle.drawio.svg]]

## Indexsequenzielle Datenorganisation

Mischform aus [[#Sequenzielle Dateiorganisation (Heap)]] und [[#Indexierte Dateien]]

Elemente werden nach einem Merkmal sortiert und nach bestimmten Kriterien in Einheiten eingeordnet

Eine Einheit erhält einen Index, den Schlüssel um an z.B. das erste Element zu kommen

Innerhalb einer Einheit können [[Satz|Datensätze]] nur sequentiell abgerufen werden

Beim Aufruf wird über den Index der Einheit ab Beginn sequenziell gesucht

Gesucht Schulze mit Peronalnummer 5
![[Indexsequ.drawio.svg]]

Die Größe der Einheit wird vom [[Betriebssystem]] bestimmt, generell die [[Block]]-Größe

## Multilisten

Besteht aus Listen und einer Ankertabelle

In einer Liste sind alle [[Satz|Datensätze]] verkettet, die in einem Merkmal den selben Wert haben

Die Ankertabelle enthält die Zeiger auf den Anfang einer Liste

Ähnlich der [[Hash]]-Struktur, hier existiert aber keine Adressberechnung

Anders als bei der [[#Indexsequenzielle Datenorganisation|indexsequenziellen Datenorganisation]] müssen die Elemente einer Einheit nicht sequenziell angeordnet sein
Verweis auf Nachfolger als Zeiger im Element gespeichert

## Mehrstufige Indexstrukturen

Meist bei sehr großen [[Datei|Dateien]] verwendet

Ergibt baumartige Struktur, am häufigsten wird die B-Baum-Form verwendet

Die Wurzel des B-Baums bildet den Masterindex
Besitzt generell keine Verweise auf Datensätze sondern auf weiter Indexblöcke

Ein [[Satz|Datensatz]] wird mit üblichen Suchstrategien gefunden

# Interne Struktur

Unix spaltet den physischen Datenträger in mehrere Teile ([[Partition|Partitionen]]), welche mehrere voneinander unabhängige und gegenüber abgesicherte [[Dateisystem|Dateisysteme]] sind, auf

Aufbau in folgende Blöcke:

- log. Block $0$ - (Boot Block) - Boot Anfangslader (nur bei root file system verwendet)
- log. Block $1$ (Superblock)
- log. Blöcke $2 ... \text{n}$ (i-node-list) - Liste der Dateideskriptoren
- log. Blöcke $\text{n}+1 ... \text{m}$ – Datenblöcke für die Speicherung der eigentlichen Nutzdaten

![[Blöcke.drawio.svg]]

## Superblock

Enthält alle Verwaltungsinformationen zum [[Dateisystem]] selbst

- Größe des [[Dateisystem|Dateisystems]] in [[Block|Blöcken]]
- Name der logischen Datenträgers
- Name des Dateisystems
- Größe der i-node-list
- Blockgröße des Dateisystems
- Zeiger auf das erste Element der Liste des freien Datenblöcke
- Zeiger auf das erste Element der Liste der freien i-nodes
- Datum der letzten Modifikation
- Datum der letzten Sicherung
- Indikatoren zum Blockieren des Zugriffs bei Korrekturoperationen
- Mount Bit

Beim Montieren eines [[Dateisystem|Dateisystems]] wird der Superblock in den Hauptspeicher geladen und gehalten

## i-node-Liste

Hier sind alle [[Dateideskriptor|Dateideskriptoren]] aller [[Datei|Dateien]] gespeichert

Ein Element wird i-node genannt

- Dateityp (reguläre Datei, Verzeichnis, spezielles File)
- Zugriffsrechte (Eigentümer, Gruppe, Andere)
- Zahl der Referenzen (links) auf die Datei
- Eigentümer (UID des Eigentümers)
- Gruppenzugehörigkeit
- Länge in Byte
- Datum und Zeit der Erzeugung
- Datum und Zeit der letzten Modifikation
- Datum und Zeit des letzten Zugriffs
- direkte Verweise auf Datenblöcke
- Verweis auf Indirektionsblöcke Stufe 1
- Verweis auf Indirektionsblöcke Stufe 2
- Verweis auf Indirektionsblöcke Stufe 3

Bei [[Special Files]] wird anstatt dem Erstellungsdatum die major device und die minor device number gespeichert

Die Werte für Erstellungs-, Modifikations- und Zugriffsdatum werden in der sog. Unix-Zeit angegeben, (in Sekunden seit dem 1.1.1970)

