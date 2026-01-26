---
aliases:
  - komplexen Zahlen
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

# Darstellung als Punkte

Nun hat man die [[#Erklärung]], warum es die komplexen Zahlen gibt, aber wie kann man sich das Vorstellen



``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
    x=20pt,
    axis y line=none,
    axis x line=center,
    xtick align=outside,
    xtick={-5,...,0,...,5},
    xmin=-5, xmax=5, 
    ymin=0, ymax=0,
    xlabel=$x$,
    xlabel near ticks
]
\addplot coordinates {(2,0)} node[above]{$2$};
\addplot coordinates {(-4,0)} node[above]{$-4$};
\end{axis}
\end{tikzpicture}
\end{document}

```
