Die Partialbruchzerlegung oder Partialbruchentwicklung ist die Darstellung einer rationalen Funktion als Summe einer Polynomfunktion und Brüchen, welche als Nenner die Linearfaktoren des Nenner Polynoms der rationalen Funktion besitzen.

Im weiteren Verlauf wird die Partialbruchzerlegung an einem konkreten Beispiel erläutert.

$$
\text{Rationale Ausgangsfunktion:}
\ \ \ \ \ \ 
\frac{2x^2-6x-32}{x^3+x^2-17x+15}
$$
Im ersten Schritt müssen die Nullstellen des Nenners berechnet werden. Das Bestimmen dieser Nullstellen ist in diesem Fall mittels Polynomdivision möglich. Dafür wird zunächst eine Nullstelle geraten und berechnet. Im Anschluss werden alle anderen Nullstellen berechnet. Da dieser Schritt deutlich einfacher mit dem Taschenrechner berechnet werden kann wird dieses Vorgehen hier nicht behandelt.
$$
0=x^3+x^2-17x+15 \ \to \
\begin{bmatrix}
3 \\
1 \\
-5
\end{bmatrix}
$$
Im zweiten Schritt wird die tatsächliche Partialbruchzerlegung vorgenommen. Dafür wird zunächst mithilfe der berechneten Nullstellen eine Linearfaktorzerlegung vorgenommen.
$$
\frac{2x^2-6x-32}{(x-1)\cdot(x-3)\cdot(x+5)}
=
\frac{A}{x-1}+\frac{B}{x-3}+\frac{C}{x+5}
$$
$$
\frac{2x^2-6x-32}{(x-1)\cdot(x-3)\cdot(x+5)}
=
\frac{A}{x-1}+\frac{B}{x-3}+\frac{C}{x+5}
\ \ \ |\ \cdot
(x-1)\cdot(x-3)\cdot(x+5)
$$
$$
2x^2-6x-32=A\cdot(x-3)\cdot(x+5)+B\cdot(x-1)\cdot(x+5)+C\cdot(x-1)\cdot(x-3)
$$
$$
2x^2-6x-32=A\cdot(x^2+5x-3 x-15)+B\cdot(x^2+5x-x-5)+C\cdot(x^2-3x-x+3)
$$
$$
=A\cdot(x^2+2x-15)+B\cdot(x^2+4x-5)+C\cdot(x^2-4x+3)
$$
$$
=A\cdot x^2+2Ax-15A+Bx^2+4Bx-5B+Cx^2-4Cx+3C
$$
$$
=x^2\cdot(A+B+C)+x\cdot(2A+4B-4C)+(-15A-5B+3C)
$$
Im letzten Schritt findet der Koeffizientenvergleich statt.
$$
2x^2-6x-32=x^2\cdot(A+B+C)+x\cdot(2A+4B-4C)+(-15A-5B+3C)
$$
$$
\to A+B+C=2
$$
$$
\to 2A+4B-4C=-6
$$
$$
\to -15A-5B+3C=-32
$$
Damit kann nun ein Lineares Gleichungssystem aufgestellt und mit dem [[Das gaußsche Eliminationsverfahren|Gaußschen Eliminationsverfahren]] gelöst werden.
$$
A=
\begin{bmatrix}
1 & 1 & 1 \\
2 & 4 & -4 \\
-15 & -5 & 3
\end{bmatrix}
;\ \ \ \ \ \ \ b=
\begin{bmatrix}
2 \\
-6 \\
-32
\end{bmatrix}
\to lsolve(A, b)=
\begin{bmatrix}
3 \\
-2 \\
1
\end{bmatrix}
$$
Daraus ergibt sich, dass A=3, B=-2 und C= 1 ist. Setzen wir das nun in die Gleichung ein erhalten wird das umgeformte Ergebnis der Partialbruchzerlegung.
$$
\frac{A}{x-1}+\frac{B}{x-3}+\frac{C}{x+5}
\to
\frac{3}{x-1}-\frac{2}{x-3}+\frac{1}{x+5}
$$

