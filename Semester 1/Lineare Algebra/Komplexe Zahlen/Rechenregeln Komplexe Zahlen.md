# Zusammenfassung

Die [[#Konjugation]] von einer [[Komplexe Zahlen|komplexen Zahl]] $z$ bildet sich aus dem reellen Teil und dem umgekehrten imaginären Teil

$$
z = a + b \mathrm{i}
$$
$$
\overline{z} = a - b \mathrm{i}
$$

Der [[#Betrag]] $\left| z \right|$ und das [[#Argument]] $\varphi$ von einer [[Komplexe Zahlen|komplexen Zahl]] $z$ lassen sich wie folgt bestimmen

$$\begin{array}{c}
z = a + b \mathrm{i} \\
z = 2 + 3 \mathrm{i}
\end{array}$$

$$\begin{array}{l}
\left| z \right| = \sqrt{a^2 + b^2} = \sqrt{2^2 + 3^2} = 5 \\
\varphi = \arctan(\dfrac{b}{a}) = \arctan(\dfrac{3}{2}) = 56.31 \degree
\end{array}$$

Beim [[#Addition|Addieren]] oder [[#Subtraktion|Subtrahieren]] von zwei [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ werden einfach die reellen und imaginären Teile für sich addiert bzw. subtrahiert und daraus bildet sich das Ergebnis

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

Beim [[#Multiplikation|Multiplizieren]] von zwei [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ wird einfach wie mit normalen Variablen gerechnet

$$ \begin{array}{c}
z = 2 + 3 \mathrm{i} \\
w = -4 + \mathrm{i}
\end{array}$$

$$\begin{array}{l|l}
z \cdot w & \text{subst }z, w\\
= (2 + 3 \mathrm{i}) \cdot (-4 + \mathrm{i}) & \text{Aus-Multiplizieren} \\
= -8 + 2 \mathrm{i} - 12 \mathrm{i} + 3 \mathrm{i}^2 & \mathrm{i}^2 = \sqrt{-1}^2 = -1 \\
 = -8 + 2 \mathrm{i} - 12 \mathrm{i} + 3 \cdot (-1) & \text{Zusammenfassen} \\
\underline{= -11 + 10 \mathrm{i}}
\end{array}$$

Beim [[#Multiplikation|Multiplizieren]] der [[Polar-Koordinaten-Form]] werden die [[#Betrag|Beträge]] multipliziert und die [[#Argument|Argumente]] in $E$ addiert

$$\begin{array}{c}
z = \left| z \right| \cdot E(\varphi) \\
z = 3 \cdot E(50 \degree)
\end{array}$$

$$\begin{array}{c}
w = \left| w \right| \cdot E(\psi) \\
w = 2 \cdot E(15 \degree)
\end{array}$$

$$\begin{array}{l|l}
z \cdot w & \text{subst } z, w \\
= 3 \cdot E(50 \degree) \cdot 2 \cdot E(15 \degree) & E(\varphi) \cdot E(\psi) = E(\varphi + \psi) \\
= 3 \cdot 2 \cdot E(65 \degree) & \text{Zusammenfassen} \\
\underline{= 6 \cdot E(65 \degree)}
\end{array}$$

Beim [[#Division|Dividieren]] von zwei [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ wird einfach wie mit normalen Variablen gerechnet

$$\begin{array}{c}
z = 2 + \mathrm{i} \\
w = 1 - 2 \mathrm{i} \\
\dfrac{z}{w} = \mathrm{i}
\end{array}$$

Um die Vereinfachung zu ermöglichen werden Zähler und Nenner mit der [[#Konjugation]] des Nenners multipliziert

Damit ist der Nenner ohne imaginären Teil

$$\begin{array}{l|l}
\dfrac{z}{w} & \text{subst } z, w \\
= \dfrac{2 + \mathrm{i}}{1 - 2 \mathrm{i}} & \cdot \dfrac{1 + 2 \mathrm{i}}{1 + 2 \mathrm{i}} \\
= \dfrac{(2 + \mathrm{i}) \cdot (1 + 2 \mathrm{i})}{(1 - 2 \mathrm{i}) \cdot (1 + 2 \mathrm{i})} & \text{Aus-Multiplizieren} \\
= \dfrac{2 + 4 \mathrm{i} + \mathrm{i} + 2 \mathrm{i}^2}{1 + 2 \mathrm{i} - 2 \mathrm{i} - 4 \mathrm{i}^2} & \mathrm{i}^2 = \sqrt{-1}^2 = -1 \\
= \dfrac{2 + 4 \mathrm{i} + \mathrm{i} + 2 \cdot (-1)}{1 + 2 \mathrm{i} - 2 \mathrm{i} - 4 \cdot (-1)} & \text{Vereinfachen} \\
= \dfrac{2 + 5 \mathrm{i} - 2}{1 + 4} \\
= \dfrac{5 \mathrm{i}}{5}
\end{array}$$
$$
\underline{\dfrac{z}{w} = \mathrm{i}}
$$

Beim [[#Division|Dividieren]] von der [[Polar-Koordinaten-Form]] werden die [[#Betrag|Beträge]] dividiert und die [[#Argument|Argumente]] in $E$ subtrahiert

$$\begin{array}{c}
z = \left| z \right| \cdot E(\varphi) \\
z = 4 \cdot E(80 \degree)
\end{array}$$

$$\begin{array}{c}
w = \left| w \right| \cdot E(\psi) \\
w = 2 \cdot E(30 \degree)
\end{array}$$

$$\begin{array}{l|l}
\dfrac{z}{w} & \text{subst } z, w \\
= \dfrac{4 \cdot E(80 \degree)}{2 \cdot E(30 \degree)} & \dfrac{E(\varphi)}{E8\psi)} = E(\varphi - \psi) \\
= \dfrac{4}{2} \cdot E(80 \degree - 30 \degree) & \text{Vereinfachen} \\
\underline{= 2 \cdot E(50 \degree)}
\end{array}$$

---

# Konjugation

## Erklärung

Es ist eine [[Komplexe Zahlen|komplexe Zahl]] $z$ gegeben

$$
z = a + b \mathrm{i}
$$

Die Konjugation $\overline{z}$ ist die selbe Zahl aber das Vorzeichen vom imaginären Teil wird vertauscht

$$
\overline{z} = a - b \mathrm{i}
$$

---

## Visuelle Darstellung

Die Konjugation von einer [[Komplexe Zahlen|komplexen Zahl]] $z$ ist wie eine Spiegelung um die x-Achse

$$
z = 4 + 3 \mathrm{i}
$$
$$
\overline{z} = 4 - 3 \mathrm{i}
$$

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
	width=\textwidth,
    axis lines=center,
    axis equal,
    xtick={-5,...,0,...,5,6},
    xmin=-1, xmax=4, 
    yticklabels={$-4\mathrm{i}$,$-3\mathrm{i}$,$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$, $6\mathrm{i}$},
    ytick={-4,...,0,1,2,3,4,5,6},
    ymin=-4, ymax=4
]
\coordinate (N) at (axis cs:0,0);
\coordinate (Z) at (axis cs:4,3);
\coordinate (ZK) at (axis cs:4,-3);

\draw[->, thick, green] (N) -- (Z) node[right] {$z$};

\draw[->, thick, red] (N) -- (ZK) node[right] {$\overline{z}$};

\pgfmathsetmacro{\zval}{atan(3/4)}
\draw[->, green, thick] (axis cs:3,0) arc [radius=300, start angle=0, end angle=\zval] node[midway,left] {$\varphi$};

\draw[->, red, thick] (axis cs:3,0) arc [radius=300, start angle=0, end angle=-\zval] node[midway,left] {$-\varphi$};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

# Betrag

## Erklärung

Der Betrag einer [[Komplexe Zahlen|komplexen Zahl]] $\mathbb{C}$ wird durch die Anwendung des Satz des Pythagoras zwischen reellem und imaginären Teil berechnet

$$\begin{array}{c}
z = \left| z \right| \cdot E(\varphi) \\
w = \left| w \right| \cdot E(\psi)
\end{array}$$

$$\begin{array}{l}
z \cdot w = \left| z \right| \cdot \left| w \right| \cdot E(\varphi) \cdot E(\psi) \\
z \cdot w = \left| z \right| \cdot \left| w \right| \cdot E(\varphi + \psi)
\end{array}$$

---

## Visuelle Herleitung

Der Betrag einer [[Komplexe Zahlen|komplexen Zahl]] $\mathbb{C}$ beschreibt den Abstand des Punktes zum Nullpunkt

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white}
]
\begin{axis}[
	width=\textwidth,
    axis y line=center,
    axis x line=center,
    xtick={-5,...,0,...,5},
    xmin=-1, xmax=5, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-1, ymax=5
]
\coordinate (N) at (axis cs:0,0);
\coordinate (A) at (axis cs:2,3);

\draw[->, blue, thick] (N) -- (A) node[color=black, pos=.75, above, left] {$\left| z \right| = \sqrt{13}$};

\fill[black, thick] (A) circle[radius=2pt] node[above] {$2 + 3 \mathrm{i}$};

\draw[green, thick, dotted] (N) -- (A |- N) node[midway, above] {$2$};
\draw[red, thick, dotted] (A |- N) -- (A) node[midway, right] {$3$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Und wie man hier sehen kann, ist es das selbe Prinzip, wie den Betrag von Vektoren zu berechnen

---

# Argument

Das Argument einer [[Komplexe Zahlen|komplexen Zahl]] $\mathbb{C}$ ist der Winkel $\varphi$ zwischen dem positivem Teil der x-Achse und dem Vektor der [[Komplexe Zahlen|komplexen Zahl]]

$$\begin{array}{l}
z = 2 + 3 \mathrm{i} \\
\arg(z) = \varphi \\
\tan(\varphi) = \dfrac{b}{a} \\
\varphi = \arctan(\dfrac{b}{a}) \\
\varphi = \arctan(\dfrac{3}{2}) \\
\underline{\arg(z) = \varphi \approx 0.9828 \text{ rad} \approx 56.31 \degree}
\end{array}$$

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.16}
\begin{document}
\begin{tikzpicture}[
	/pgf/declare function={
        RADIUS = 2;
        RANGE = 1.2;
    }
]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    axis equal,
    xmin=-RANGE, xmax=5,
    xtick={-1,0,...,5},
    ymin=-RANGE, ymax=5,
    ytick={-1,0,...,5},
    yticklabels={$-\mathrm{i}$,0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    disabledatascaling
]
\coordinate (N) at (axis cs:0,0);
\coordinate (Z) at (axis cs:2,3);

\fill[blue] (Z) circle[radius=2pt] node[above] {$2 + 3 \mathrm{i}$};

\draw[->, thick] (N) -- (Z) ;

\draw[red] (N) -- (3,0);

\draw[green] (axis cs:RADIUS,0) arc [radius=RADIUS, start angle=0, end angle=56.31] node[midway,right] {$\varphi = 56.31 \deg$};

\end{axis}
\end{tikzpicture}
\end{document}
```

$$
\arg(0 + 0 \mathrm{i}) = 0
$$

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
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
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

Auch die Subtraktion kann von zwei [[Komplexe Zahlen|komplexer Zahlen]] entspricht der Subtraktion der zwei zugehörigen Vektoren 

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
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
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

# Multiplikation

## Erklärung

Das Multiplizieren zwei [[Komplexe Zahlen|komplexer Zahlen]] $\mathbb{C}$ ist wie mit normalen Variablen zu multiplizieren

$$\begin{array}{c}
z = 2 + 3 \mathrm{i} \\
w = -4 + \mathrm{i} \\
z \cdot w = -11 + 10 \mathrm{i}
\end{array}$$

$$\begin{array}{l|l}
z \cdot w & \text{subst }z, w\\
= (2 + 3 \mathrm{i}) \cdot (-4 + \mathrm{i}) & \text{Aus-Multiplizieren} \\
= -8 + 2 \mathrm{i} - 12 \mathrm{i} + 3 \mathrm{i}^2 & \mathrm{i}^2 = \sqrt{-1}^2 = -1 \\
 = -8 + 2 \mathrm{i} - 12 \mathrm{i} + 3 \cdot (-1) & \text{Zusammenfassen} \\
\underline{= -11 + 10 \mathrm{i}}
\end{array}$$

In der [[Polar-Koordinaten-Form]] betrachtet man zuerst zwei Zahlen $E(\varphi)$ und $E(\psi)$ auf dem Einheitskreis, multiplizieren diese und erweitern sie

$$\begin{array}{ll|l}
E(\varphi) \cdot E(\psi) & = (\cos(\varphi) + \sin(\varphi) \cdot \mathrm{i}) \cdot (\cos(\psi) + \sin(\psi) \cdot \mathrm{i}) \\
& = (\cos(\varphi) \cdot \cos(\psi) - \sin(\varphi) \cdot \sin(\psi)) + \mathrm{i} \cdot (\sin(\varphi) \cdot \cos(\psi) + \cos(\varphi) \cdot \sin(\psi))
\end{array}$$

Jetzt holen wir die [[Additionstheoreme]] heran

$$\begin{array}{l}
\cos(\varphi + \psi) = \cos(\varphi) \cdot \cos(\psi) - \sin(\varphi) \cdot \sin(\psi) \\
\sin(\varphi + \psi) = \sin(\varphi) \cdot \cos(\psi) + \cos(\varphi) \cdot \sin(\psi)
\end{array}$$

Und wenden sie an

$$\begin{array}{ll|l}
E(\varphi) \cdot E(\psi) & = (\cos(\varphi) \cdot \cos(\psi) - \sin(\varphi) \cdot \sin(\psi)) + \mathrm{i} \cdot (\sin(\varphi) \cdot \cos(\psi) + \cos(\varphi) \cdot \sin(\psi)) \\
& = \cos(\varphi + \psi) + \mathrm{i} \cdot \sin(\varphi + \psi) \\
E(\varphi) \cdot E(\psi) & \underline{= E(\varphi + \psi)}
\end{array}$$

Damit können wir feststellen, dass das Ergebnis wieder auf dem Einheitskreis liegt

Nehmen wir nun zwei [[Komplexe Zahlen]] $\mathbb{C}$ und multiplizieren diese

$$\begin{array}{c}
z = \left| z \right| \cdot E(\varphi) \\
w = \left| w \right| \cdot E(\psi)
\end{array}$$

$$\begin{array}{l}
z \cdot w = \left| z \right| \cdot \left| w \right| \cdot E(\varphi) \cdot E(\psi) \\
z \cdot w = \left| z \right| \cdot \left| w \right| \cdot E(\varphi + \psi)
\end{array}$$

Damit erhalten wir, dass die Multiplikation zweier [[Komplexe Zahlen|komplexer Zahlen]] $\mathbb{C}$, die Multiplikation der [[Rechenregeln Komplexe Zahlen#Betrag|Beträge]] und die Addition der [[Rechenregeln Komplexe Zahlen#Argument|Argumente]] bedeutet

---

## Visuelle Darstellung

Es sind zwei [[Komplexe Zahlen|komplexe Zahlen]] $z$ und $w$ gegeben und diese werden multipliziert

$$\begin{array}{c}
z = \sqrt{3} + \mathrm{i} \\
w = 2 \cdot \sqrt{3} + \mathrm{i}
\end{array}$$

$$\begin{array}{l}
z \cdot w \\
= (\sqrt{3} + \mathrm{i}) \cdot (2 \cdot \sqrt{3} + \mathrm{i}) \\
= 6 + \sqrt{3} \mathrm{i} + 2 \cdot \sqrt{3} \mathrm{i} + \mathrm{i}^2 \\
\underline{= 5 + (3 \cdot \sqrt{3}) \mathrm{i}}
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
	width=\textwidth,
    axis lines=center,
    axis equal,
    xtick={-5,...,0,...,5,6},
    xmin=-1, xmax=6, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$, $6\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5,6},
    ymin=-1, ymax=6
]
\coordinate (N) at (axis cs:0,0);
\pgfmathsetmacro{\sval}{sqrt(3)}
\coordinate (Z) at (axis cs:\sval,1);
\pgfmathsetmacro{\wval}{2*sqrt(3)}
\coordinate (W) at (axis cs:\wval,1);
\pgfmathsetmacro{\zwval}{3*sqrt(3)}
\coordinate (ZW) at (axis cs:5,\zwval);

\draw[->, blue, thick] (N) -- (Z) node[above,align=right, text width=3cm] {$z = \sqrt{3} + \mathrm{i}$};

\draw[->, red, thick] (N) -- (W) node[above,right] {$w = 2 \cdot \sqrt{3} + \mathrm{i}$};

\draw[->, green, thick] (N) -- (ZW) node[midway, right] {$z \cdot w = 5 + (3 \cdot \sqrt{3}) \mathrm{i}$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Im ersten Moment scheint das Ergebnis eher wahllos, das wird erst in der [[Polar-Koordinaten-Form]] sichtbar

Es sind zwei [[Komplexe Zahlen|komplexe Zahlen]] $z$ und $w$ in der [[Polar-Koordinaten-Form]] gegeben und diese werden multipliziert

$$\begin{array}{c}
z = 2 \cdot E(30 \degree) \\
w = 3 \cdot E(20 \degree)
\end{array}$$

$$\begin{array}{l}
z \cdot w = 2 \cdot 3 \cdot E(30 \degree + 20 \degree) \\
= 6 \cdot E(90 \degree)
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
	width=\textwidth,
    axis lines=center,
    axis equal,
    xtick={-5,...,0,...,5,6,7},
    xmin=-1, xmax=7, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-1, ymax=5
]

\addplot[->,blue, thick, data cs=polar] coordinates {(0,0) (30,2)} node[above, pos=.75] {$z$};
\addplot[->,red, thick, data cs=polar] coordinates {(0,0) (20,3)} node[below, midway] {$w$};

\draw[red] (axis cs:4,0) arc [radius=400, start angle=0, end angle=50] node[pos=.83,right] {$\arg(w) = 20 \deg$};

\draw[blue, thick] (axis cs:4,0) arc [radius=400, start angle=0, end angle=30] node[midway,right] {$\arg(z) = 30 \deg$};

\addplot[->, green, ultra thick, data cs=polar] coordinates {(0,0) (50,6)} node[above] {$z \cdot w$} node[midway,left,above,align=left,text width=3.5cm] {$\left| z \right| \cdot \left| w \right| = 6$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Somit ist die Multiplikation von [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ wie eine Rotation in die mathematisch positive Richtung um den Nullpunkt und gegebenenfalls eine Streckung

---

# Division

## Erklärung

Das Dividieren zwei [[Komplexe Zahlen|komplexer Zahlen]] $\mathbb{C}$ ist wie mit normalen Variablen zu dividieren

$$\begin{array}{c}
z = 2 + \mathrm{i} \\
w = 1 - 2 \mathrm{i} \\
\dfrac{z}{w} = \mathrm{i}
\end{array}$$

Um das Vereinfachen zu ermöglichen werden Zähler und Nenner mit der [[#Konjugation]] des Nenners erweitert 

Damit ist der Nenner ohne imaginären Teil

$$\begin{array}{l|l}
\dfrac{z}{w} & \text{subst } z, w \\
= \dfrac{2 + \mathrm{i}}{1 - 2 \mathrm{i}} & \cdot \dfrac{1 + 2 \mathrm{i}}{1 + 2 \mathrm{i}} \\
= \dfrac{(2 + \mathrm{i}) \cdot (1 + 2 \mathrm{i})}{(1 - 2 \mathrm{i}) \cdot (1 + 2 \mathrm{i})} & \text{Aus-Multiplizieren} \\
= \dfrac{2 + 4 \mathrm{i} + \mathrm{i} + 2 \mathrm{i}^2}{1 + 2 \mathrm{i} - 2 \mathrm{i} - 4 \mathrm{i}^2} & \mathrm{i}^2 = \sqrt{-1}^2 = -1 \\
= \dfrac{2 + 4 \mathrm{i} + \mathrm{i} + 2 \cdot (-1)}{1 + 2 \mathrm{i} - 2 \mathrm{i} - 4 \cdot (-1)} & \text{Vereinfachen} \\
= \dfrac{2 + 5 \mathrm{i} - 2}{1 + 4} \\
= \dfrac{5 \mathrm{i}}{5}
\end{array}$$

$$
\underline{\dfrac{z}{w} = \mathrm{i}}
$$

In der [[Polar-Koordinaten-Form]] lässt sich aus der [[#Multiplikation]] herleiten

Wir starten wieder mit zwei zahlen $E$ auf dem Einheitskreis

$$\begin{array}{l}
E(\psi) \cdot E(-\psi) \\
= E(\psi - \psi) = E(0) = 1  \\
\end{array}$$
$$\begin{array}{l|l}
1 = E(\psi) \cdot E(-\psi) & \cdot \dfrac{1}{E(\psi)} \\
\dfrac{1}{E(\psi)} = E(-\psi) & \cdot E(\varphi) \\
\dfrac{E(\varphi)}{E(\psi)} = E(\varphi) \cdot E(-\psi)
\end{array}$$
$$\begin{array}{c}
\underline{\dfrac{E(\varphi)}{E(\psi)} = E(\varphi - \psi)}
\end{array}$$

Auch beim Dividieren liegt das Ergebnis wieder auf dem Einheitskreis

Nehmen wir also zwei [[Komplexe Zahlen|komplexe Zahlen]] $\mathbb{C}$ und dividieren diese

$$\begin{array}{c}
z = \left| z \right| \cdot E(\varphi) \\
w = \left| w \right| \cdot E(\psi)
\end{array}$$

$$\begin{array}{l|l}
\dfrac{z}{w} & \text{subst } z, w \\
= \dfrac{\left| z \right| \cdot E(\varphi)}{\left| w \right| \cdot E(\psi)} & \dfrac{E(\varphi)}{E(\psi)} = E(\varphi - \psi)
\end{array}$$
$$\begin{array}{c}
\underline{\dfrac{z}{w} = \dfrac{\left| z \right|}{\left| w \right|} \cdot E(\varphi - \psi)}
\end{array}$$

Damit erhalten wir, dass die Division zweier [[Komplexe Zahlen|komplexer Zahlen]] $\mathbb{C}$, das Dividieren der [[Rechenregeln Komplexe Zahlen#Betrag|Beträge]] und das Subtrahieren der [[Rechenregeln Komplexe Zahlen#Argument|Argumente]] bedeutet

---

## Visuelle Darstellung

Es sind zwei [[Komplexe Zahlen|komplexe Zahlen]] $z$ und $w$ gegeben und diese werden dividiert

$$\begin{array}{c}
z = 2 + \mathrm{i} \\
w = 1 - 2 \mathrm{i} \\
\dfrac{z}{w} = \mathrm{i}
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
	width=\textwidth,
    axis lines=center,
    axis equal,
    xtick={-5,...,0,...,5,6},
    xmin=-1, xmax=4, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$, $6\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5,6},
    ymin=-2, ymax=2
]
\coordinate (N) at (axis cs:0,0);
\coordinate (Z) at (axis cs:2,1);
\coordinate (W) at (axis cs:1,-2);
\coordinate (ZW) at (axis cs:0,1);

\draw[->, blue, thick] (N) -- (Z) node[above] {$z = 2 + \mathrm{i}$};

\draw[->, red, thick] (N) -- (W) node[above,right] {$w = 1 - 2 \mathrm{i}$};

\draw[->, green, thick] (N) -- (ZW)  node[midway, left] {$\frac{z}{w} = \mathrm{i}$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Auch hier erscheint das Ergebnis eher wahllos und wird erst in der [[Polar-Koordinaten-Form]] sichtbar

Es sind zwei [[Komplexe Zahlen|komplexe Zahlen]] $z$ und $w$ in der [[Polar-Koordinaten-Form]] gegeben und diese werden multipliziert 

$$\begin{array}{c}
z = 4 \cdot E(80 \degree) \\
w = 2 \cdot E(30 \degree) \\
\dfrac{z}{w} = 2 \cdot E(50 \degree)
\end{array}$$

$$\begin{array}{l|l}
\dfrac{z}{w} & \text{subst } z, w \\
= \dfrac{4 \cdot E(80 \degree)}{2 \cdot E(30 \degree)} & \dfrac{E(\varphi)}{E8\psi)} = E(\varphi - \psi) \\
= \dfrac{4}{2} \cdot E(80 \degree - 30 \degree) & \text{Vereinfachen} \\
\underline{= 2 \cdot E(50 \degree)}
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
	width=\textwidth,
    axis lines=center,
    xtick={-5,...,0,...,5,6,7},
    xmin=-1, xmax=4, 
    yticklabels={$-2\mathrm{i}$, $-1\mathrm{i}$, 0, $\mathrm{i}$, $2\mathrm{i}$, $3\mathrm{i}$, $4\mathrm{i}$, $5\mathrm{i}$},
    ytick={-2,...,0,1,2,3,4,5},
    ymin=-1, ymax=4
]

\addplot[->,blue, thick, data cs=polar] coordinates {(0,0) (80,4)} node[above, pos=.7, left] {$z$};
\addplot[->,red, thick, data cs=polar] coordinates {(0,0) (30,2)} node[below, midway] {$w$};

\draw[->, blue, thick] (axis cs:1.5,0) arc [radius=150, start angle=0, end angle=80] node[pos=.1,right] {$\arg(z) = 80 \deg$};

\pgfmathsetmacro{\aval}{1.7*cos(80)}
\pgfmathsetmacro{\bval}{1.7*sin(80)}
\draw[->, red, thick] (axis cs:\aval,\bval) arc [radius=170, start angle=80, end angle=50] node[pos=.2, above] {$\arg(w) = 20 \deg$};

\addplot[->, green, ultra thick, data cs=polar] coordinates {(0,0) (50,2)} node[above] {$\frac{z}{w}$} node[pos=0,left,above,align=left,text width=3cm] {$\frac{\left| z \right|}{\left| w \right|} = 2$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Somit ist die Division von zwei [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ eine Rotation in die mathematisch negative Richtung um den Nullpunkt und gegebenenfalls ein Stauchung