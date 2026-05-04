Ist in der Informatik ein Sechstupel der Form

$A = \left\{ I, O, Q, \delta, q_0, F \right\}$ 
- $I$ und $O$ sind das Ein- und Ausgabealphabet des Automaten
	- Bei dem beschreiben von [[Sprache|Sprachen]] wird $O$ meist weggelassen, da nur richtig oder falsch ausgegeben wird
- $Q$ steht für die endliche Menge an Zuständen, die sich in dem Automat befinden können
- $\delta$ steht für eine Überführungsfunktion, die den Automaten, in Abhängigkeit von einem gelesenen Zeichen und dem augenblicklichen Zustand, in einen anderen Zustand überführt
- $q_0 \in Q$ bezeichnet den Startzustand, in dem sich der Automat am Anfang befindet
- $F \in Q$ bezeichnet die teilmenge aller Endzustände (Finalzustände), bei deren Erreichen der Automat eine erfolgreich abgearbeitet Aufgabe anzeigt

Ein Automat der bei dem Eingabealphabet $\left\{ a,b \right\}$ weder $aa$ noch $bb$ enthalten darf:

![[Automat1.flaci.svg#invert]]

Kein technisches Gerät sondern, sondern mathematische Modelle von Geräten, die Eingaben in Ergebnisse formen

Automatentheorie ist ein Zweig der theoretischen Informatik

Werden zum Beschreiben von formalen [[Sprache|Sprachen]] bzw. zur Beschreibung von [[Compiler|Sprachverarbeitungssystemen (Compiler)]] verwendet

Erkennende Automaten (Akzeptoren) werden benötig, um festzustellen, ob [[Programm|Programme]] [[Syntax|syntaktisch]] richtig sind

Übersetzende Automaten (Transduktoren) berechnen aus einem gegebenen Eingabewort ein bestimmtes Ausgabewort

Zusammenfassung eines Akzeptors und eines Transduktors ergibt Werkzeug, mit dem ein Eingabestring auf seine [[Syntax|syntaktische]] Korrektheit bezüglich einer bestimmten [[Sprache]] geprüft wird und anschließend, wenn der String korrekt ist, diesen in eine andere Sprache übersetzt (z.B. Compiler)

Weiterhin werden sie verwendet, um zu bestimmen, ob ein Problem überhaupt rechnerisch gelöst werden kann

# Deterministische Automaten

