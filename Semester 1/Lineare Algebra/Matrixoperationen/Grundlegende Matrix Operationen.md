
### Multiplikation von Matrizen

Bei der Multiplikation von Matrizen (A * B = C) wird jede Zeile der Matrix A mit jeder Spalte der Matrix B multipliziert. Hierbei ist es wichtig, dass die Dimensionen der zu multiplizierenden Matrizen identisch ist. Einfach ausgedrückt bedeutet das in diesem Fall, dass Matrix A die gleiche Anzahl Zeilen wie Matrix B Spalten hat. Die Multiplikation von Matrizen ist **nicht kommutativ**. Das heißt, dass A * B nicht zwingend das gleiche wie B * A ist. Ein Beispiel für die Matrizenmultiplikation sieht wie folgt aus:

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

Bei der Addition von Matrizen (A + B = C) werden die einzelnen Elemente von A und B addiert und tauchen dabei im Ergebnis C an der identischen wieder Stelle auf. Ein Beispiel für die Matrizenaddition sieht wie folgt aus:

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

Bei der Subtraktion von Matrizen (A - B = C) werden die einzelnen Elemente von A und B subtrahiert und tauchen dabei im Ergebnis C an der identischen Stelle wieder auf. Ein Beispiel für die Matrizenaddition sieht wie folgt aus:

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

## Determinante  von Matrizen (siehe Addition)



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
