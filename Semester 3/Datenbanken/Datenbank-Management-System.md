---
aliases:
  - Datenbank-Management-Systems
  - DBMS
---
# Definition

Programme die einzig und allein berechtigt sind, Operationen über den in den in der [[Datenbank]] gespeicherten [[Daten]] durchzuführen
Alle Anwendungsprogramme müssen über das DBMS auf die [[Daten]] zugreifen

# Aufbau

- Datendefinition
	- Definition der eigentlichen Daten 
	- Definition der Zugriffshilfen 
	- Definition der Benutzersichten
- Datenmanipulation
	- Retrieval - Operationen (wiederauffinden)
	- Update - Operationen (aktualisieren -> einfügen, löschen, ersetzen)
- Datenverwaltung
	- Laden und Entladen der Datenbank
	- Modifizieren der Speicherstrukturen
	- Reorganisation 5
- Datensicherheit
	- Zugriffskontrolle
	- Sicherung der Integrität
	- Synchronisation von Mehrfachzugriffen

# Architekturen

## 3-Ebenen-Konzept

In 1975 vom Standards Planning and Requirements Committee (SPARC) des American National Standards Institute (ANSI) entwickelt

![[3-Ebenen-Konzept.drawio.svg]]

### Externe Ebene

- Präsentation der Datenbank für Anwendungsprogramme
- Wird mit Hilfe von geeigneten Datenstrukturen festgelegt
- Sichtweise der Daten für die Anwendung wird mit externem [[Schema]] beschrieben
- Jedes Anwendungsprogramm kann ein eigenes [[Schema]] besitzen

### Konzeptuelle Ebene

- Stellt konzeptuelles [[Schema]] (Realitätsmodell), das Informationsangebot (logische Gesamtstruktur der Daten, ihre Eigenschaften und ihre Beziehungen) auf abstrakter Ebene dar
- Neutral gegenüber den einzelnen Anwendungen
- Relationale [[Modell]] quasi Standard

### Interne Ebene

- Festgelegt mit geeigneten physischen Datenstrukturen, wie sie auf externen Speichermedien gespeichert werden
- Realitätsmodell der konzeptuellen Ebene und die hardwarespezifischen Eigenheiten werden zum Bezug genommen

# Komponenten

Um Leistungen, wie z.B. [[Datenunabhängigkeit]] oder die Sicherung der Konsistenz von Daten erbringen zu können, müssen die Systeme Beschreibungsinformationen zu den von ihnen verwalteten Daten (Metadaten) führen und Mechanismen zur Verwaltung von Transaktionen realisieren

![[DMBSKomponenten.drawio.svg]]

Werden in Schichten/Layers, für erleichterte spätere Anpassung und Erweiterung, nach folgendem Prinzip implementiert:

- Höhere Schichten nutzen die Leistungen der tieferen
- Änderungen an höheren Schichten wirken sich nicht auf die unteren aus
- Die tieferen Schichten funktionieren auch ohne den oberen
- Die tieferen Schichten können auch ohne den oberen getestet werden
- Programme einer Schichte benutzen die darunter liegenden als [[Virtuelle Maschine]]


Einfaches Schichtenmodell:

![[DBEinfachesSchichtenmodell.drawio.svg]]

## Schichten

![[DBMSSchichtenmodell.drawio.svg]]

### Transaktionsprogramme

> [!tldr]-
> Greifen auf die gespeicherten Daten zu 
> 
> Zugriff über DBMS zur Verfügung gestellten mengenorientierten Schnittstellen (Tabellen, Sichten, Tupel) unter Nutzung deskriptiver Zugriffmöglichkeiten (SQL, QBE, …)
> 
> Beispiel: Benutzerprogramme

Die oberste Schicht bilden die Transaktionsprogramme (z.B. Benutzerprogramme), die auf die in der jeweiligen Datenbank gespeicherten Daten zugreifen. Sie nutzen dazu üblicherweise die von DBMS zur Verfügung gestellten mengenorientierten Schnittstellen (Tabellen, Sichten, Tupel) unter Nutzung deskriptiver Zugriffsmöglichkeiten (SQL, QBE, ...).

### Logische Datenstrukturen

> [!tldr]-
> Realisiert die logische Datenstruktur der Daten für Anwendungsprogramm
>
> Zugriffskontrollen, Einhaltung der Integritätsregeln, usw.

Die nächste Schicht realisiert die logischen Datenstrukturen, auf die die Anwendungsprogramme (im weitesten Sinn) zugreifen. Sie stellt nach oben hin eine mengenorientierte Schnittstelle (Treffermengen) sowie entsprechende Zugriffsmechanismen (deskriptiv, z.B. über SQL) zur Verfügung. Weiterhin werden von dieser Schicht externe Schemabeschreibungen verwaltet, Zugriffskontrollen realisiert und die Einhaltung von Integritätsregeln sichergestellt. Zur Realisierung der Schicht wird die satzorientierte Datenbankschnittstelle (externe Sätze – z.B. ohne Längen-Bytes etc. –, Sets, Schlüssel, Zugriffspfade) genutzt

### Logische Zugriffspfadstrukturen

> [!tldr]-
> Realisiert die Zugriffspfade
>
> Verwaltet interne Schemabeschreibungsinformationen

Die satzorientierte Datenbankschnittstelle (Datensätze, Indexeinträge) wird von der Schicht der logischen Zugriffspfadstrukturen realisiert. Die Schicht 9 verwaltet interne Schemabeschreibungsinformationen (z.B. über die konkrete Realisierung der jeweiligen Zugriffspfade) und realisiert u.a. einfache Operatoren für (tw. auch navigierende) Datenzugriffe (z.B. FIND NEXT , STORE ) und die Verwaltung von Transaktionen. Die Schicht greift auf die interne Satzschnittstelle (interne Sätze, B* - Bäume, Hash-Tabellen usw.) zu.

### Speicherungsstrukturen

> [!tldr]-
> Setzt Speicherungsstrukturen um
>
> Operationen wie finden, löschen und einfügen, Logs, Recovery

Die nächste Schicht realisiert die vom konkreten DBMS verwendeten Speicherungsstrukturen (Heap, B*-Bäume, Cluster, IOT, ...) und stellt nach oben hin die interne Satzschnittstelle zur Verfügung. Hier werden Operationen wie das Finden, Einfügen oder Löschen von Sätzen/Einträgen in konkrete Datenoder Indexstrukturen realisiert. Auch die Verwaltung von Sperren sowie Log- und Recovery-Mechanismen werden hier implementiert. Von der Schicht werden u.a. Freispeicherinformationen, Adresstabellen, Seitenindizes usw. verwaltet. Die Schicht greift auf die Schnittstelle zum Datenbankpuffer (z.B. Table Spaces, Segmente, Extents, Blöcke, Seiten) zu.

### Seitenzuordnungsstrukturen

Die Schicht zur Implementierung der Seitenzuordnungsstrukturen realisiert im Wesentlichen den Datenbankpuffer. Sie beinhaltet bspw. Operationen zum Reservieren, Freigeben, Auffinden von Seiten im Datenbankpuffer. Dazu werden Verwaltungsinformationen wie Seiten- bzw. Blocktabellen gehalten. Weiterhin wird in dieser Schicht die konkrete Seitenersetzungsstrategie des DBMS sowie Strategien zum Einbringen von Änderungen in die Blöcke auf den Datenträgern implementiert. Nach unten hin wird auf eine Dateischnittstelle (Dateien, Blöcke) zugegriffen.

### Speicherzuordnungsstrukturen

Die Speicherzuordnungsstrukturen, die in der nächsten Schicht implementiert sind, realisieren nach oben hin eine Dateischnittstelle. Die Schicht realisiert Operationen zum Lesen und Schreiben von Blöcken von bzw. auf die externen Speichermedien. Dazu werden Freispeicherinformationen, Dateikataloge, ExtentTabellen usw. verwendet. In dieser Schicht erfolgt auch die Zuordnung von Blöcken innerhalb von Dateien auf die Adressierungseinheiten der Geräteschnittstelle (z.B. Kanäle, Zylinder, Spuren, Sektoren). Die Dateischnittstelle kann vom Betriebssystem zur Verfügung gestellt werden, aber auch eine nahezu direkte Verwaltung des Platzes auf den Speichermedien durch das DBMS ist möglich (z.B. durch die Verwendung von RAW-Devices).

### Externe Speichermedien

Die externen Speichermedien sind jeweils mit einer Geräteschnittstelle ausgerüstet, über die der Zugriff auf die Medien erfolgen kann. Dazu werden üblicherweise Kanalprogramme, Geräte-Driver etc. verwendet.
