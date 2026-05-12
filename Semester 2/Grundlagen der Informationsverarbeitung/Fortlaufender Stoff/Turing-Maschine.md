---
aliases:
  - Turing-Maschinen
---

Dient als universelles Modell für [[Automat|Automaten]]

Wurde 1939 von [[Alan Turing]] vorgeschlagen

# Deterministische Turing-Maschine

Beinhaltet einen [[Arbeitsspeicher|Speicher]], der als *Band* angesehen, was in beide Richtung unendlich weitergeht

Die einzelnen *Zellen* des Bandes entsprechen den [[Register|Registern]] bei [[Automat#Registermaschin|Registermaschinen]] 
Jede Zelle kann ein Symbol aus einem unendlichen *Bandalphabet* $B$ enthalten
Die einzelnen Zellen besitzen keine Adressen (wie die [[Register]] der [[Automat#Registermaschin|Registermaschinen]])

Es existiert ein *Lese-/Schreibkopf*
Er steht immer über einer Speicherzelle des Bandes
Er kann den Inhalt dieser Speicherzelle entweder lesen oder ändern

Am Anfang steht der Lese-/Schreibekopf auf einer bestimmten Speicherzelle, die hier mit $1$ bezeichnet wird
Von dort kann der Lese-/Schreibekopf nach rechts zu Speicherzellen $2$, $3$ etc. oder nach links zu Speicherzellen $0$, $-1$, $-2$ etc. gehen
(Die Nummerierung ist nur zur Orientierungshilfe)

Der Befehlszähler der [[Automat#Registermaschine|Registermaschine]] wird durch die endliche Menge $Q$ von *Zuständen* ersetzt
Die Turing-Maschine ist zu jeder Zeit einem Zustand $q \in Q$ und liest eine Zelle mit einem Zeichen $a \in B$

Als [[Programm]] dient eine *Zustandsüberführungsfunktion*

$$
\delta : Q \times B \times \left\{ R, L, N \right\}
$$

die eine vollständige Beschreibung der Aktionen darstellt, die in bestimmten Zuständen bei bestimmten Zeichen ausgeführt werden

Ist die Maschine im Zustand $q$ und liest das Zeichen $a$, so geht sie gemäß $\delta(q, a) = (q', a', d)$ in den Zustand $q'$ über, ersetzt in der gelesenen Zelle das Zeichen $a$ durch das Zeichen $a'$ und bewegt den Lese-/Schreibekopf in die Richtung $d$ ($d = \text{R}$: Rechts $d = \text{L}$: Links, $d = \text{N}$: Nichts)

![[TuringRud.svg#invert]]

(Dorendorf möchte den Tupel am Pfeil als $(a, d, a')$ haben, außer du definierst es vorher in anderer Reihenfolge)

Definition:

$T = (I, B, Q, \delta, q_0, F)$
- $I \subseteq B$ das Eingabealphabet
- $B$ das Bandalphabet
- $Q$ eine endliche Menge von Zuständen, die die Maschine annehmen kann
- $q_0$ der Startzustand der Turing-Maschine
- $F \subseteq Q$ die Menge der möglichen Endzustände
- $\delta$ die Zustandsüberführungsfunktion

Zu Beginn der Arbeit ergibt sich folgende Ausgangssituation:

Die Eingabe ist ein Wort $w$ über dem *Eingabealphabet* $I \subseteq B$, das heißt, $w = (w_1, . . ., w_n) \in I^*$ 
Dabei steht $w_1$ in der Zelle $1$ und allgemein $w_i$ in der Speicherzelle $i$
Alle anderen Zellen werden als leer angesehen (bei uns mit '#' markiert, was in $B$ aber nicht in $I$ enthalten ist)

Die Maschine befindet sich in Zustand $q_0$ 

Zustände für die $\delta(q, a) = (q, a, N) \ \forall \ a \in B$ gilt, heißen *Endzustände* und bilden die Menge $F$
-> Die Maschine stoppt, wenn in einem bestimmten Zustand ein Zeichen gelesen, dieses nicht verändert und der Lese-/Schreibekopf nicht bewegt wird

Wenn die Maschine stoppt, steht das Ergebnis rechts vom Lese-/Schreibkopf bis zur Speicherzelle i, wenn die Zelle i+1 die erste Zelle rechts vom Lese-/Schreibkopf ist, die ein Leerzeichen enthält

Sind die Antworten binär (also 0 oder 1) wird die Eingabe „lediglich“ akzeptiert oder nicht
-> Die Aussage kann über die Menge der Finalzustände ausgedrückt werden
Eine Eingabe wird akzeptiert, wenn die Maschine in einem Finalzustand $q \in F$ stoppt

Die Zahl der Zustandsübergänge, die die Maschine benötigt, bis sie stoppt heißt *Rechenzeit*

![[TuringSchem.drawio.svg]]

*Weiter bei Seite 67*

## Beispiel 1

Aufgabe max. 2 b hintereinander

Lösung (alles was geschrieben ist, muss auch so in der Klausur stehen, außer die doppelte Belegung der Pfeile, diese müssen bei Dorendorf einzeln stehen und wieder die Reihenfolge der Elemente):

![[TuringKatze.svg#invert]]

$T = (I, B, Q, q_0, \delta, F)$
$I = \left\{ a, b \right\}$
$B = \left\{ I \lor \# \right\}$ 
$Q = \left\{ q_0, q_1, q_2, q_3 \right\}$
$F = \left\{ q_0, q_1, q_2 \right\}$
$\delta = \left\{\begin{array}{c}(q_0, \#, N, \#, q_0) \\ (q_0, a, R, a, q_0) \\ (q_0,b,R,b,q_1) \\ (q_1,\#,N,\#,q_1) \\ (q_1,a,R,a,q_0) \\ (q_1,b,R,b,q_2) \\ (q_2,\#,N,\#,q_2) \\ (q_2,a,R,a,q_0) \\ (q_2,b,N,b,q_3) \\ (q_3,\#,N,\#,q_3) \\ (q_3,a,N,a,q_3) \\ (q_3,b,N,b,q_3)\end{array}\right\}$
