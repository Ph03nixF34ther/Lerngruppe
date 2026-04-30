---
aliases:
  - Programmiersprachen
---
Sind Sprachen zur Beschreibung und zur Formulierung von Verarbeitungsvorschriften, die von einem [[Computer]] ausgeführt werden können

Wichtige Schnittstelle zwischen Benutzer und Maschine

![[Programmierparadigmen.drawio.svg]]

# Problemorientierte Programmiersprachen

(Auch höhere Programmiersprachen)
In sehr großem Teil von der zugrunde liegenden Maschine abhängig

Meist einen definierten Kern, der das Wesen der Sprache ausmacht und zwischen Maschinen gleich bleibt, mit unter Umständen verfügbaren maschinen- oder betriebssystemspezifische Erweiterungen
Werden sie nicht genutzt kann der Quellcode zwischen den Systemen übersetzt werden

Problemorientierte Programmiersprachen können in fünf Gruppen untergliedert werden:

- Imperativen Programmiersprachen
- Funktionalen Programmiersprachen
- Deskriptiven Sprachen
- Prädikativen Programmiersprachen
- Objektorientierten Programmiersprachen

## Imperative Programmiersprachen

Besteht aus Folgen von Anweisungen die abgearbeitet werden sollen

Beschreibung eines Weges wie ein Ergebnis erzeugt wird

Der Weg der Verarbeitung steht im Vordergrund

Beispiel: C, Pascal, MODULA-2, Fortran, Cobol, BASIC usw.

## Funktionale Programmiersprachen

Funktionen die Eingabegrößen in Ausgabegrößen abbilden

Es werden Beziehungen zwischen Ein- und Ausgabegrößen mit Hilfe von Ausdrücken beschrieben, aus denen mit Hilfe von Operationen, die über Funktionen definiert sind, Funktionen gebildet werden

Beispiel: LISP

## Deskriptive Programmiersprachen

Das Ergebnis selbst steht im Vordergrund

Es werden Eigenschaften beschrieben, die das Ergebnis besitzen soll
Das Programm liefert alle Eingabewerte, die diese Bedingungen erfüllen

Meist keine Manipulation der Eingabegrößen, sondern eine Auswahl gemäß der formulierten Bedingungen

Beispiel: SQL

## Prädikative Programmiersprachen

Der Beweis in einem System von Tatsachen und Regeln stehen im Vordergrund

Besteht aus System von Fakten und Regeln, was auch als Wissensbasis bezeichnet werden kann
Der Benutzer formuliert eine Anfrage an das System und antwortet mit "richtig" oder "falsch"

Beispiel: PROLOG

## Objektorientierte Programmiersprache

Alle zur Lösung von Teilproblemen notwendigen Daten und Operationen werden jeweils zu Objekten zusammengeführt

Objekte kommunizieren über Signale und Botschaften

Manche Imperative Sprachen sind um Elemente der objektorientierten Programmierung erweitert worden

Beispiele: Smalltalk, C++, Java usw.

# Maschinenorientierte Programmiersprachen

Orientieren sich an der Hardware
Unterscheidet sich von Maschinentyp zu Maschinentyp
-> Befehlssatz hängen von [[Zentraleinheit|CPU]] ab

Programme bestehen aus einer Menge von [[Befehl|Befehlen]]