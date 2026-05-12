---
aliases:
  - Automaten
---

Ist in der Informatik ein Sechstupel der Form

$A = \left\{ I, O, Q, \delta, q_0, F \right\}$ 
- $I$ und $O$ sind das Ein- und Ausgabealphabet des Automaten
	- Bei dem beschreiben von [[Sprache|Sprachen]] wird $O$ meist weggelassen, da nur richtig oder falsch ausgegeben wird
- $Q$ steht für die endliche Menge an Zuständen, die sich in dem Automat befinden können
- $\delta$ steht für eine Überführungsfunktion, die den Automaten, in Abhängigkeit von einem gelesenen Zeichen und dem augenblicklichen Zustand, in einen anderen Zustand überführt
- $q_0 \in Q$ bezeichnet den Startzustand, in dem sich der Automat am Anfang befindet
- $F \in Q$ bezeichnet die Teilmenge aller Endzustände (Finalzustände), bei deren Erreichen der Automat eine erfolgreich abgearbeitet Aufgabe anzeigt

Ein Automat der bei dem Eingabealphabet $\left\{ a,b \right\}$ weder $aa$ noch $bb$ enthalten darf:

![[Automat1.flaci.svg#invert]]

Kein technisches Gerät sondern, sondern mathematische Modelle von Geräten, die Eingaben in Ergebnisse formen

Automatentheorie ist ein Zweig der theoretischen Informatik

Werden zum Beschreiben von formalen [[Sprache|Sprachen]] bzw. zur Beschreibung von [[Compiler|Sprachverarbeitungssystemen (Compiler)]] verwendet

Erkennende Automaten (Akzeptoren) werden benötig, um festzustellen, ob [[Programm|Programme]] [[Syntax|syntaktisch]] richtig sind

Übersetzende Automaten (Transduktoren) berechnen aus einem gegebenen Eingabewort ein bestimmtes Ausgabewort

Zusammenfassung eines Akzeptors und eines Transduktors ergibt Werkzeug, mit dem ein Eingabestring auf seine [[Syntax|syntaktische]] Korrektheit bezüglich einer bestimmten [[Sprache]] geprüft wird und anschließend, wenn der String korrekt ist, diesen in eine andere Sprache übersetzt (z.B. Compiler)

Weiterhin werden sie verwendet, um zu bestimmen, ob ein Problem überhaupt rechnerisch gelöst werden kann

---

# Registermaschine

> [!Warning]+ Hinweis
> Ist in der Erstklausur nicht relevant (In Wiederholungsklausuren kann es vorkommen)

Besitzt einen Befehlszähler, einen [[Akkumulator]], ein Programm und eine feste endliche Anzahl von [[Register|Registern]] 
Jedes [[Register]] kann eine beliebig große natürliche Zahl aufnehmen

Auf jedes [[Register]] können drei Operationen angewendet werden:
- Inkrement: Den Wert um $1$ erhöhen
- Dekrement: Den Wert um $1$ vermindern
- Testen ob der der Wert des [[Register|Registers]] gleich $0$ ist

Ein vereinfachtes Modell realer Rechner
Die Maschine besitzt ein Programm, dessen einzelne Befehle markiert sind

Beispiel: Befehle sind mit `i` markiert

```Registermaschine
i:DO f; GOTO j
```

Ausführung der Registeroperation (Inkrement oder Dekrement) und anschließender Sprung nach `j`

```Registermaschine
i:IF t THEN GOTO j ELSE GOTO k
```

Test, ob der Inhalt des Registers gleich $0$ ist, wenn ja Sprung nach `j`, sonst nach `k`


Beide Anweisungen können durch eine Tupelschreibweise verkürzt werden:

`i:DO f; GOTO j` -> `(i,f,j)`
`i:IF t THEN GOTO j ELSE GOTO k` -> `(i,t,j,k)`

Registermaschinen mit $m$ Registern berechnen [[Funktion|Funktionen]] $f : {N^r}_0 \rightarrow {N^s}_0$ mit $r, s \le m$ (Die natürlichen Zahlen in den Eingaberegistern werden in natürliche Zahlen in den Ausgaberegistern überführt)

Die Eingabe $(x_1, . . ., x_r) \in {N^r}_0$ wird zunächst in den ersten $r$ [[Register|Registern]] gespeichert
Übrige [[Register]] werden mit $0$ belegt

Die Ausführung des Programms beginnt bei der Anweisung gekennzeichnet mit $0$ und endet bei einem verweis zu einer Marke, die nicht im Programm enthalten ist

Der Inhalt der ersten Register $s$ bildet nach Ende der Programmausführung die Ausgabe

---

## Formale Definition:

$$
R_m = (F, T, P, \delta)
$$

$F$ ist die Menge der Inkrement- und Dekrement-Operationen:

- $F = \left\{ A_1, . . ., A_m, S_1, . . ., S_m \right\}$ die wie folgt definiert sind:
	- $i \in \left\{ 1, . . ., m \right\}$
	- $A_i : {N^m}_0 \rightarrow {N^m}_0$
	  $Ai(x_1, . . .,x_m) = (x_1, . . ., x_{i - 1}, x_i + 1, x_{i + 1}, . . ., x_m)$ 
	- $S_i : {N^m}_0 \rightarrow {N^m}_0$
	  $Si(x_1, . . ., x_m) = (x_1, . . ., x_{i - 1}, x_i - 1, x_{i + 1}, . . ., x_m)$ 
	- $x - 1 = \begin{cases}x - 1 & \text{falls } x > 0 \\ 0 & \text{sonst}\end{cases}$

$T$ steht für die Menge der [[Boolesche Algebra|booleschen]] Funktionen, die testen, ob der Wert des Inhalts eines [[Register|Registers]] gleich $0$ ist:

- $T = \left\{ T_1, . . ., T_m \right\}$ wobei gilt, dass für alle $i \in \left\{ 1, . . ., m \right\}$
- $T_i : {N^m}_0 \rightarrow \left\{ \text{true}, \text{false} \right\};$
  $T_i(x_1, . . ., x_m) = \text{true}$ falls $x_i = 0$ und $T_i(x_1, . . ., x_m) = \text{false}$ sonst

$P$ ist die Menge von Anweisungen der Form:

- $\begin{array}{rccc}P \subset & N_0 \times F \times N_0 & \cup & N_0 \times T \times N_0 \times N_0 \\ & (i, f, j) & & (i,t,j,k) \end{array}$
  und stellt das Programm dar

$\delta$ ist die Überführungsfunktion, die beschreibt, wie die Registermaschine arbeitet:

- $\delta : N_0 \times {N^m}_0 \rightarrow N_0 \times {N^m}_0$
- $\delta (i, x_1, . . ., x_m)=(j, f(x_1, . . ., x_m))$ für $(i,f,j) \in P$ (normale gültige Operation)
	- $=(j, x_1, . . ., x_m)$ für $(i, t, j, k) \in P$ und $t(x_1, . . ., x_m) = \text{true}$ (Registerinhalt gleich $0$ und Verzweigung zu gültiger Adresse)
	- $=(k, x_1, . . ., x_m)$ für $(i, t, j, k) \in P$ und $t(x_1, . . ., x_m) = \text{false}$ (Registerinhalt ungleich $0$ und Verzweigt zu gültiger Adresse) undefiniert sonst (Verzweigung zu einer ungültigen Adresse)

Das erste Argument von $\delta$ gibt die Marke der Anweisung an
Entspricht bei realen Rechnern dem Befehlszähler

Die Maschine startet mit $\delta = (0, x_1, . . ., x_r, 0, . . ., 0)$ und stoppt, wenn die Markierung "*undefiniert*" erreicht wird

Der Inhalt des ersten $s$ [[Register]] enthält dann das Ergebnis

Wird der Wert "*undefiniert*" von der Maschine $R_M$ nicht erreicht, so ist die Funktion $f(x_1, . . ., x_m)$ nicht definiert

---

## Beispiel

Berechnung der Differenz zweier Zahlen $a, b \in N$ und $a \ge B$

$f : N_0 \times N_0 \rightarrow N_0, \space f(a, b) = a - b$ 
$R_2 = (F, T, P, \delta)$ mit $F = \left\{ A_1, A_2, S_1, S_2 \right\}, T = \left\{ T_1, T_2 \right\}$ und $P = \left\{ (0, T_2, 3, 1), (1, S_1, 2), (2, S_2, 0) \right\}$ 

In Befehlsschreibweise:

```Registermaschine
0 : IF T_2 THEN GOTO 1
1 : DO S_1 ; GOTO 2
2 : DO S_2 ; GOTO 0
```

Wie die [[Register]] ihre Anfangsbelegung bekommt, wird nicht beachtet

Sind die Anfangsbelegungen $5$ und $3$ so ergeben sich durch die fortlaufende Anwendung von $\delta$ folgende Momentaufnahmen:

$$\begin{array}{ll}
(0, 5, 3)
& \rightarrow (1, 5, 3) \rightarrow (2, 4, 3) \rightarrow (0, 4, 2) \\
& \rightarrow (1, 4, 2) \rightarrow (2, 3, 2) \rightarrow (0, 3, 1) \\
& \rightarrow (1, 3, 1) \rightarrow (2, 2, 1) \rightarrow (0, 2, 2) \\
& \rightarrow \textbf{(3, 2, 0)} \text{ "\textit{undefiniert}"}
\end{array}$$

Im Zustand $(0, 2, 0)$ stoppt die Maschine, da sie den Sprung `GOTO 3` nicht ausführen kann

---

# Registermaschine mit wahlfreien Zugriff auf Speicherzellen

In der bisherigen [[#Registermaschine]] wird vorausgesetzt, dass in jedem [[Register]] alle drei Registeroperationen implementiert werden können
-> technische Realisierung wäre sehr aufwendig

Es ist sinnvoll ein besonderes [[Register]], den [[Akkumulator]] zu definieren
Nur hier können die Registeroperationen ausgeführt werden

Um das umzusetzen muss ebenfalls die Möglichkeit bestehen, Werte aus anderen [[Register|Registern]] in den [[Akkumulator]] zu laden und das Ergebnis wieder zu zurück in ein [[Register]] zu kopieren 

Registermaschine mit wahlfreiem Zugriff auf Speicherzellen RAMs (Random Access Machines)


![[RandomAccessMachines.drawio.svg]]

[[Register]], Befehlszähler und  [[Akkumulator]] können beliebig große natürliche Zahlen aufnehmen

Alle [[Register]] bilden den [[Arbeitsspeicher|Speicher]] des Rechners

Die [[Register]] werden durch [[Adresse|Adressen]] gekennzeichnet

Ein [[Programm]] besteht aus einer endlichen Folge von [[Befehl|Befehlen]] aus einer Befehlsliste (ähnlich zu denen der heutigen Mikroprozessoren)

Die Programmzeilen sind durchnummeriert

Der Befehlszähler $b$ startet mit dem Wert $1$ und zeigt jeweils die Nummer des auszuführenden [[Befehl|Befehls]] 

Die Eingabe wird zuerst in den ersten [[Register|Registern]] gespeichert

Die weiteren [[Register]], einschließlich des [[Akkumulator|Akkumulators]] ($c(0)$) werde auf $0$ gesetzt

Am Ende der Berechnung stehen die Ergebnisse in festgelegten [[Register|Registern]]

Der Inhalt eines [[Register|Registers]] $i$ wird mit $c(i)$ dargestellt

## Befehlssatz

Operationen mit Registerinhalten $c(i)$:

```
LOAD i :  c(0) := c(i),                 b := b + 1
STORE i : c(i) := c(0),                 b := b + 1
ADD i :   c(0) := c(0) + c (i),         b := b + 1
SUB i :   c(0) := max {c(0) - c(i), 0}, b := b + 1
MULT i :  c(0) := c(0) * c(i),          b := b + 1
DIV i :   c(0) := c(0) / c(i),          b := b + 1 (ganzzahlige Division)
```

Operationen mit Konstanten $k$:

```
DLOAD k : c(0) := k,                 b := b + 1
DADD k :  c(0) := c(0) + k,          b := b + 1
DSUB k :  c(0) := max {c(0) - k, 0}, b := b + 1
DMULT k : c(0) := c(0) * k,          b := b + 1
DDIV k :  c(0) := c(0) / k,          b := b + 1 (ganzzahlige Division)
```

Operationen mit indirekt adressierten Operanden $c(c(i))$:

```
ILOAD i :  c(0)    := c(c(i)),                 b := b + 1
ISTORE i : c(c(i)) := c(0),                    b := b + 1
IADD i :   c(0)    := c(0) + c(c(i)),          b := b + 1
ISUB i :   c(0)    := max {c(0) - c(c(i)), 0}, b := b + 1
IMULT i :  c(0)    := c(0) * c(c(i)),          b := b + 1
IDIV i :   c(0)    := c(0) / c(c(i)),          b := b + 1 (ganzzahlige Division)
```

Sprungbefehle:

```
GOTO j :        b := j
IF ? l GOTO j : b := j falls c(o) = 1 und sonst b := b + 1 mit ? ∈ { =, <, ≤, >, ≥}
```

Halt-Befehl:

```
END : b := b
```

Ähnelt einem abstraktem [[Assembler]] 

Daraus kann man, wenn auch mühevoll, unterschiedliche [[Algorithmus|Algorithmen]] und [[Programm|Programme]] auf Registermaschinen übertragen

Interpretiert man den Inhalt als Zeichen kann man problemlos Alphabete verarbeiten

## Beispiel

Das [[Programm]] liest ein Wort $W$, dessen Elemente Zeichen aus einem Alphabet $\left\{ 0, 1 \right\}$ sind, aus den ersten $r$ [[Register|Registern]] des [[Arbeitsspeicher|Speichers]] un speichert das Wort in umgekehrter Reihenfolge in diesen [[Register|Registern]]

Die [[Register]] $r + 1$ bis $m - 2$ werden als Kellerspeicher benutzt

Das letzte [[Register]] $(m)$ dient als Stack Pointer un im [[Register]] $x = m - 1$ wird die [[Adresse]] gespeichert, an die der nächste Ausgabewert gebracht werden soll

Der Wert $r$ ist bekannt, womit sich folgende Voraussetzungen ergeben:

$$\begin{array}{cc}
s = r & m = 2r + 2
\end{array}$$

```
 1 : DLOAD r
 2 : IF = 0  GOTO 24
 3 : DADD 1
 4 : STORE m
 5 : DSUB r
 6 : ILOAD 0
 7 : ISTORE m
 8 : LOAD m
 9 : DSUB r
10 : IF = r  GOTO 13
11 : LOAD m
12 : GOTO 3
13 : DLOAD 1
14 : STORE x
15 : ILOAD m
16 : ISTORE x
17 : LOAD m
18 : DSUB 1
19 : STORE m
20 : LOAD x
21 : DADD 1
22 : If > r  GOTO 24
23 : GOTO 14
24 : END
```

