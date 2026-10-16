---
aliases:
  - Datenmodelle
---
# Definition

Beschreibt die Modellierungsvorschrift die aus bestimmten Strukturtypen, festen Integrationsvorschriften für die Zuordnung der Strukturtypen zu Objekt- und Beziehungstypen und bestimmten Operation über diesen Strukturtypen besteht

# Hierarchische Datenmodelle

Älteste und klassischste Datenmodell

Das [[Datenbank-Management-System|DBMS]] [[International Business Machines Information Management System|IMS]] basiert darauf

Grundelemente sind [[Record|Datensätze (Records)]], [[Field|Felder (Fields)]] und [[Datensatzmenge|Datensatzmengen]] angeordnet in Eltern-Kind-Beziehung

Die Strukturen weisen folgende Eigenschaften auf:

- Es gibt eine ausgezeichnete [[Datensatzmenge]] als oberstes Element in der Hierarchie
	- Sie ist nicht Kind-[[Datensatzmenge]] irgendwelcher Eltern-[[Datensatzmenge|Datensatzmengen]]
	- Diese [[Record|Datensätze]] stellen jeweils die Wurzel von Baumstrukturen dar
- Jede [[Datensatzmenge]], mit Ausnahme des obersten Elements, ist eine Kind-Datensatzmenge in genau einer Eltern-Kind-Beziehung
	- In einer Baumstruktur besitzt jeder Knoten, mit Ausnahme des Wurzelknotens, genau einen Vorgänger (Vaterknoten).
- Eine Datensatzmenge kann als Eltern-Datensatzmenge in mehreren (auch null) Eltern-Kind Beziehungen stehen
	- Ein Knoten einer Baumstruktur kann auf mehrere Nachfolger (Sohn-Knoten) verweisen
	- Knoten ohne Nachfolger werden als Blätter bezeichnet.

## Beispiel

![[BerufsakademieHierarchischesDatenmodell.drawio.svg]]

## Möglichkeiten zur Datenspeicherung

Orientiert sich stark an Konzepten traditioneller Dateisysteme

Jede [[Datensatzmenge]] in eigener [[Datei]]
Ganze Baumstruktur in einer [[Datei]] auch möglich

Zugriff auf einzelne [[Record|Datensätze]] durch gleiche Größe schnell mit Hilfe von Sprungadressen

[[Relationship|Beziehungen]] werden über Zeiger implementiert

Zur Beschleunigung werden [[Datensatzmenge|Datensatzmengen]] oftmals indexiert
Es werden Indexe erstellt, die schnell durchsucht werden können und die direkt auf die Speicherorte von Datensätzen verweisen

## Grenzen des Modells

Die Verwendung von Zeigern zur Darstellung von Beziehungen hat den Vorteil, dass auch in sehr großen Datenmengen, die mit einem Eltern-Objekt in Beziehung stehenden Nachfolgeobjekte („Kinder“, „Enkel“, usw.) sehr schnell aufgefunden werden können, wenn die Such-Wege innerhalb eines Datenbestands vorab bekannt sind

Müssen neue Suchmöglichkeiten integriert werden, so müssen neue Strukturen (Bäume) in das Datenmodell aufgenommen werden

Der Preis für die auch innerhalb großer Datenmengen schellen Suchoperationen ist ein allerdings relativ starres Datenmodell

Ein weiteres Problem ergibt sich daraus, dass es in Baumstrukturen nicht möglich ist, dass verschiedene Eltern-Objekte auf die selben Kind-Objekte verweisen
Damit sind im reinen hierarchischen Datenmodell n-m Beziehungen nicht zu modellieren

Sollen im [[#Beispiel]] die Studierenden auch den Unternehmen zugeordnet werden, so müssen deren Datensätze unterhalb der Unternehmen erneut eingefügt werden, was zu Redundanzen führt

# Netzwerkmodell

Wurde von der [[Data Base Task Group|Data Base Task Group (DBTG)]] des [[Programming Language Committee]] der [[Conference on Data Systems Language|Conference on Data Systems Language (CODASYL)]] vorgeschlagen

Das Netzwerkmodell beinhaltet [[Record|Datensatz]]- und [[Datensatzmenge|Mengen]]typen

Ein Datensatztyp hat einen Namen und umfasst [[Record|Datensätze]] gleicher Struktur, die auch mehrwertige Attribute (sogar mehrwertige komplexe Attribute, repeating collections) enthalten können

Mengentypen dienen zur Darstellung von 1:N-Beziehungen zwischen einem Besitzer-(owner)Datensatztyp und einem Mitglieds-(member)Datensatztyp und werden im Gegensatz zur Eltern-Kind Beziehung im hierarchischen Datenmodell benannt
Die Elemente eines Mengentyps sind sortiert

Das Netzwerkmodell fordert keine strenge Hierarchie
Es erlaubt die Verknüpfung zwischen beliebigen Datensatztypen durch Mengentypen
Damit können (zumindest indirekt) auch M:N-Beziehungen abgebildet werden

Dies erfordert Hilfsdatensatztypen (dummy oder linking record type), die zwei 1-N Beziehungen darstellen

Oft existieren unterschiedliche Suchwege, um zu einem bestimmten Datensatz zu gelangen
Das Netzwerkmodell kann als Verallgemeinerung des hierarchischen Datenmodells aufgefasst werden, bei dem zumindest das Problem häufig auftretender Redundanzen vermindert wird

## Beispiel

![[BerufsakademieHierarchischesDatenmodell2.drawio.svg]]

# Relationales Datenmodell

> [!warning]- Dorendorfs Skript-Ausschnitt
> 
> Das Datenmodell wurde von Edgar F. Codd 1970 erstmals vorgeschlagen und ist heute ein üblicher Standard zum Speichern von Daten. Obwohl das relationale Datenmodell und das Netzwerkdatenmodell nahezu zeitgleich vorgeschlagen wurden, dauerte die Etablierung relationaler Systeme wesentlich länger. Der Grund dafür stellt einen sicherlich wesentlichen Vorteil des Modells dar. Beziehungen zwischen Datenobjekten werden nicht mehr über Zeiger „fest verdrahtet“ sondern über deren Eigenschaftsausprägungen (Attributwerte) dargestellt. Dies sorgt für wesentlich flexiblere Auswertungsmöglichkeiten als beim Netzwerk- oder beim hierarchischen Modell, führt aber auch dazu, dass der Aufwand zur Ausführung der Auswertungen höher ist. Die Verbreitung relationaler Datenbanksysteme nahm daher erst mit der Verbreitung leitungsfähiger Hardware zu. Bekannt im Zusammenhang mit relationalen Datenbanken ist auch die Datenbanksprache SQL (Structured Query Language), zum Abfragen und Manipulieren von Daten sowie zur Datendefinition.
> 
> Für rein relationale Systeme ist die Beschreibung der logischen Datenstrukturen recht einfach. Daten werden in einfacher Tabellenform, ohne mengenwertige oder zusammengesetzte Attribute dargestellt. Weder die Reihenfolge der Attribute noch 15 die der Tupel einer Tabelle sind vorgeschrieben. Eine Tabelle kann daher auf eine ungeordnete Folge von Datensätzen abgebildet werden. Um Zugriffe auf einzelne Sätze bzw. kleinere Satzmengen zu beschleunigen, können häufig für Suchoperationen verwendete Attribute bzw. Attributkombinationen (Suchschlüssel) indexiert werden. Über den Index wird eine Zuordnung zwischen Suchschlüsselwerten und den Speicherorten der den jeweiligen Suchschlüsselwert enthaltenden Datensätze vorgenommen. Damit werden zusätzliche Zugriffspfade geschaffen. Tabellen stellen aus mathematischer Sicht Relationen dar.
> 
> mathematische Definition einer Relation:
> 
> Eine Relation zwischen zwei Mengen A und B ist eine Teilmenge des kartesischen Produkts von A und B.
> 
> $$
> R \subset A \times B
> $$
> 
> Das heißt, ein Objekt entspricht einer Zeile einer Tabelle (n-Tupel). Die Attribute von Objekten werden in den Tabellenspalten dargestellt. Ein Beispiel zeigt Abbildung 12.
> 
> Abbildung 12: Bildung von Relationen
> 
> Im relationalen Datenmodell werden elementare Beziehungen zwischen Merkmalen (Attributen) durch die Bildung von Tabellen (Relationen) ausgedrückt. Eine bestimmte Wertekombination einer Tabelle beschreibt ein Datenobjekt (Entity). Beziehungen zwischen Entities werden durch korrespondierende Attributwerte in verschiedenen Tabellen (Schlüssel-Fremdschlüssel) – also noch auf der logischen Ebene – abgebildet. Änderungen der Beziehungen einzelner Entities untereinander werden durch Werteänderungen in den entsprechenden Attributen realisiert.
> 
> Im Zusammenhang mit dem relationalen Datenmodell sind die folgenden Festlegungen und Begriffe von Bedeutung. 
> 
> - Ein Objekt hat bestimmte Merkmale (Attribute).
> - Es existieren Beziehungen zwischen diesen Objekten.
> - Diese Beziehungen haben wiederum bestimmte Merkmale.
> 
> Der Wertebereich eines Attributs wird als Domäne bezeichnet.
> Eine Entität (entity) ist eine ganz bestimmte Kombination von Attributwerten für ein Objekt (z.B. Müller Karl).
> 
> Durch Klassenbildung (Verallgemeinerung) lassen sich mehrere Entities zu einem Entitätstyp (entity type) zusammenfassen (z.B. haben alle Objekte Person einen Namen und Vornamen).
> 
> Alle Entities, die mit einem Entity-Typ beschrieben werden können, sind eine Entitätsmenge (entity set) (Meier Karl, Müller Fritz, Müller Franz, Müller Karl und Schulze Fritz).
> 
> Die Beziehungen (relationships) zwischen Objekten (Entitäten) werden durch Verallgemeinerung zu Beziehungstypen (relationship type) zusammengefasst.
> 
> Alle Beziehungen, die durch einen Beziehungstyp beschrieben werden können, sind eine Beziehungsmenge (relationship set).

![[Relations-Typ.drawio.svg]]

## Operationen

Basieren auf Relationalen Algebra
Bauen auf Mengenoperationen auf

### Selektion

Wählt aus einer Relation n-Tupel aus, für die eine bestimmte Selektionsbedingung erfüllt ist
Ein Prädikat ist erfüllt

Sei $R$ eine Relation über die Attribute $\left\{ A_1, \dots ,A_k \right\}$ und sei $B$ ein beliebiger Ausdruck
Die Selektion über $R$ ist wie folgt definiert

$$\begin{array}{l}
R \left[ A_i \oplus B \right] := \left\{ r | r \in R \ \land \left[ A_i \oplus B \right] = \text{true} \right\} \\
\text{mit} \ \oplus := \left\{ =, <, >, \le , \ge \right\} \ \text{und} \ i:=\left\{ 1, \dots ,  \right\}
\end{array}$$

![[Selektion.drawio.svg]]

Monadischer Vergleichsterm genannt, weil es eine Variable mit einem festem Wert vergleicht

### Projektion

Die Projektion liefert Ergebnisrelationen, deren Typ auf einer echten Attributteilmenge der Ausgangsrelation basiert

Durch eine Projektion werden bestimmte Spalten einer Relation ausgewählt
Die Projektion über R ist wie folgt definiert:

$$\begin{array}{l}
R \left[ \beta \right] := \left\{ r_\beta | r \in R \right\} \\
\text{mit} \ \beta \subseteq \left\{ A_1, \dots , A_k \right\}
\end{array}$$

![[Projektion.drawio.svg]]

### Join

Die Join-Operation verbindet zwei Relationen zu einer neuen Relation in Abhängigkeit der Wertebelegung der Join-Attribute

Die Join-Attribute sind Attribute, deren Wertebereiche (Domänen) vergleichbar sind

Join Operation für $R \left( A_1, \dots , A_4 \right)$ und $S \left( A_I, \dots , A_{III} \right)$:

![[Join.drawio.svg]]

Ein allgemeiner Join über den Relationen $R$ und $S$ ist wie folgt definiert:

$$\begin{array}{l}
R \left[ A \oplus B \right]S := \left\{ r \cup s | r \in R \land s \in S \land \left[ A \oplus B \right] = \text{true} \right\} \\
\text{mit} \oplus := \left\{ =, <, >, \le , \ge \right\}
\end{array}$$

Es existieren neben dem allgemeinen Join noch weitere Formen

- Equi-Join
	- Es werden die Tupel aus R und S miteinander verbunden, bei denen die Vergleichsbedingung A=B erfüllt ist
- Natural Join
	- Es werden die Attribute, die in R und S enthalten sind, nur einmal in die Ergebnisrelation übernommen
- Outer-Join
	- Es werden in die Ergebnisrelation auch die Tupel der linken (left outer join) bzw. der rechten (right outer join) Relation mit aufgenommen, die keinen Join-Partner finden. Dabei wird mit Nullwerten aufgefüllt
	- Die Kombination aus Left- und Right-Outer-Join wird als Outer-Join oder Full-OuterJoin bezeichnet

Dyadischer Vergleichsterm genannt, weil zwei Variablen miteinander verknüpft werden

# Objektorientiertes Datenmodell

Zwingende Kriterien:

- Verwaltung komplexer Objekte
- Sicherstellung der Objektidentität
- Kapselung
- Typisierung von Objekten und Zuordnung zu Klassen
- Klassen- und Typhierarchie
- Überschreiben, Überladen und spätes Binden von Methoden (Spezialisierung)
- berechnungsvollständige Datenbankprogrammiersprache
- Erweiterbarkeit des DBMS um neue Typen (z.B. für Multimediaanwendungen)
- dauerhafte Speicherung von Objekten (Persistenz)
- Sekundärspeicherverwaltung
- Synchronisation und Recovery von Transaktionen
- Bereitstellung von Anfragesprachen (analog SQL)

Optionale Kriterien:

- Mehrfachvererbung
- statische Typprüfung zur Übersetzungszeit
- Unterstützung verteilter Datenhaltung
- Unterstützung von Entwurfstransaktionen
- Versionsverwaltung für Objekte

In der Folgezeit ergaben sich noch weitere Kriterien, die so nicht im ODBMS-Manifesto aufgeführt sind:

- Definition und Prüfung von Integritätsbedingungen
- Unterstützung von anwendungsspezifischen Sichten
- Unterstützung der Schemaevolution
- Realisierung einer Zugriffskontrolle

# Objektrelationale Systeme

Objektrelationale DBMS sollen die Vorzüge relationaler Systeme mit denen der Objektorientierung verbinden

Die zwischen dem relationalen und dem objektorientierten Datenmodell vorhandenen Entsprechungen (z.B. entspricht eine Entität einem Objekt und der Entitätstyp einer Klasse) bilden die Basis für die Entwicklung von objektrelationalen DBMS
Meist werden Spracherweiterungen um objektorientierte Methoden und Datentypen zur Verbesserung des relationalen Modells und damit zur Handhabung komplex strukturierter Daten vorgenommen
In einigen Lösungsansätzen wird über die Komponenten eines relationalen DBMS eine objektorientierte Zugriffsschicht gelegt. Dies ist mit vergleichsweise wenigen Eingriffen in die bestehenden Systeme zu realisieren und gefährdet die Stabilität der Systeme weniger als Eingriffe in mehrere und tiefer liegende Schichten
