
### Multiplikation von Matrizen

Bei der Multiplikation von Matrizen ($A \cdot B=C$) wird jede Zeile der Matrix A mit jeder Spalte der Matrix B multipliziert. Hierbei ist es wichtig, dass die Dimensionen der zu multiplizierenden Matrizen identisch ist. Einfach ausgedrückt bedeutet das in diesem Fall, dass Matrix A die gleiche Anzahl Zeilen wie Matrix B Spalten hat. Die Multiplikation von Matrizen ist **nicht kommutativ**. Das heißt, dass A * B nicht zwingend das gleiche wie B * A ist. Ein Beispiel für die Matrizenmultiplikation sieht wie folgt aus:

$$
\left[
\begin{matrix}
a & b & c \\
d & e & f \\
g & h & i
\end{matrix}
\right]
*
\left[
\begin{matrix}
j & k & l \\
m & n & o \\
p & q & r
\end{matrix}
\right]
= 
\left[
\begin{matrix}
c*p + b*m + a*j & c*q + b*n + a*k & c*r + b*o + a*l \\
m*e + f*p + d*j & n*e + f*q + d*k & o*e + f*r + d*l \\
i*p + h*m + g*j & i*q + h*n + g*k & i*r + h*o + g*l
\end{matrix}
\right]
$$

## Addieren von Matrizen (siehe Subtraktion)

Bei der Addition von Matrizen ($A+B=C$) werden die einzelnen Elemente von A und B addiert und tauchen dabei im Ergebnis C an der identischen wieder Stelle auf. Ein Beispiel für die Matrizenaddition sieht wie folgt aus:

$$
\left[
\begin{matrix}
a & b & c \\
d & e & f \\
g & h & i
\end{matrix}
\right]
+
\left[
\begin{matrix}
j & k & l \\
m & n & o \\
p & q & r
\end{matrix}
\right]
= 
\left[
\begin{matrix}
a+j & b+k & c+l \\
d+m & e+n & f+o \\
g+p & h+q & i+r
\end{matrix}
\right]
$$

## Subtrahieren  von Matrizen (siehe Addition)

Bei der Subtraktion von Matrizen ($A-B=C$) werden die einzelnen Elemente von A und B subtrahiert und tauchen dabei im Ergebnis C an der identischen Stelle wieder auf. Ein Beispiel für die Matrizenaddition sieht wie folgt aus:

$$
\left[
\begin{matrix}
a & b & c \\
d & e & f \\
g & h & i
\end{matrix}
\right]
-
\left[
\begin{matrix}
j & k & l \\
m & n & o \\
p & q & r
\end{matrix}
\right]
= 
\left[
\begin{matrix}
a-j & b-k & c-l \\
d-m & e-n & f-o \\
g-p & h-q & i-r
\end{matrix}
\right]
$$

## Dreiecksmatrix

Eine Dreiecksmatrix ist eine quadratische Matrix, bei der alle Elemente unterhalb oder oberhalb der Hauptdiagonale null sind. Dies führt zu einer charakteristischen Dreiecksform.

$$
\overbrace{
\left[
\begin{matrix}
x & 0 & 0 \\
x & x & 0 \\
x & x & x
\end{matrix}
\right]}^{\text{\Large obere Dreiecksmatrix}}
\hspace{3cm}
\overbrace{
\left[
\begin{matrix}
x & x & x \\
0 & x & x \\
0 & 0 & x
\end{matrix}
\right]}^{\text{\Large untere Dreiecksmatrix}}
$$

## Determinante  von Matrizen (siehe Addition)

Die Determinante einer Matrix A gibt an, wie sich das Volumen einer aus Eckpunkten erstellten Geometrie skaliert, wenn sie durch die Matrix A abgebildet wird. Einfach gesagt wird durch die Determinante einer Matrix eine Zahl zugeordnet, welche Auskünfte über die Eigenschafften der Matrix gibt. Determinanten lassen sich nur von Quadratischen Matrizen berechnen. Die wichtigste Aussage, die wir aus der Determinante entnehmen können ist die Invertierbarkeit. Eine Matrix A ist nur dann invertierbar, wenn ihre Determinante ungleich Null ist. Angegeben wird sie durch '|'. Also |A| oder det(A). 

$$
\left[
\begin{array}{ccc|cc}
\colorbox{blue}{a} & \colorbox{red}{b} & \colorbox{green}{c} & a & b \\
d & \colorbox{blue}{e} & \colorbox{red}{f} & \colorbox{green}{d} & e \\ 
g  & h & \colorbox{blue}{i}  & \colorbox{red}{g} & \colorbox{green}{h}
\end{array} 
\right]
;
\left[
\begin{array}{ccc|cc}
a & b & \colorbox{orange}{c} & \colorbox{gray}{a} & \colorbox{purple}{b} \\
d & \colorbox{orange}{e} & \colorbox{gray}{f} & \colorbox{purple}{d} & e \\ 
\colorbox{orange}{g}  & \colorbox{gray}{h} & \colorbox{purple}{i}  & g & h
\end{array} 
\right]
$$
$$
= \colorbox{blue}{a*e*i}+\colorbox{red}{b*f*g}+\colorbox{green}{c*d*h}-\colorbox{orange}{g*e*c}-\colorbox{gray}{h*f*a}-\colorbox{purple}{i*d*b}
$$
## Inverse einer Matrix

Bei der Berechnung einer Inversen Matrix x wird eine Matrix gesucht, bei der gilt $A \cdot x = I$. Dabei ist $I$ die Einheitsmatrix der selben Dimension von A. Die Berechnung kann mit der  Findung eines Kehrwertes verglichen werden. Wie z.B. $5 \cdot \frac{1}{5} = 1$. Hierbei ist wichtig, dass A eine quadratische Matrix ist und ihre Determinante ungleich Null ist. Angegeben wird si durch ein '$^{-1}$'. Also $A^{-1}$.

1) Zur Berechnung wird zunächst neben die Matrix A, also der Matrix, zu der du die Inverse Matrix berechnen willst, die Einheitsmatrix schreiben.
2) Im weiteren wird diese Struktur mit dem [[Der Gauß-Jordansche Algorithmus]] nun so umgeformt, dass die Einheitsmatrix auf die andere Seite wandert.

$$
\left[
\begin{array}{ccc|ccc}
\colorbox{green}{2} & 0 & 1 & 1 & 0 & 0 \\
4 & 1 & 2 & 0 & 1 & 0 \\ 
4 & 2 & 0 & 0 & 0 & 1
\end{array} 
\right]
\begin{array}{l}
\colorbox{green}{:2}
\\
\\
\\
\end{array}
\to
\left[
\begin{array}{ccc|ccc}
1 & 0 & 0 & * & * & * \\ 
0 & 1 & 0 & * & * & * \\ 
0 & 0 & 1 & * & * & *
\end{array} 
\right]
$$
$$
\left[
\begin{matrix}
1 & 0 & 0 \\
\colorbox{orange}{-4} & 1 & 0 \\
\colorbox{orange}{-4} & \colorbox{red}{-2} & 1
\end{matrix}
\right]
\cdot
\left[
\begin{array}{ccc|ccc}
\colorbox{green}{1} & 0 & 0,5 & 0,5 & 0 & 0 \\
\colorbox{orange}{4} & 1 & 2 & 0 & 1 & 0 \\ 
\colorbox{orange}{4} & \colorbox{red}{2} & 0 & 0 & 0 & 1
\end{array} 
\right]
$$
$$
\left[
\begin{matrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{matrix}
\right]
\cdot
\left[
\begin{array}{ccc|ccc}
1 & 0 & 0,5 & 0,5 & 0 & 0 \\
\colorbox{orange}{0} & 1 & 0 & -2 & 1 & 0 \\ 
\colorbox{orange}{0} & \colorbox{red}{0} & \colorbox{blue}{-2} & 2 & -2 & 1
\end{array} 
\right]
\begin{array}{l}
\\
\\
\colorbox{blue}{:(-2)}
\end{array}
$$
$$
\left[
\begin{matrix}
1 & 0 & \colorbox{gray}{-0,5} \\
0 & 1 & 0 \\
0 & 0 & 1
\end{matrix}
\right]
\cdot
\left[
\begin{array}{ccc|ccc}
1 & 0 & \colorbox{gray}{0,5} & 0,5 & 0 & 0 \\
0 & 1 & 0 & -2 & 1 & 0 \\ 
0 & 0 & \colorbox{blue}{1} & -1 & 1 & -0,5
\end{array} 
\right]
$$
$$
\left[
\begin{array}{ccc|ccc}
1 & 0 & \colorbox{gray}{0} & 1 & -0,5 & 0,25 \\
0 & 1 & 0 & -2 & 1 & 0 \\ 
0 & 0 & 1 & -1 & 1 & -0,5
\end{array} 
\right]
$$
3) Die Inverse Matrix kann nun auf der rechten Seite abgelesen werden.