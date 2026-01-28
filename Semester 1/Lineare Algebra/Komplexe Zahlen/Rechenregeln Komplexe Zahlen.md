# Zusammenfassung

Beim Addieren oder Subtrahieren von zwei [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ werden einfach die reellen und imaginären Teile für sich addiert bzw. subtrahiert und daraus bildet sich das Ergebnis

$$ \begin{array}{c}
z = 2 + 3 \mathrm{i} \\
w = -4 + \mathrm{i}
\end{array}$$
$$\begin{array}{l|l}
z + w & \text{subst }z, w\\
= (2 + 3 \mathrm{i}) + (-4 + \mathrm{i}) & \text{Terme mit gleichen Variablen zusammen} \\
= (2 - 4) + (3 + 1)\mathrm{i} & \text{Ganz normal addieren}\\
\underline{= -2 + 4\mathrm{i}}
\end{array}$$
$$\begin{array}{l|l}
z - w & \text{subst }z, w\\
= (2 + 3 \mathrm{i}) - (-4 + \mathrm{i}) & \text{Klammer auflösen} \\
= 2 + 3\mathrm{i} + 4 - \mathrm{i} & \text{Terme mit gleichen Variablen zusammen}\\
\underline{= 6 + 2\mathrm{i}}
\end{array}$$

---

# Addition

## Erklärung

Beim Addieren von zwei [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ werden einfach die reellen und imaginären Teile für sich addiert und daraus bildet sich das Ergebnis

$$ \begin{array}{c}
z = 2 + 3 \mathrm{i} \\
w = -4 + \mathrm{i}
\end{array}$$
$$\begin{array}{l|l}
z + w & \text{subst }z, w\\
= (2 + 3 \mathrm{i}) + (-4 + \mathrm{i}) & \text{Terme mit gleichen Variablen zusammen} \\
= (2 - 4) + (3 + 1)\mathrm{i} & \text{Ganz normal addieren}\\
= -2 + 4\mathrm{i}
\end{array}$$

---

## Darstellung als Vektor

Die Addition von zwei [[Komplexe Zahlen|komplexen Zahlen]] entspricht der Addition der zwei zugehörigen Vektoren

$$\begin{array}{c}
z = 2 + 3 \mathrm{i} \\
w = -4 + \mathrm{i} \\
z + w = -2 + 4\mathrm{i}
\end{array}$$

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
\coordinate (A) at (axis cs:2,3);
\coordinate (B) at (axis cs:{-4},1);
\coordinate (AB) at (axis cs:-2,4);

\draw[->, very thick, red] (N) -- (A) node[midway, above, sloped] {$z$};
\draw[->, very thick, blue] (N) -- (B) node[midway, above, sloped] {$w$};
\draw[->, very thick, green] (N) -- (AB) node[midway, above, sloped] {$z + w$};
\draw[->, dotted, thick, blue] (A) -- (AB) node[midway, above, sloped] {$w$};
\end{axis}
\end{tikzpicture}
\end{document}
```

---

# Subtraktion

## Erklärung

Subtraktion zwei [[Komplexe Zahlen|komplexer Zahlen]] funktioniert wie die Addition
Die reellen Teile und die imaginären Teile jeweils miteinander subtrahieren und daraus ergibt sich das Ergebnis

$$\begin{array}{c}
z = 2 + 3 \mathrm{i} \\
w = -4 + \mathrm{i} \\
z + w = -2 + 4\mathrm{i}
\end{array}$$
$$\begin{array}{l|l}
z - w & \text{subst }z, w\\
= (2 + 3 \mathrm{i}) - (-4 + \mathrm{i}) & \text{Klammer auflösen} \\
= 2 + 3\mathrm{i} + 4 - \mathrm{i} & \text{Terme mit gleichen Variablen zusammen}\\
\underline{= 6 + 2\mathrm{i}}
\end{array}$$

---

## Darstellung als Vektor

Auch die Subtraktion kann von zwei [[Komplexe Zahlen|komplexen Zahlen]] entspricht der Subtraktion der zwei zugehörigen Vektoren 

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
    xtick={-5,...,0,...,5,6,7},
    xmin=-5, xmax=7, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $1\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-2, ymax=5
]
\coordinate (N) at (axis cs:0,0);
\coordinate (A) at (axis cs:2,3);
\coordinate (B) at (axis cs:{-4},1);
\coordinate (AB) at (axis cs:6,2);

\draw[->, very thick, red] (N) -- (A) node[midway, above, sloped] {$z$};
\draw[->, very thick, blue] (N) -- (B) node[midway, above, sloped] {$w$};
\draw[->, very thick, green] (N) -- (AB) node[midway, above, sloped] {$z - w$};
\draw[->, dotted, thick, blue] (A) -- (AB) node[midway, above, sloped] {$-w$};
\draw[->, dotted, thick, green] (B) -- (A) node[midway, above, sloped] {$z -w$};
\end{axis}
\end{tikzpicture}
\end{document}
```

---

