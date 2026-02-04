Bei der Vollrangzerlegung wird eine Matrix $M$ der Größe $m*n$ in zwei Matrizen $Q$ und $R$ dabei besteht die Matrix $Q$ aus allen [[Die lineare Abhängigkeit von LGS|Linear unabhängige Vektoren]] und die Matrix $R$ aus den Faktoren um die die Matrix $M$ aus den [[Die lineare Abhängigkeit von LGS|Linear unabhängige Vektoren]] zu bilden.

Zur Berechnung wird zuerst der erste Vektor genommen. Dieser wird Transponiert mit dem nächsten multipliziert und geteilt durch den ersten Vektor Transponiert multipliziert mit dem ersten Vektor. Daraus kommt eine Zahl. Wenn der erste Vektor mit dieser Zahl multipliziert den zweiten Vektor ergibt ist er [[Die lineare Abhängigkeit von LGS|Linear unabhängige]]. 

Ein Beispiel:
$$
M = 
\left[
\begin{matrix}
3 & 6 & 5 & 4 \\
2 & 4 & 1 & 9 \\
4 & 8 & 7 & 2
\end{matrix}
\right]
$$
Daraus entnehmen wir uns die Vektoren $v_{0}$ und $v_{1}$:
$$
v_{0} =
\left[
\begin{matrix}
3 \\
2 \\
4
\end{matrix}
\right]
 , v_{1}= 
\left[
\begin{matrix}
6 \\
4 \\
8
\end{matrix}
\right]
$$
$$
\frac{(v_{0})^T*v_{1}
}{(v_{0})^T*v_{0}}
$$
$$
\frac{
[\begin{matrix}
3 & 2 & 4
\end{matrix}] *

\left[
\begin{matrix}
6 \\
4 \\
8
\end{matrix}
\right]}
{
[\begin{matrix}
3 & 2 & 4
\end{matrix}] *

\left[
\begin{matrix}
3 \\
2 \\
4
\end{matrix}
\right]
}
= 
\frac{58}{29}
= 
2
$$
Dementsprechend wird anschließend geprüft, ob der Vektor $v_{0}$ mit 2 multipliziert den Vektor $v_{1}$:
$$
\left[
\begin{matrix}
3 \\
2 \\
4
\end{matrix}
\right]* 2 =
\left[
\begin{matrix}
6 \\
4 \\
8
\end{matrix}
\right]
$$
Das entspricht dem Vektor $v_{1}$.

Nun wird der Vektor $v_{2}$ genommen und das Verfahrener wiederholt:
$$
v_{2} =
\left[
\begin{matrix}
5 \\
1 \\
7
\end{matrix}
\right]
$$
$$\frac{
[\begin{matrix}
3 & 2 & 4
\end{matrix}]*
\left[
\begin{matrix}
5 \\
1 \\
7
\end{matrix}
\right]}
{[\begin{matrix}
3 & 2 & 4
\end{matrix}] *

\left[
\begin{matrix}
3 \\
2 \\
4
\end{matrix}
\right]} = 
\frac{45}{29}
$$
$$
\left[
\begin{matrix}
3 \\
2 \\
4
\end{matrix}
\right]* \frac{45}{29}=
\left[
\begin{matrix}
\frac{135}{29} \\
\frac{90}{29} \\
\frac{180}{29}
\end{matrix}
\right]
$$
Da der entstehende Vektor nicht gleich $v_{2}$ ist, ist der Vektor [[Die lineare Abhängigkeit von LGS|Linear unabhängige]].

Nun wird aus den beiden Vektoren eine Neue Matrix gebildet.
$$
M_{0} = 
\left[
\begin{matrix}
3 & 5 \\
2 & 1 \\
4 & 7
\end{matrix}
\right]
, v_{3} = 
\left[
\begin{matrix}
4\\
9 \\
2
\end{matrix}
\right]
$$
Mit der Matrix $M_{0}$ wird das selbe verfahren wieder angewendet mit $M_{0} = v_{1}$;

$$
\frac{\left[
\begin{matrix}
3 & 2 & 4 \\
5 & 1 & 7
\end{matrix}
\right]*
\left[
\begin{matrix}
4 \\
9 \\
2
\end{matrix}
\right]
}
{
\left[
\begin{matrix}
3 & 2 & 4 \\
5 & 1 & 7
\end{matrix}
\right]*
\left[
\begin{matrix}
3 & 5 \\
2 & 1\\
4 & 7
\end{matrix}
\right]
} =
\left[
\begin{matrix}
6,1 \\
-3,087
\end{matrix}
\right]

$$
$$
\left[
\begin{matrix}
3 & 5 \\
2 & 1\\
4 & 7
\end{matrix}
\right]*
\left[
\begin{matrix}
6,1 \\
-3,087
\end{matrix}
\right]=
\left[
\begin{matrix}
2,865 \\
9,113\\
2,791
\end{matrix}
\right]
$$
Da das Ergebnis nicht mit dem Vektor $v_{3}$ übereinstimmt, ist auch dieser [[Die lineare Abhängigkeit von LGS|Linear unabhängige]].

Aus den [[Die lineare Abhängigkeit von LGS|Linear unabhängigen Vektoren]] $v_{0}, v_{2}, v_{3}$ wird die Matrix $Q$ gebildet:
$$
Q =
\left[
\begin{matrix}
3 & 5 & 4 \\
2 & 1 & 9 \\
4 & 7 & 2
\end{matrix}
\right]
$$
Die Matrix $R$ wird aus den Ergebnissen der Rechnungen gebildet. Die Dimension von $R$ wird so gewählt: 
$R$ hat so viele Zeile, wie $Q$ Spalten hat.   
$R$ hat so viele Spalten, wie $M$ spalten hat.
$$
R = 
\left[
\begin{matrix}
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 
\end{matrix}
\right]
$$
Diese wird gefüllt. Für jeden [[Die lineare Abhängigkeit von LGS|Linear unabhängigen Vektor]] in der Matrix $M$ wird eine 1 in der entsprechenden Zeile und Spalte eingetragen:
$$
R = 
\left[
\begin{matrix}
1 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 
\end{matrix}
\right]
$$
Die noch ungefüllten Zeilen werden mit den Faktoren gefüllt, der zuvor Errechneten [[Die lineare Abhängigkeit von LGS|Linear abhängigen Vektoren]]: 
$$
R = 
\left[
\begin{matrix}
1 & 2 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 
\end{matrix}
\right]
$$
Zur Überprüfung kann nun $Q*R$ rechnen
$$
\left[
\begin{matrix}
3 & 5 & 4 \\
2 & 1 & 9 \\
4 & 7 & 2
\end{matrix}
\right]*
\left[
\begin{matrix}
1 & 2 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 
\end{matrix}
\right] = 
\left[
\begin{matrix}
3 & 6 & 5 & 4 \\
2 & 4 & 1 & 9 \\
4 & 8 & 7 & 2
\end{matrix}
\right]
$$
Damit ist die Zerlegung abgeschlossen. Q erhält alle [[Die lineare Abhängigkeit von LGS|Linear unabhängigen Vektoren]] aus $M$ und Q die Faktoren um $M$ wieder herzustellen.