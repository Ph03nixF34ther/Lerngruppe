SQL-Anweisungen beschreiben Eigenschaften, die bspw. ein Suchergebnis erfüllen soll
Sie beschreiben nicht, wie die Anweisungen ausgeführt werden sollen

SQL-Anweisungen an eine [[Datenbank]] werden in zwei Schritten verarbeitet

# Anfrageübersetzung

[[Datenbank-Management-System|DBMS]]-interne Abarbeitung von Anweisungen wird mittels relativ einfacher Grundoperationen (Planoperatoren) die notwendigen I/O-Operationen ausgeführt

Aufgabe ist, Folgen von Planoperatoren (Ausführungspläne) zu finden, mit denen gegebene SQL-Anweisungen in der konkreten Systemumgebung auf kostengünstige Weise realisiert werden können.

Prozess:

- lexikalische und syntaktische Analyse
- semantische Analyse (Existieren die gewünschten Objekte?)
- Zugriffs- und Integritätskontrolle
- Standardisierung und Vereinfachung (z.B. Bedingungen in WHERE-Klauseln in disjunktive oder konjunktive Normalform bringen)
- Restrukturierung und Transformation (Erstellung von Ausführungsplänen, Anfrageoptimierung)
- Code-Generierung für eine direkte oder interpretative Ausführung

# Anfrageoptimierung

Ist die SQL-Anweisung gültig, muss ein möglichst kostengünstiger Weg gefunden werden

Die Reihenfolge der Bedienungsausdrücke einer SQL-Anweisung soll dabei keinen Einfluss haben

Zunächst erstellt der Optimierer einen oder mehrere Ausführungspläne

Sie arbeiten

- Regelbasiert
	- Der Optimierer arbeitet nach den Regeln der Relationen-Algebra (z.B. Selektion vor Join etc.)
	- Der tatsächliche Zustand (z.B. Datenmengen, Datenverteilung) der [[Datenbank]] wird dabei nicht berücksichtigt
	- In bestimmten Fällen (z.B. bei sehr kleinen aber indexierten Tabellen) liefert die regelbasierte Optimierung ungünstige Zugriffspfade
- Kostenbasiert
	- Mit Hilfe von Statistiken wird der tatsächliche Datenbankzustand berücksichtigt
	- Mit Statistikdaten werden die Ausführungskosten für die verschiedenen Ausführungspläne geschätzt
	- Gewählt wird der, der die niedrigsten Ausführungskosten erwarten lässt
	- Voraussetzung sind aktuelle Statistikdaten
		- Werden im Datenbankkatalog gespeichert
		- Wegen hohem Aufwand werden die Statistikdaten im laufenden Betrieb nicht (vollständig) gepflegt
