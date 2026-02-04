---
aliases:
  - komplexen Zahlen
  - komplexen Zahl
---

# Zusammenfassung

Komplexe Zahlen $\mathbb{C}$ erweitern die reellen Zahlen $\mathbb{R}$, um das Wurzelziehen negativer Werte zu ermöglichen

Sie werden in der Form $z = a + b \mathrm{i}$ notiert

- $a$ ist der reelle Teil
- $b$ ist der imaginäre Teil

Sie können geometrisch als

- Punkt in der Zahlenebene
- Vektor vom Nullpunkt zu diesem Punkt
- Vektor im Sinne einer Menge parallelgleicher Pfeile

interpretiert werden.

---

# Erklärung

Die Menge der komplexen Zahlen wird mit $\mathbb{C}$ beschrieben und erweitert die Menge der reellen Zahlen $\mathbb{R}$ 

$$\mathbb{N} \subset \mathbb{Z} \subset \mathbb{Q} \subset \mathbb{R} \ \boxed{\subset \mathbb{C}}$$

Für die reellen Zahlen $\mathbb{R}$ gilt die Einschränkung, dass für negative Zahlen keine Wurzel $\sqrt[n]{-x}$ mit geraden Faktor $n$ gezogen werden kann

$$\begin{array}{c|c}
\sqrt[n]{ -x } = \emptyset & x \in \mathbb{R}, \dfrac{n}{2} \in \mathbb{N}
\end{array}$$ 
Um diese Operation zu erlauben, wird eine [[Imaginäre Einheit|imaginäre Einheit]] $\mathrm{i}$ eingeführt, welche wie folgt definiert wird
$$\begin{array}{c} \\
x^2 = -1 \\
x = \mathrm{i} \\
 \\
\mathrm{i} = \sqrt{-1} \\
\mathrm{i} * \mathrm{i} = -1
\end{array}$$

Sonst rechnet man mit der [[Imaginäre Einheit|imaginären Einheit]] wie mit einer Variable mit der Sonderregelung $\mathrm{i} * \mathrm{i} = -1$ 

Komplexe Zahlen werden in der Form
$$\begin{array}{c|c}
a + b\mathrm{i} & a, b \in \mathbb{R}
\end{array}$$
definiert, wobei $a$ als reeller Teil und $b$ als imaginärer Teil bezeichnet wird.

Man rechnet wie mit reellen Zahlen aber berücksichtigt $\mathrm{i}^2 = -1$ 

Da die komplexen Zahlen $\mathbb{C}$ die reellen Zahlen $\mathbb{R}$ erweitern, kann jede reelle Zahl $\mathbb{R}$ auch als eine komplexe Zahl $\mathbb{C}$ mit $0$ für den imaginären Teil dargestellt werden
$$5 = 5 + 0\mathrm{i}$$

> [!Tip]- Rechenbeispiele
> 
> Vereinfache: 
> 
> $(2 - 5\mathrm{i}) + (5 + 2\mathrm{i})$
> > [!Success]- Lösung
> > $= 2 - 5\mathrm{i} + 5 + 2\mathrm{i}$
> > $= 2 + 5 + 2\mathrm{i} - 5\mathrm{i}$
> > $\underline{= 7 - 3\mathrm{i}}$
> 
> $(1 + \mathrm{i})^4$
> > [!Success]- Lösung
> > $= (( 1 + \mathrm{i})( 1 + \mathrm{i}))^2$
> > $= (1 + 2\mathrm{i} + \mathrm{i}^2)^2$
> > $= (1 + 2\mathrm{i} - 1)^2$
> > $= (2\mathrm{i})^2$
> > $= 4\mathrm{i}^2$
> > $= 4 * (-1)$
> > $\underline{= -4}$
> 
> $\dfrac{4 + 5\mathrm{i}}{3 - 4\mathrm{i}}$
> > [!Success]- Lösung
> > $=\dfrac{(4 + 5\mathrm{i}) * (3 + 4\mathrm{i})}{(3 - 4\mathrm{i}) * (3 + 4\mathrm{i})}$
> > $=\dfrac{12 + 16\mathrm{i} + 15\mathrm{i} + 20\mathrm{i}^2}{9 - (\mathrm{4i})^2}$
> > $= \dfrac{12 + 16\mathrm{i} + 15\mathrm{i} + 20 (-1)}{9 - 16(-1)}$
> > $\underline{= \dfrac{-8 + 31\mathrm{i}}{25} = - 0.32 + 1.24\mathrm{i}}$

---

## Darstellung als Punkte

Nun hat man die [[#Erklärung]], warum es die komplexen Zahlen gibt, aber wie kann man sich das Vorstellen
Hier ist der Zahlenstrahl der die gesamte Menge der reellen zahlen $\mathbb{R}$ dargestellt
Heißt alle reellen Zahlen $\mathbb{R}$ passen auf diesen Zahlenstrahl

Hier sind die Zahlen $-4$, $-\dfrac{1}{3}$, $\sqrt{2}$, $2$ und $\pi$ auf dem Zahlenstrahl aufgeführt

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
    x=40pt,
    y=40pt,
    axis y line=none,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    ymin=0, ymax=0
]
\addplot coordinates {(2,0)} node[above]{$2$};
\addplot coordinates {(-4,0)} node[above]{$-4$};
\addplot coordinates {(-1/3,0)} node[above]{$-\frac{1}{3}$};
\addplot coordinates {({pi},0)} node[above]{$\pi$};
\addplot coordinates {({sqrt(2)},0)} node[above]{$\sqrt{2}$};
\end{axis}
\end{tikzpicture}
\end{document}
```

Keine dieser Zahlen und generell keine Zahl auf diesem Zahlenstrahl, haben kein negatives Quadrat

Positive Zahlen zum Quadrat sind Positiv, Negative Zahlen zum Quadrat sind ebenfalls positiv und 0 zum Quadrat ist 0

Somit findet $\mathrm{i}$ keinen Platz auf dem Zahlenstrahl

Gauß kam auf die Idee die Zahlengerade auf die zweite Dimension zu erweitern und $\mathrm{i}$ oberhalb der $0$ zu platzieren

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
    x=40pt,
    y=40pt,
    axis y line=none,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    ymin=0, ymax=2
]
\addplot coordinates {(0,1)} node[left]{$\mathrm{i}$};
\end{axis}
\end{tikzpicture}
\end{document}
```

Das lässt sich auf alle komplexen Zahlen $a + b\mathrm{i}$ übertragen wo $a$ als die x-Koordinate und $b$ als die y-Koordinate interpretiert wird

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
	x=40pt,
    axis y line=center,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $1\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-2, ymax=5
]
\addplot coordinates {(1,1)} node[above]{$1+\mathrm{i}$};
\addplot coordinates {(-3,2)} node[above]{$-3+2\mathrm{i}$};
\addplot coordinates {(3,-1)} node[above]{$3-1\mathrm{i}$};
\addplot coordinates {(-2,1)} node[above]{$-2+\mathrm{i}$};
\end{axis}
\end{tikzpicture}
\end{document}
```

Somit kann man sich die komplexen Zahlen als Punkte in der Zahlenebene vorstellen

Wie wir zuvor festgestellt haben lassen sich reelle Zahlen als $a+0\mathrm{i}$ darstellen damit liegen sie in der Ebene auf der x-Achse, der Zahlenstrahl

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
	x=40pt,
    axis y line=center,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $1\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-2, ymax=5
]
\addplot coordinates {(-2,1)} node[above]{$-2+\mathrm{i}$};
\addplot coordinates {(1,0)} node[above]{$1+0\mathrm{i}$};
\addplot coordinates {(-2,0)} node[above]{$-2+0\mathrm{i}$};
\addplot coordinates {(pi,0)} node[above]{$\pi+0\mathrm{i}$};
\end{axis}
\end{tikzpicture}
\end{document}
```

---

## Darstellung als Vektoren

Kommen wir wieder zur Zahlengeraden

Reelle Zahlen auf dem Zahlenstrahl kann man sich auch als Abstand zum Nullpunkt vorstellen und diesen als Vektor einzeichnen

Beispielsweise die Zahl $4$ kann als folgender Vektor $\vec{4}$ eingezeichnet werden

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
    x=40pt,
    y=40pt,
    axis y line=none,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    ymin=0, ymax=0
]  
% Define start and end coordinates
\coordinate (A) at (axis cs:0,0);
\coordinate (B) at (axis cs:4,0);

% Draw vector from A to B 
\draw[->, thick, red] (A) -- (B) node[midway, above, sloped] {$\vec{4}$};
\end{axis}
\end{tikzpicture}
\end{document}
```

Dieses Konzept lässt sich genauso auf komplexe Zahlen übertragen

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
	x=40pt,
    axis y line=center,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $1\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-2, ymax=5
]
\coordinate (N) at (axis cs:0,0);
\coordinate (A) at (axis cs:3,2);
\coordinate (B) at (axis cs:{-4},3);
\draw[->, thick, red] (N) -- (A) node[midway, above, sloped] {$3+2\mathrm{i}$};
\draw[->, thick, red] (N) -- (B) node[midway, above, sloped] {$-4+3\mathrm{i}$};
\end{axis}
\end{tikzpicture}
\end{document}
```

Jeder komplexen Zahl $z = a + b\mathrm{i}$ mit $a,b \in \mathbb{R}$ wird ein Pfeil in der Zahlenebene vom Nullpunkt zum Punkt $(a; b)$ zugeordnet.

Die Menge aller hierzu parallelgleichen Pfeile ist ein Vektor, der ebenfalls mit $z$ bezeichnet wird.
(Pfeile nennt man „parallelgleich“, wenn sie parallel sind, gleich lang sind und in die gleiche Richtung zeigen.)

Beispiel:
$\vec{z_1} = \vec{z_2}$

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
	x=40pt,
    axis y line=center,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $1\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-2, ymax=5
]
\coordinate (N) at (axis cs:0,0);
\coordinate (A) at (axis cs:-4,3);
\coordinate (B) at (axis cs:-2,4);
\coordinate (C) at (axis cs:2,1);

\draw[->, thick, red] (N) -- (A) node[midway, above, sloped] {$\vec{z_1}$};
\draw[->, thick, red] (C) -- (B) node[pos=.40, above, sloped] {$\vec{z_2}$};

\end{axis}
\end{tikzpicture}
\end{document}
```
