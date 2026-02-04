# Zusammenfassung



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

