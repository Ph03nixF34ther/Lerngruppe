# Lösung linearer Gleichungssysteme

## Inhaltsverzeichnis
1. [Überblick über LGS](#überblick-lineare-gleichungssysteme)
1. [Das gaußsche Eliminationsverfahren](#das-gaußsche-eliminationsverfahren)
1. [Der Gauß-Jordansche Algorithmus](#der-gauß-jordansche-algorithmus)
1. [Die Cramersche Regel](#die-cramersche-regel)
1. [Die lineare Abhängigkeit von LGS]
1. [Parameterabhängige LGS]
1. [Aufgabe: Kaffeeplantage]

## Überblick lineare Gleichungssysteme

Bei linearen Gleichungssystemen wird ein Urbildvektor $x$ über eine Matrix $A$ auf einen Bildvektor $b$ abgeblildet.

$$
x * A = b
$$
$$
A = \text{Koeffizienten-Matrix} \\

x = \text{Urbildvektor} \\

b = \text{Bildvektor}
$$
Die Darstellung lässt sich aus $n$-dimensionalen Gleichungssystemen aus der Schule ableiten:
$$
(x_0 * a_{00}) + (x_1 * a_{01}) + (x_2 * a_{02}) = b_0 \\
(x_1 * a_{10}) + (x_1 * a_{11}) + (x_2 * a_{12}) = b_1 \\
(x_2 * a_{20}) + (x_1 * a_{21}) + (x_2 * a_{22}) = b_2
$$

$$
\begin{pmatrix}
x_0 \\
x_1 \\
x_2
\end{pmatrix}
 * 
\begin{pmatrix}
a_00 & a_01 & a_02 \\
a_10 & a_11 & a_12 \\
a_20 & a_21 & a_22
\end{pmatrix}
 = 

\begin{pmatrix}
b_0 \\
b_1 \\
b_2
\end{pmatrix}
$$

## Das gaußsche Eliminationsverfahren 

### Beschreibung des gaußschen Eliminationsverfahrens

| Gesucht | $x$        |
|---------|------------|
| Gegeben | $b$, $A$    |

Das gaußsche Eliminationsverfahren verändert durch simple Rechenschritte sowohl die Matrix $A$ alsauch den Bildvektor $b$ um die Matrix in eine Dreiecksmatrix umzuwandeln.

Die Variablen des Urbildvektors lassen sich dann aus $A'$ un $b'$ ableiten.

### Beispiel für das gaußsche Eliminationsverfahren
$$
A:= 
\begin{pmatrix} 
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{pmatrix} 
\hspace{1cm}
b := 
\begin{pmatrix} 
10 \\
5 \\ 
20 
\end{pmatrix}
$$
$$
\left[
\begin{array}{ccc}
1 & 0 & 0        \\
-4 & 1 & 0         \\
-3 & 0 & 1
\end{array} 
\right] *
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
4 & -1 & 4 & 5 \\ 
3  & 5 & -2  & 10 
\end{array} 
\right]  = 

\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 2 & -5  & -50
\end{array} 
\right] 
$$
An diesem Punkt könnte man die Suche nach der Dreiecksmatrix beenden, da durch verschiedene Matrizenoperationen, wie Spalten oder Zeilenverschiebungen aus dieser Matrix bereits eine Dreiecksmatrix entsteht. 
Aus gründen der Beispielführung wird die Vorgehenswiese hier nicht abgebrochen sondern fortgeführt
$$
\left[
\begin{array}{ccc}
1 & 0 & 0        \\
0 & 1 & 0         \\
0 & 2 & 5
\end{array} 
\right]
*
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 2 & -5  & -50
\end{array} 
\right] 
 = 
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 0 & -25  & -400
\end{array} 
\right] 
$$

Mit dieser erweiterten Matrix können nun die Parameter bestimmt werden:
$$
-25 * x_3 = -400 \hspace{1cm} \Rightarrow x_3 = 16 \\
-5  * x_2 = -75  \hspace{1cm} \Rightarrow x_2 = 15 \\
x_1 + x_2 + x_3 = 20 \hspace{1cm} \Rightarrow x_1 = -11
$$

## Der Gauß-Jordansche Algorithmus
### Beschreibung des gaußschen Eliminationsverfahrens 

| Gesucht | $x$        |
|---------|------------|
| Gegeben | $b$, $A$   |

1. Das gaußsche Eliminationsverfahren verändert durch simple Rechenschritte sowohl die Matrix $A$ alsauch den Bildvektor $b$ um die Matrix in eine Dreiecksmatrix umzuwandeln.

2. Daraufhin wird die Matrix mit einer $L$ Matrix so multipliziert, dass alle Werte auf der Diagonale $1$ ist.

3. Zuletzt wird das gaußsche Eliminationsverfahren erneut angewandt, sodass die Koeffizieentenmatrix nun zur Einheitsmatrix wird.

Die Variablen müssen jedoch nicht aus der Koeffizientenmatrix und dem Bildvektor gedeutet werden, sondern der Urbildvektor **ist** der veränderte Bildvektor
$$
x = b'
$$

### Beispiel für das gaußsche Eliminationsverfahren
Es wird das Beischpiel aus dem Unterkapitel [Das gaußsche Eliminationsverfahren](#das-gaußsche-eliminationsverfahren) verwendet. Es wird vorrausgesetzt, dass das gaußsche Eliminationsverfahren bereits angewandt wurde.
$$
A:= 
\begin{pmatrix} 
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{pmatrix} 
\hspace{1cm}
b := 
\begin{pmatrix} 
10 \\ 
5 \\ 
20 
\end{pmatrix}
$$
---
$$
\Rightarrow
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 0 & -25  & -400
\end{array} 
\right] 
$$
---
$$
\left[
\begin{array}{ccc}
1 & 0 & 0        \\
0 & -0.2 & 0         \\
0 & 0 & -0.04
\end{array} 
\right] *
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 0 & -25  & -400
\end{array} 
\right] =
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & 1 & 0 & 15 \\ 
0  & 0 & 1  & 16
\end{array} 
\right]
$$
$$
\left[
\begin{array}{ccc}
1 & -1 & -1        \\
0 & 0 & 0         \\
0 & 0 & 0
\end{array} 
\right]* 
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & 1 & 0 & 15 \\ 
0  & 0 & 1  & 16
\end{array} 
\right]
 =

\left[
\begin{array}{ccc|c}
1 & 0 & 0 & -11 \\
0 & 1 & 0 & 15 \\ 
0  & 0 & 1  & 16
\end{array} 
\right]
$$
Das Ergebnis steht im Vektor $b'$. Dieser ist der erweiterte Teil der Matrix (hinter dem Strich).

D.h. Das Ergebnis ist $x_0 = -11$, $x_1 = 15$ und $x_2 = 16$. 

## LGS lösen mithilfe der cramerschen Regel
### Beschreibung des gaußschen Eliminationsverfahrens 

| Gesucht | $x$        |
|---------|------------|
| Gegeben | $b$, $A$   |

Die Cramersche Regel findet die Lösungsvariable $x_z$, indem die Determinante der Koeffizientenmatrix, deren Spalte $z$ durch den Bildvektor ersetzt wurde, durch die Determinante $det(A)$ geteilt wird.

$$
x_i = \frac{det(A_i)}{det(A)}
$$

1. Errechne die Determinante $det(A)$

2. Setze den Bildvektor an der $i$ ten Spalte der Koeffizientenmatrix $A$ ein (diese neue Matrix heißt $A_i$)

3. Errechne die Determinante $det(A_i)$
1. Rechne $x_i = \frac{det(A_i)}{det(A)}$

### Beispiel für das Lösen eines LGS mittels der Cramerschen Regel
$$
A:= 
\begin{pmatrix} 
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{pmatrix} 
\hspace{1cm}
b := 
\begin{pmatrix} 
10 \\ 
5 \\ 
20 
\end{pmatrix}
$$
---
$$
det\left(\left[
\begin{array}{ccc}
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{array}\right]\right):= -33
$$
Die Determinante ist $\not = 0$, dh. es gibt eine Lösung des LGS.
$$
det\left(\left[
\begin{array}{|c|cc}
10 & 5 & -2 \\ 
5 & -1 & 4 \\ 
20 & 1 & 1 
\end{array}\right]\right):= 275
\hspace{1cm}
\Rightarrow x_0 = \frac{275}{-25} = \underline{\underline{-11}}
$$
$$
det\left(\left[
\begin{array}{c|c|c}
3 & 10 & -2 \\ 
4 & 5 & 4 \\ 
1 & 20 & 1 
\end{array}\right]\right):= -375
\hspace{1cm}
\Rightarrow x_1 = \frac{-375}{-25} = \underline{\underline{15}}
$$
$$
det\left(\left[
\begin{array}{cc|c|}
3 & 5 & 10 \\ 
4 & -1 & 5 \\ 
1 & 1 & 20 
\end{array}\right]\right):= -400
\hspace{1cm}
\Rightarrow x_2 = \frac{-400}{-25} = \underline{\underline{16}}
$$
# Lineare Abhängigkeit von LGS
