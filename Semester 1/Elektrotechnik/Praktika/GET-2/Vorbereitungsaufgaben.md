# Aufgabe 1

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
    xmin=0, xmax=.045,
    ymin=-2, ymax=3.5,
	xticklabel style={
        /pgf/number format/fixed,
        /pgf/number format/precision=5
	},
	trig format plots = rad,
scaled x ticks=false
]
\addplot[smooth,green,mark=none, domain=0:0.04,samples=40, thick]
{2*sin(2*pi*50*x)+1};
\end{axis}
\end{tikzpicture}
\end{document}
```

# Aufgabe 2

## Teil a

![[Oszilloskop.png]] 

## Teil b

$$
f = \dfrac{1}{T} = \dfrac{1}{10\ \mu \text{s}} = 10 \text{ kHz}
$$

$$
\hat{U} = 2.5 \text{ V}
$$

$$
U_{\text{eff}} = \dfrac{\hat{U}}{\sqrt{2}} = 1.77 \text{ V}
$$

# Aufgabe 3

## Teil a

Laut Anleitung wird bei **DC** das Triggersignal mit allen Signalteilen (Gleich- und Wechselspannung) an die Triggerschaltung [^1]

Bei **AC** wird das Triggersignal über einen Hochpassfilter mit einer unteren Grenzfrequenz von 5 Hz angekoppelt, außer bei Normaltriggerung wird hierbei der Triggerpegel automatisch auf den maximalen und minimalen Spitzenwert des Signales begrenzt[^1]

[^1]: https://backstage.dhge.de/pluginfile.php/61191/mod_resource/content/1/Oszilloskop_HAMEG_HMO72x.pdf

## Teil b

Das Signal wird als sinusförmige Kurve ohne den absoluten Anteil dargestellt

# Aufgabe 4

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}[
    dot/.style={draw, fill=#1, circle, inner sep=1.5pt},
    filled/.style={dot},
    open/.style={dot=white},
]
\begin{axis}[
	width=\textwidth,
    axis lines=center,
    xmin=0, xmax=.5,
    ymin=0, ymax=11,
    xlabel={$t[s]$},
    ylabel={$I[$ mA$], U[$ V$]$},
	xticklabel style={
        /pgf/number format/fixed,
        /pgf/number format/precision=5
	},
	trig format plots = rad,
	scaled x ticks=false,
	xlabel near ticks,
	%ylabel near ticks
]

\addplot[smooth,green,mark=none, domain=0:.5,samples=40, thick]
{10 * (1-e^(-(x*10))} node[above,pos=.75] {$U$};

\addplot[smooth,red,mark=none, domain=0:.5,samples=40, thick] {(10) *(e^(-(x*10))} node[above,pos=.75] {$I$};

\addplot[smooth,black, dotted,mark=none, domain=0:.1,samples=10, thick] {100*x};

\draw[black, dotted, thick, dash pattern=on 5 off 2] (axis cs:0,10) -- (axis cs:.5,10) node[midway, above] {$10$ mA};

\draw[thick, dotted, black] (axis cs:0.1,0) -- (axis cs:0.1,10) node[right,pos=0.02] {$\tau$};

\end{axis}
\end{tikzpicture}
\end{document}
```

$$\begin{array}{l}
\tau = C \cdot R = 100\ \mu \text{F} \cdot 1 \text{ k}\ohm = 0.1 \text{ s}
\end{array}$$

# Aufgabe 5

$$
\tau = \dfrac{L}{R}
$$

# Aufgabe 6

$$\begin{array}{l}
f_1 = \sin(2 \cdot \pi \cdot f \cdot t) \\
f_2 = \sin(2 \cdot \pi \cdot f \cdot t + \varphi)
\end{array}$$
$$\begin{array}{l|l}
\sin(2 \cdot \pi \cdot f \cdot \left( t + \Delta t \right)) = \sin(2 \cdot \pi \cdot f \cdot t + \varphi) & \sin \text{ fällt weg im Bereich } 0;2\pi \\
2 \cdot \pi \cdot f \cdot \left( t + \Delta t \right) = 2 \cdot \pi \cdot f \cdot t + \varphi & \text{Ausmultiplizieren} \\
2 \cdot \pi \cdot f \cdot t + 2 \cdot \pi \cdot f \cdot \Delta t = 2 \cdot \pi \cdot f \cdot t + \varphi & - 2 \cdot \pi \cdot f \cdot t \\
2 \cdot \pi \cdot f \cdot \Delta t = \varphi
\end{array}$$

$$
\underline{\varphi = 2 \cdot \pi \cdot f \cdot \Delta t}
$$

# Aufgabe 7

$$\begin{array}{l}
\omega_0 = \sqrt{\dfrac{1}{L \cdot C}} = \sqrt{\dfrac{1}{100 \text{ mH} \cdot 22 \text{ nF}}} = 21320.1 \text{ Hz} \\
f_r = \dfrac{\omega_0}{2 \pi} = 3393.19 \text{ Hz}
\end{array}$$

# Aufgabe 8

Haben wir nicht behandelt