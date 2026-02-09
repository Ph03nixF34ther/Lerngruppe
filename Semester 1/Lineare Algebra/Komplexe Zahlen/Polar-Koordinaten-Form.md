# Zusammenfassung

Die Polar-Koordinaten-Form einer Zahl besteht aus dem [[Rechenregeln Komplexe Zahlen#Betrag|Betrag]] $\left| z \right|$ und dem [[Rechenregeln Komplexe Zahlen#Argument|Argument]] $\varphi$ der [[Komplexe Zahlen|komplexen Zahl]] $\mathbb{C}$  und bildet sich wie folgt

$$
E(\varphi) = \cos(\varphi) + \mathrm{i} \cdot \sin(\varphi)
$$

$$
z = \left| z \right| \cdot E(\varphi)
$$

Um von einer [[Komplexe Zahlen|komplexen Zahl]] $\mathbb{C}$ die Polar-Koordinaten-Form zu bekommen, muss man den [[Rechenregeln Komplexe Zahlen#Betrag|Betrag]] und das [[Rechenregeln Komplexe Zahlen#Argument|Argument]] ausrechnen

$$\begin{array}{c}
z = a + b \mathrm{i} \\
z = 3 + 4 \mathrm{i}
\end{array}$$

$$\begin{array}{l}
\left| z \right| = \sqrt{a^2 + b^2} = \sqrt{3^2 + 4^2} = 5 \\
\varphi = \arctan(\dfrac{b}{a}) = \arctan(\dfrac{4}{3}) = 53.13 \degree \\
z = \left| z \right| + E(\varphi) \\
\underline{z = 5 + E(53.13 \degree)}
\end{array}$$

Um zurück in die normale Form zu kommen, berechnet man den reellen Teil $a$ und den imaginären Teil $b$ aus dem [[Rechenregeln Komplexe Zahlen#Betrag|Betrag]] $\left| z \right|$ und dem [[Rechenregeln Komplexe Zahlen#Argument|Argument]] $\varphi$

$$\begin{array}{c}
z = \left| z \right| + E(\varphi) \\
z = 5 + E(53.13 \degree)
\end{array}$$

$$\begin{array}{l}
a = \left| z \right| \cdot \cos(\varphi) = 5 \cdot \cos(53.13 \degree) \approx 3 \\
b = \left| z \right| \cdot \sin(\varphi) = 5 \cdot \sin(53.13 \degree) \approx 4 \\
z = a + b \mathrm{i} \\
\underline{z = 3 + 4 \mathrm{i}}
\end{array}$$

---

# Erklärung

Für die Polarform betrachten wir den Einheitskreis und wie Sinus und Cosinus auf diesem definiert sind

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[
	/pgf/declare function={
        ANGLE = 50;
        RADIUS = .4;
        RANGE = 1.2;
    }
]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    axis equal,
    xmin=-RANGE, xmax=RANGE,
    xtick={-1,0,1},
    ymin=-RANGE, ymax=RANGE,
    ytick={-1,0,1},
    disabledatascaling
]
\coordinate (A) at (axis cs:RADIUS,0);

\addplot [domain=0:2*pi,samples=50] ({cos(deg(x))},{sin(deg(x))});

\addplot[red, thick, data cs=polar] coordinates {(0,0) (ANGLE,1)};

\addplot[ultra thick, orange, data cs=polar] coordinates {(0,0) (0,{cos(ANGLE)})} node[midway,below] {$\cos \alpha$};

\addplot[ultra thick, cyan, data cs=polar] coordinates {(0,{cos(ANGLE)}) (ANGLE,1)} node[midway,right] {$\sin \alpha$};

\draw (A) arc [radius=RADIUS, start angle=0, end angle=ANGLE] node[midway,left] {$\alpha$};

\addplot[black] coordinates {({cos(ANGLE)},{sin(ANGLE)})} node[above] {$P (\cos \alpha | \sin \alpha)$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Wie man sieht, kann jeder Punkt $P$ auf dem Einheitskreis mit $x = \cos(\alpha)$ und $y = \sin{\alpha}$ beschrieben werden

Übertragen wir das wieder auf die Zahlen-Ebene, kann jeder Punkt $E(\varphi)$ wie folgt definiert werden

$$
E(\varphi) = \cos(\varphi) + \mathrm{i} \cdot \sin(\varphi)
$$

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[
	/pgf/declare function={
        ANGLE = 50;
        RADIUS = .4;
        RANGE = 1.2;
    }
]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    axis equal,
    xmin=-RANGE, xmax=RANGE,
    xtick={-1,0,1},
    ymin=-RANGE, ymax=RANGE,
    ytick={-1,0,1},
    yticklabels={$-\mathrm{i}$,0,$\mathrm{i}$},
    disabledatascaling
]
\coordinate (A) at (axis cs:RADIUS,0);

\addplot [domain=0:2*pi,samples=50] ({cos(deg(x))},{sin(deg(x))}) ;

\addplot[->, black, thick, data cs=polar] coordinates {(0,0) (ANGLE,1)} node[above, midway] {$E(\varphi)$};

\addplot[very thick, orange, dotted, data cs=polar] coordinates {(0,0) (0,{cos(ANGLE)})} node[midway,below] {$\cos(\varphi)$};

\addplot[very thick, gray, dotted] coordinates {(0,{sin(ANGLE)}) ({cos(ANGLE)},{sin(ANGLE)})};

\addplot[ultra thick, dotted, cyan] coordinates {(0,0) (0,{sin(ANGLE)})} node[midway,left] {$\mathrm{i} \cdot \sin(\varphi)$};

\addplot[ultra thick, dotted, gray] coordinates {({cos(ANGLE)},0) ({cos(ANGLE)},{sin(ANGLE)})};

\draw (A) arc [radius=RADIUS, start angle=0, end angle=ANGLE] node[midway,left] {$\varphi$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Zu $E(\varphi)$ lassen sich folgende Eigenschaften feststellen

$$\begin{array}{l}
E(\varphi + k \cdot 360 \degree) = E(\varphi) \text{ für } k \in \mathbb{Z} \\
\dfrac{1}{2} (E(\varphi) + E(-\varphi)) = \cos(\varphi) \\
\dfrac{1}{2 \mathrm{i}}(E(\varphi)-E(-\varphi)) = \sin(\varphi)
\end{array}$$

Der reelle Teil $a$ und der imaginäre Teil $b$ lässt sich jeweils mit dem Betrag $\left| z \right|$ und dem Argument $\varphi$ bestimmen

$$\begin{array}{l}
a = \left| z \right| \cdot \cos(\varphi) \\
b = \left| z \right| \cdot \sin(\varphi) 
\end{array}$$

Betrachten wir eine allgemeine [[Komplexe Zahlen|komplexen Zahlen]] $\mathbb{C}$ mit dem [[Rechenregeln Komplexe Zahlen#Betrag|Betrag]] $\left| z \right|$ und dem [[Rechenregeln Komplexe Zahlen#Argument|Argument]] $\varphi$ lässt sich folgender Zusammenhang herleiten

$$
\begin{array}{l|l}
z = a + b \mathrm{i} & a = \left| z \right| \cdot \cos(\varphi) \\
&b = \left| z \right| \cdot \sin(\varphi) \\
= \left| z \right| \cdot \cos(\varphi) + \left| z \right| \cdot \sin(\varphi) \cdot \mathrm{i} & \left| z \right| \, (\quad) \\
= \left| z \right| \cdot (\cos(\varphi) + \sin(\varphi) \cdot \mathrm{i}) & E(\varphi) = \cos(\varphi) + \mathrm{i} \cdot \sin(\varphi) \\
\underline{= \left| z \right| \cdot E(\varphi)}
\end{array}$$


Diese Form nennt man Polar-Koordinaten-Form

## Geometrische Darstellung

Die Darstellung $z = \left| z \right| \cdot E(\varphi)$ kann wie folgt interpretiert werden

- Der Vektor $\vec{z}$ hat die Länge $\left| z \right|$ und das Argument $\varphi$
- Der Vektor $\vec{E(\varphi)}$ hat die Länge $1$ und zeigt in die selbe Richtung wie $\vec{z}$
- Wenn man $\vec{E(\varphi)}$ um den reellen Faktor $\left| z \right|$ streckt, erhält man genau $\vec{z}$

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[
	/pgf/declare function={
        ANGLE = 50;
        RADIUS = .4;
        RANGE = 1.2;
    }
]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    axis equal,
    xmin=-RANGE, xmax=RANGE,
    xtick={-1,0,1},
    ymin=-RANGE, ymax=RANGE,
    ytick={-1,0,1},
    yticklabels={$-\mathrm{i}$,0,$\mathrm{i}$},
    disabledatascaling
]
\coordinate (A) at (axis cs:RADIUS,0);

\addplot [domain=0:2*pi,samples=50] ({cos(deg(x))},{sin(deg(x))}) ;

\addplot[->, green, dotted, thick, data cs=polar] coordinates {(0,0) (ANGLE,1.5)} node[pos=.75, above] {$z$};

\addplot[->, black, thick, data cs=polar] coordinates {(0,0) (ANGLE,1)} node[above, midway, left] {$E(\varphi)$};

\draw (A) arc [radius=RADIUS, start angle=0, end angle=ANGLE] node[midway,left] {$\varphi$};

\end{axis}
\end{tikzpicture}
\end{document}
```

> [!note]- Rechenbeispiele
> 
> Gib die Polar-Koordinaten-Darstellung an
> 
> $z = 1 + \sqrt{3} \mathrm{i}$
> 
> > [!success]- Lösung
> > $= \left| z \right| \cdot E(\varphi)$
> > $\left| z \right| = \sqrt{1^2 + (\sqrt{3})^2} = 2$
> > $\tan(\varphi) = \dfrac{\sqrt{3}}{1}$
> > $\varphi = 60 \degree$
> > $\underline{z = 2 \cdot E(60 \degree)}$
> 
> $z = \mathrm{i}$
> 
> > [!success]- Lösung
> > $z = 2 - 3 \mathrm{i}$
> > $\left| z \right| = \sqrt{2^2 + 3^2} = \sqrt{13}$
> > $\tan(\varphi) = \dfrac{3}{2}$
> > $\varphi = 56.31 \degree$
> > $\underline{z = \sqrt{13} \cdot E(56.31 \degree)}$
> 
> Gib in allgemeiner Form an
> 
> $z = \sqrt{2} \cdot E(45 \degree)$
> 
> > [!success]- Lösung
> > $a = \left| z \right| \cdot \cos(\varphi)$
> > $= \sqrt{2} \cdot \cos(45 \degree) = 1$
> > $b = \left| z \right| \cdot \sin(\varphi)$
> > $= \sqrt{2} \cdot \sin(45 \degree) = 1$
> > $z = a + b \mathrm{i}$
> > $\underline{z = 1 + 1 \mathrm{i}}$
> 
> $z = 4 \cdot E(135 \degree)$
> 
> > [!success]- Lösung
> >  $a = \left| z \right| \cdot \cos(\varphi)$
> > $= 4 \cdot \cos(135 \degree) = -2.8284$
> > $b = \left| z \right| \cdot \sin(\varphi)$
> > $= 4 \cdot \sin(45) = 2.8284$
> > $z = a + b \mathrm{i}$
> > $\underline{z = -2.8284 + 2.8284 \mathrm{i}}$

