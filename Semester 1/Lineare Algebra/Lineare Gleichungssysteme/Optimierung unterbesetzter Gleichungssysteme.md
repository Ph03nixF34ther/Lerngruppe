
# Erklärung

Wenn von einem unterbesetzten Gleichungssystem die Sprache ist, dann bedeutet es, dass das System mehr Variablen als Gleichungen hat

$$\begin{array}{c}
3 \cdot x_0 + 6 \cdot x_1 - 2 \cdot x_2 = 10 \\
- 8 \cdot x_0 - 4 \cdot x_1 + 3 \cdot x_2 = -3
\end{array}$$

In diesem Fall gibt es unendlich viele Lösungen
(Solange sie sich nicht widersprechen, dann gibt es keine Lösung)

In diesem Fall wird z.B. nach der euklidisch kürzesten oder längsten Länge gefragt

Zur Erklärung wird hier die kürzeste Euklidische Länge gesucht

Das Ziel ist es einen Vektor zu finden, welcher nur von einer der Variablen abhängig ist und alle Gleichungen beschreibt, und dann bestimmen für welchen Wert dieser Vektor am kürzesten ist

Als erstes wird die Koeffizientenmatrix $A$ und der Bildvektor $b$ gebildet
(Oder man hat diese gegeben)

$$\begin{array}{lr}
A = \left[\begin{array}{c}
3 & 6 & -2 \\
-8 & -4 & 3
\end{array}\right]
&
b = \left[\begin{array}{c}
10 \\
-3
\end{array}\right]
\end{array}$$

Damit erhalten wir folgende Gleichung

$$\left[\begin{array}{c}
3 & 6 & -2 \\
-8 & -4 & 3
\end{array}\right]
\cdot
\left[\begin{array}{c}
x_0 \\
x_1 \\
x_2
\end{array}\right]
= \left[\begin{array}{c}
10 \\
-3
\end{array}\right]$$

Jetzt wird wahllos eine der Variablen gewählt rausgezogen
Hier $x_2$

$$\left[\begin{array}{c}
3 & 6 \\
-8 & -4
\end{array}\right]
\cdot
\left[\begin{array}{c}
x_0 \\
x_1
\end{array}\right]
+
\left[\begin{array}{c}
-2 \\
3
\end{array}\right]
\cdot
x_2
= \left[\begin{array}{c}
10 \\
-3
\end{array}\right]$$

Und ziehen den rausgezogenen Teil auf die andere Seite

$$\left[\begin{array}{c}
3 & 6 \\
-8 & -4
\end{array}\right]
\cdot
\left[\begin{array}{c}
x_0 \\
x_1
\end{array}\right]
= \left[\begin{array}{c}
10 \\
-3
\end{array}\right]
-
\left[\begin{array}{c}
-2 \\
3
\end{array}\right]
\cdot
x_2$$
$$\left[\begin{array}{c}
3 & 6 \\
-8 & -4
\end{array}\right]
\cdot
\left[\begin{array}{c}
x_0 \\
x_1
\end{array}\right]
= \left[\begin{array}{c}
10 -2 \cdot x_2 \\
-3 - 3 \cdot x_2
\end{array}\right]
$$

Ab hier muss man das Gleichungssystem nach $x_0$ und $x_1$ lösen

Das geht zum Beispiel mit [[Das gaußsche Eliminationsverfahren|dem gaußschen Eliminationsverfahren]] oder wie folgt
Die Inverse der verbleibende Koeffizientenmatrix wird von links Multipliziert, um es auf die andere Seite zu ziehen

$$
\left[\begin{array}{c}
x_0 \\
x_1
\end{array}\right]
=
\left[\begin{array}{c}
3 & 6 \\
-8 & -4
\end{array}\right]^{-1}
\cdot
\left[\begin{array}{c}
10 -2 \cdot x_2 \\
-3 - 3 \cdot x_2
\end{array}\right]
$$
$$
\left[\begin{array}{c}
x_0 \\
x_1
\end{array}\right]
=
\left[\begin{array}{c}
-\dfrac{1}{9} & -\dfrac{1}{6} \\
\dfrac{2}{9} & \dfrac{1}{12}
\end{array}\right]
\cdot
\left[\begin{array}{c}
10 -2 \cdot x_2 \\
-3 - 3 \cdot x_2
\end{array}\right]
$$

Und Ausmultiplizieren

$$
\left[\begin{array}{c}
x_0 \\
x_1
\end{array}\right]
=
\left[\begin{array}{c}
\dfrac{13 \cdot x_2 - 11}{18} \\
\dfrac{-25 \cdot x_2 + 71}{18}
\end{array}\right]
$$

Damit kann man Zeilenweise ablesen

$$\begin{array}{rc}
x_0 = & \dfrac{13 \cdot x_2 - 11}{18} \\
x_1 = & \dfrac{-25 \cdot x_2 + 71}{18}
\end{array}$$

Der Vektor $\vec{v}(x_2)$ wird gebildet und $x_0$ und $x_1$ substituiert

$$
\vec{v}(x_2) = 
\left[\begin{array}{c}
x_0 \\
x_1 \\
x_2
\end{array}\right]
=
\left[\begin{array}{c}
\dfrac{13 \cdot x_2 - 11}{18} \\
\dfrac{-25 \cdot x_2 + 71}{18} \\
x_2
\end{array}\right]
$$

Als nächsten Schritt wird die Funktion $g(x_2)$ mit der Länge des Vektors gebildet
Hier kann man sowohl die euklidische Länge ($\sqrt{a^2+b^2+c^2}$) als auch nur die Länge ($a^2 + b^2 + c^2$) verwendet werden, weil die Wurzel die Stelle des Minimums nicht verändert

$$\begin{array}{cc}
\text{Euklidische Länge} \\
\begin{array}{rl}
g(x_2) & = \left| \vec{v}(x_2) \right| \\
& = \sqrt{\left(\dfrac{13 \cdot x_2 - 11}{18}\right)^2 +  \left(\dfrac{-25 \cdot x_2 + 71}{18}\right)^2 +
\left( x_2\right)^2} \\
& = \dfrac{\sqrt{2 \cdot \left(559 \cdot z^2 - 1918 \cdot z + 2581\right)}}{18}
\end{array}
\end{array}$$
$$\begin{array}{cc}
\text{Länge} \\
\begin{array}{rl}
g(x_2) & = \left(\vec{v}(x_2)\right)^T \cdot \vec{v}(x_2) \\
& = \left(\dfrac{13 \cdot x_2 - 11}{18}\right)^2 +  \left(\dfrac{-25 \cdot x_2 + 71}{18}\right)^2 +
\left( x_2\right)^2 \\
& = \dfrac{559}{162} \cdot z^2 - \dfrac{959}{81} \cdot z + \dfrac{2581}{162}
\end{array}
\end{array}$$

(Hier wird mit der Länge weitergerechnet, weil es einfach kürzer ist)

Von $g(x_2)$ wird jetzt das Minimum über die Ableitung bestimmt

$$
g'(x_2) = \dfrac{d}{dx_2} g(x_2) = \dfrac{559}{81} \cdot x_2 - \dfrac{959}{81}
$$
$$\begin{array}{c}
g'(x) = 0 \\
x = \dfrac{959}{559}
\end{array}$$
Dieser Wert wird in $\vec{v}(x_2)$ eingesetzt und das ist die Lösung für die kürzeste Länge

```tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}
\begin{axis}[
	view={60}{30},
	xlabel={$x$}, ylabel={$y$}, zlabel={$z$},
	xmin=0,xmax=10,
	ymin=0,ymax=10,
	zmin=0,zmin=10,
	axis equal
]
\addplot3[ 
	blue, thick,
	domain=0:10,
	samples=200,
	samples y=1 % Critical: ensures line plot, not mesh 
] ({-11/18+x*(13/18)}, {71/18+x*(-25/18)}, {x});
\addplot3[->, red] coordinates {(0,0,0) ({-11/18},{71/18},0)};
\end{axis}
\end{tikzpicture}
\end{document}
```