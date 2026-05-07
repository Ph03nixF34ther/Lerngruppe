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
