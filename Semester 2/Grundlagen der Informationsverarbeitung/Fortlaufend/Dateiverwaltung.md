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