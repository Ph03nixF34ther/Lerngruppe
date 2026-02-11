# Voraufgaben
## Aufgabe 1

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

## Aufgabe 2

### Teil a

![[Oszilloskop.png]] 

### Teil b

$$
f = \dfrac{1}{T} = \dfrac{1}{10\ \mu \text{s}} = 10 \text{ kHz}
$$

$$
\hat{U} = 2.5 \text{ V}
$$

$$
U_{\text{eff}} = \dfrac{\hat{U}}{\sqrt{2}} = 1.77 \text{ V}
$$

### Aufgabe 3

### Teil a

Laut Anleitung wird bei **DC** das Triggersignal mit allen Signalteilen (Gleich- und Wechselspannung) an die Triggerschaltung [^1]

Bei **AC** wird das Triggersignal über einen Hochpassfilter mit einer unteren Grenzfrequenz von 5 Hz angekoppelt, außer bei Normaltriggerung wird hierbei der Triggerpegel automatisch auf den maximalen und minimalen Spitzenwert des Signales begrenzt[^1]

[^1]: https://backstage.dhge.de/pluginfile.php/61191/mod_resource/content/1/Oszilloskop_HAMEG_HMO72x.pdf

### Teil b

Das Signal wird als sinusförmige Kurve ohne den absoluten Anteil dargestellt

## Aufgabe 4

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

## Aufgabe 5

$$
\tau = \dfrac{L}{R}
$$

## Aufgabe 6

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

## Aufgabe 7

$$\begin{array}{l}
\omega_0 = \sqrt{\dfrac{1}{L \cdot C}} = \sqrt{\dfrac{1}{100 \text{ mH} \cdot 22 \text{ nF}}} = 21320.1 \text{ Hz} \\
f_r = \dfrac{\omega_0}{2 \pi} = 3393.19 \text{ Hz}
\end{array}$$

## Aufgabe 8

Haben wir nicht behandelt

---
# Experimentelles Arbeiten
## Aufgabe 1

### Teil 1

### Teilaufgabe c) d)

| Schleiferstellung an $P_{1}$ |                                              | b                                | c                                | d                                | e                                | f                             | g                             |
| ---------------------------- | -------------------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | ----------------------------- | ----------------------------- |
| Ablenkungskoeffizent         | $A_k \text{ in } \frac{\text{V}}{\text{cm}}$ | $100\frac{\text{mV}}{\text{cm}}$ | $500\frac{\text{mV}}{\text{cm}}$ | $500\frac{\text{mV}}{\text{cm}}$ | $500\frac{\text{mV}}{\text{cm}}$ | $1\frac{\text{V}}{\text{cm}}$ | $1\frac{\text{V}}{\text{cm}}$ |
| Höhe                         | $h \text{ in cm}$                            | $6,5\text{ cm}$                  | $3,2\text{ cm}$                  | $5,1\text{ cm}$                  | $7,1\text{ cm}$                  | $4,6\text{ cm}$               | $5,1\text{ cm}$               |
| Berechnete Spannung          | $U_2 = A_k \cdot h$<br>in V                  | $650 \text{ mV}$                 | $1,6\text{ V}$                   | $2,55\text{ V}$                  | $3,55\text{ V}$                  | $4,6\text{ V}$                | $5,1\text{ V}$                |

---

### Teilaufgabe e)

Um den Bereich zwischen der Nulllinie und dem Strahl zu maximieren und so optisch ein fehlerfreieres Ablesen zu gewährleisten

---

### Teil 2

#### Teilaufgabe c) d)

| Schleiferstellung an $P_{1}$ | b                                | c                                | d                                | e                                | f                                | g                                |
| ---------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- |
| Ablenkungskoeffizent         | $100\frac{\text{mV}}{\text{cm}}$ | $100\frac{\text{mV}}{\text{cm}}$ | $200\frac{\text{mV}}{\text{cm}}$ | $500\frac{\text{mV}}{\text{cm}}$ | $500\frac{\text{mV}}{\text{cm}}$ | $500\frac{\text{mV}}{\text{cm}}$ |
| Höhe                         | $5,8\text{ cm}$                  | $7,4\text{ cm}$                  | $3,2\text{ cm}$                  | $3,7\text{ cm}$                  | $4,4\text{ cm}$                  | $5\text{ cm}$                    |
| Berechneter Spitzenwert      | $580 \text{ mV}$                 | $760\text{ mV}$                  | $640\text{ mV}$                  | $1,7\text{ V}$                   | $2,2\text{ V}$                   | $2,5\text{ V}$                   |
| Effektivwert                 | $205,06\text{ mV}$               | $268,7\text{ mV}$                | $226,27\text{ mV}$               | $601,04\text{ mV}$               | $777,82\text{ mV}$               | $883,88\text{ mV}$               |

---

#### Teilaufgabe e)

Es können Sinusspannungen bis $80\text{ V}$ im Effektivwert gemessen werden, aufgrund der limitierten Ableseskala

---

### Teil 3

#### Teilaufgabe c) d)

$$\begin{array}{l | r}
\text{Messung bei AC}  & \text{Messung bei DC}\\
A_{k AC} = 500 \frac{\text{mV}}{\text{cm}} & A_{k DC} = 500 \frac{\text{mV}}{\text{cm}} \\
h_{ppAC} = 4,9 \text{ cm} & h_{pp DC} = 4,9 \text{ cm} \\
U_{pp 2 AC} = 2,45 \text{ V} & U_{pp 2 DC} = 2,47 \text{ V} \\
U_{2effAC} = 864 \text{ mV} & U_{2effDC} = 983 \text{ mV} \\
U_{\text{offset - AC}} = -10 \text{ mV} \quad& \qquad U_{\text{offset - DC}} = 478 \text{ mV}
\end{array}$$

---

#### Teilaufgabe e)

Die gesamte Offsetspannung von $1\text{V}$ teilt sich an beiden Widerständen, die gleich groß sind gleichmäßig aufm darum ergibt sich ein $\Delta U_{\text{offset}}$ von $0,5\text{V}$. Diese wird im AC-Modus nicht beachtet, da dieser vor allem die Spannungsänderung darstellt.

---

### Teil 4

#### Teilaufgabe b) c)

| Frequenz                      | 50                              | 100                             | 1000                                | 10.000                             |
| ----------------------------- | ------------------------------- | ------------------------------- | ----------------------------------- | ---------------------------------- |
| Eingestellter Zeitkoeffizient | $2 \frac{\text{ms}}{\text{cm}}$ | $1 \frac{\text{ms}}{\text{cm}}$ | $100 \frac{\mu\text{s}}{\text{cm}}$ | $10 \frac{\mu\text{s}}{\text{cm}}$ |
| Gemessene Periodenlänge       | $10\text{cm}$                   | $10\text{cm}$                   | $10\text{cm}$                       | $10\text{cm}$                      |
| Berechnete Periodendauer      | $20\text{ms}$                   | $10\text{ms}$                   | $1\text{ms}$                        | $0,1\text{ms}$                     |

---

## Aufgabe 2

### Teil 1

#### Teilaufgabe c)

![[OszilloskopAufgabe2.1.c.PNG]]

---

#### Teilaufgabe d)

Der Kondensator ist nach $1 \tau$ ungefähr $63\%$ geladen

$$
\tau = R \cdot C = 22 \text{ k} \ohm \cdot 22 \text{ nF}\ \underline{= 0.484 \text{ ms}} 
$$

---

#### Teilaufgabe e)

Der Kondensator ist nach ca. $3.5 \text{ ms}$ nahezu voll geladen

---

#### Teilaufgabe f)

$$
I = \dfrac{U}{R}
$$
$$
I_{C_\text{off}} = \dfrac{U_{\text{off}}}{R} = \dfrac{1 \text{V}}{22 \text{ k} \ohm}\ \underline{= 45\ \mu \text{A}}
$$

---

### Teil 2

#### Teilaufgabe c)

![[OszilloskopAufgabe2.2.c.PNG]]

---

#### Teilaufgabe d)

Wird die Spannung angelegt:
- Ist die Spule Spannungslos und es wird eine Spannung $U_{q}$ angelegt fließt noch kein Strom durch den Kreis
- Darum fällt keine Spannung am Widerstand ab und alle angelegte Spannung fällt an der Spule ab, was den Strom in der Spule und im Stromkreis zum fließen bringt
- doch fließt nicht sofort der maximale Strom, da die Selbstinduktion der Spule dem entgegenwirkt. 
- Der steigende Stromfluss bewirkt, dass immer mehr Spannung am Widerstand abfällt und immer weniger an der Spule.

Wird die Spannung hinfortgenommen:
- Der Strom fließt weiter durch den Widerstand, was bewirkt, dass sich die Spannung an der Spannung umkehren muss, um diese auszugleichen
- Da die nun umgekehrte Spannung dem Strom entgegenwirkt beginnt dieser zu sinken
- Dennoch sinkt der Strom nicht sofort auf $0$, da die Selbstinduktion der Spule dem Strom entgegenwirkt

$i(t)$ ist zu $U_{R} (t)$ proportional, da 
$$
i(t) = \frac{U_{R}(t)}{R}
$$

 
---

## Aufgabe 3

### Teilaufgabe b) c)

| Frequenz $[\text{Hz}]$                      | 10             | 100         | 1k            | 2k            | 3393           | 4k            | 10k            | 20k           | 30k           |
| ------------------------------------------- | -------------- | ----------- | ------------- | ------------- | -------------- | ------------- | -------------- | ------------- | ------------- |
| $\hat{U}_{q}\text{ in } V$                  | $1$            | $1$         | $1$           | $1$           | $1$            | $1$           | $1$            | $1$           | $1$           |
| $\hat{U}_{C}\text{ in } V$                  | $0,98\text{V}$ | $1\text{V}$ | $1,1\text{V}$ | $1,4\text{V}$ | $1,75\text{V}$ | $1,2\text{V}$ | $130\text{mV}$ | $25\text{mV}$ | $10\text{mV}$ |
| $$V_{U} = \frac{\hat{U}_{C}}{\hat{U}_{q}}$$ | $0,98$         | $1$         | $1,1$         | $1,4$         | $1,75$         | $1,2$         | $0,13$         | $0,025$       | $0,01$        |
| $$V_{U} \text{ in } dB$$                    | $-0.1755$      | $0$         | $0.8279$      | $2.9226$      | $4.8608$       | $1.5836$      | $-17.7211$     | $-32.0412$    | $-40$         |
| $\varphi\text{ in °}$                       | $-9,8°$        | $0°$        | $-9,3°$       | $-26°$        | $-95°$         | $-125°$       | $-174°$        | $-180°$       | $-182°$       |

---

### Teilaufgabe d)

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=newest}

\begin{document}
\begin{tikzpicture}[
	/pgf/declare function={
        XMAX = 100000;
    }
]
\begin{axis}[
	grid=both,
	width=\textwidth,
    xmin=0, xmax=XMAX,
    ymin=0, ymax=2,
    xmode=log,
    xlabel={$f$ in Hz},
    ylabel={$V_U(f)$},
    ylabel style={rotate=-90},
    
]
\addplot[thick,green, mark=*, mark size=1pt] coordinates {(10, 0.98) (100, 1) (1000, 1.1) (2000, 1.4) (3393, 1.75) (4000,1.2) (10000, 0.13) (20000, 0.025) (30000, 0.01)} node[below,pos=0, black] {$V_U(f)$}; 
\end{axis}
\begin{axis}[
	width=\textwidth,
    ymin=-190, ymax=0,
    xmin=0, xmax=XMAX,
    axis y line*=right,
    axis x line=none,
    xmode=log,
    ylabel={$\varphi$ in $\deg$},
    ylabel style={rotate=-90},
]
\addplot[thick,red, mark=*, mark size=1pt] coordinates {(10,-9.8) (100, 0) (1000, -9.3) (2000, -26) (3393, -95) (4000,-125) (10000, -174) (20000, -180) (30000, -182)} node[below,pos=0, black] {$\varphi(f)$};
\end{axis}
\end{tikzpicture}
\end{document}
```

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=newest}

\begin{document}
\begin{tikzpicture}[
	/pgf/declare function={
        XMAX = 100000;
        XMIN = 0;
    }
]
\begin{axis}[
	grid=both,
	width=\textwidth,
    xmin=XMIN, xmax=XMAX,
    ymin=-45, ymax=10,
    xmode=log,
    xlabel={$f$ in Hz},
    ylabel={$V_U(f)$ in db},
    ylabel style={rotate=-90},
    
]
\addplot[thick,green, mark=*, mark size=1pt] coordinates {(10,-0.1755) (100,0) (1000, 0.8279) (2000,2.9226) (3393,4.8608) (4000,1.5836) (10000,-17.7211) (20000,-32.0412) (30000,-40)} node[below,pos=0, black] {$V_U(f)$ in db}; 
\end{axis}
\begin{axis}[
	width=\textwidth,
    ymin=-190, ymax=40,
    xmin=XMIN, xmax=XMAX,
    axis y line*=right,
    axis x line=none,
    xmode=log,
    ylabel={$\varphi$ in $\deg$},
    ylabel style={rotate=-90},
]
\addplot[thick,red, mark=*, mark size=1pt] coordinates {(10,-9.8) (100, 0) (1000, -9.3) (2000, -26) (3393, -95) (4000,-125) (10000, -174) (20000, -180) (30000, -182)} node[below,pos=0, black] {$\varphi(f)$};
\end{axis}
\end{tikzpicture}
\end{document}
```

---

### Teilaufgabe e)

$$
\frac{1}{R} \cdot \sqrt{ \frac{L}{C} } = \frac{1}{1\text{k}\Omega} \cdot \sqrt{ \frac{100\text{mH}}{22\text{nF}} } = 2,132
$$

---

### Teilaufgabe f)

Berechnet man die Funktion ($V_{B}(\omega)$), die zu den gemessenen Werten passt kann man das Ergebnis besser bewerten:
$$
\underline{I} = \frac{\underline{U}}{R + j \cdot \left( \omega L - \frac{1}{\omega C} \right)} \qquad \underline{Z_{C}} = \frac{1}{\omega Cj}
$$
$$
U_{C} = \underline{I} \cdot \underline{Z_{C}} = 
\frac{\underline{U}}{(R + j \cdot \left( \omega L - \frac{1}{\omega C} \right)) \cdot \omega Cj} =
\frac{\underline{U}}{R \cdot \omega Cj - \omega^2 L C + 1}
$$
$$
V_{U} = \left|\frac{\underline{U_{C}}}{\underline{U}}\right| = 
\left|\dfrac{\dfrac{\underline{U}}{R \cdot \omega Cj - \omega^2 L C + 1}}{\underline{U}}\right| = 
\left|\dfrac{1}{R \cdot \omega Cj - \omega^2 L C + 1}\right| 
$$
$$
\implies V_{U}(\omega) = 
\dfrac{1}
{\sqrt{(\omega^2 L C - 1)^2 + (RC\omega)^2}}
$$
Plottet man diese Funktion in das gegebene Diagramm deckt sie sich grob mit den abgelesenen Werten.
``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=newest}

\begin{document}
\begin{tikzpicture}[
	/pgf/declare function={
        XMAX = 100000;
        XMIN = 10;
        L = 100e-3;
        C = 22e-9;
        R = 1000;

        w(\f) = 2*pi*\f;
        F(\f) = 1
                /
                sqrt((w(\f)^2*L*C - 1)^2 + (R*C*w(\f))^2);
    }
]
\begin{axis}[
	grid=both,
	width=\textwidth,
    xmin=0, xmax=XMAX,
    ymin=0, ymax=2.5,
    xmode=log,
    xlabel={$f$ in Hz},
    ylabel={$V_U(f)$},
    ylabel style={rotate=-90},
    
]
\addplot[thick,green, mark=*, mark size=1pt] coordinates {(10, 0.98) (100, 1) (1000, 1.1) (2000, 1.4) (3393, 1.75) (4000,1.2) (10000, 0.13) (20000, 0.025) (30000, 0.01)} node[below,pos=0, black] {$V_U(f)$}; 

\addplot[blue, thick, domain=XMIN:XMAX, samples=1000]
{F(x)};
\end{axis}
\begin{axis}[
	width=\textwidth,
    ymin=-190, ymax=0,
    xmin=0, xmax=XMAX,
    axis y line*=right,
    axis x line=none,
    xmode=log,
    ylabel={$\varphi$ in $\deg$},
    ylabel style={rotate=-90},
]
\addplot[thick,red, mark=*, mark size=1pt] coordinates {(10,-9.8) (100, 0) (1000, -9.3) (2000, -26) (3393, -95) (4000,-125) (10000, -174) (20000, -180) (30000, -182)} node[below,pos=0, black] {$\varphi(f)$};
\end{axis}
\end{tikzpicture}
\end{document}
```

#### Grenzwertverhalten bei $\omega \to 0$

Geht $\omega$ gegen $0$, sorgt die Impedanz $\underline{Z}$ des gesamten Systems dafür, dass die Spannung dem Strom um $90°$ hinterherläuft;

$$
\underline{Z} = R + i \cdot \left( \omega L - \frac{1}{\omega C} \right) \qquad \omega \to 0 \qquad \implies \underline{Z} \to R - \infty \cdot i  \implies \underline{Z} = \|Z\| \cdot E(-90°)
$$

- Wenn am gesamten System eine hohe Spannung anliegt, ist der Strom, der die Spule durchfließt schon wieder niedrig
- Dadurch fällt während hoher anliegender Spannung _**kaum**_ Spannung an der Spule ab.
$\implies$ weshalb so gut wie der gesamte Spannungsabfall am Kondensator geschieht

$$
\implies V_{U}(0) = 
\dfrac{1}
{\sqrt{(0^2 L C - 1)^2 + (RC0)^2}}
= 
\frac{1}{1}
$$

#### Maximum bei $\omega = \omega_{r}$

Geht $\omega$ gegen $\omega_{r}$ ist der Phasenabstand zwischen Spannung und Strom $0$
$$
\underline{Z} = R + i \cdot \left( \omega L - \frac{1}{\omega C} \right) \qquad \omega =\frac{1}{\sqrt{ LC }} \qquad \implies \underline{Z} = R  \implies \underline{Z} = \|Z\| \cdot E(0°)
$$
- fließt per Definition fließt bei maximal angelegter Spannung auch der maximal mögliche Strom durch den Kreis
- Da durch die Spule der maximale Strom fließt, ist die Selbstinduktion und somit der Spannungsabfall an der Spule maximal.
- Da der Spannungsabfall an Spule und Widerstand im Resonanzfall gleich groß, aber einander entgegengerichtet sind
$\implies$ Ist $U_{C}$  maximal, da es $U_{L}$ auch ist

Leicht zu erkennen ist dies an einem Zeigerdiagram:

```tikz
\usepackage{tikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw[line width=0.9pt, -latex] (2, 7) -- (6, 7);
	\draw[line width=1pt, -latex] (6, 7) -| (6, 13);
	\draw[line width=0.9pt, -latex] (6.25, 13) -| (6.25, 10);
	\draw[line width=0.9pt, -latex] (2, 7) -- (6, 10);
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm](N1) at (3.875, 8.75){} node[anchor=center] at (N1.text){$U_q$} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (3.5, 9.125){};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm](N2) at (5.625, 11.25){} node[anchor=center] at (N2.text){$U_L$} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (5.25, 11.625){};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm](N3) at (6.625, 11.25){} node[anchor=center] at (N3.text){$U_C$} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (6.25, 11.625){};
	\node[shape=rectangle, minimum width=0.715cm, minimum height=0.715cm](N4) at (4.25, 6.75){} node[anchor=center] at (N4.text){$U_R$} node[anchor=north west, align=left, text width=0.327cm, inner sep=6pt] at (3.875, 7.125){};
	\draw (5.5, 10) -- (6.75, 10);
	\draw (5.5, 13) -- (6.75, 13);
\end{tikzpicture}
\end{document}
```
Im Resonanzfall sind $U_{q}$ und $U_{R}$ gleich gerichtet (Da der Phasenversatz $0$ ist) und $U_{L}$ und $U_{C}$ sind gleichgerichtet, und $U_{C}$ und $U_{q}$ stehen im rechten Winkel aufeinander. Das ist der gemessene Winkel $\varphi = 90°$ im Resonanzfall
$$
\implies V_{U}\left(\dfrac{1}{\sqrt{ LC }}\right) = 
\dfrac{1}
{\sqrt{\left( \left( \dfrac{1}{\sqrt{ LC }} \right)^2 L C - 1 \right)^2 + \left( RC \cdot \dfrac{1}{\sqrt{ LC }} \right)^2}} = \frac{1}{\sqrt{ 0 +  \left( RC \cdot \dfrac{1}{\sqrt{ LC }} \right)^2}} = 
\frac{\sqrt{ LC }}{RC^2}
$$

#### Grenzwertverhalten bei $\omega \to \infty$

Geht $\omega$ gegen $\infty$, sorgt die Impedanz $\underline{Z}$ des gesamten Systems dafür, dass die Spannung dem Strom um $90°$ vorauseilt;

$$
\underline{Z} = R + i \cdot \left( \omega L - \frac{1}{\omega C} \right) \qquad \omega \to \infty \qquad \implies \underline{Z} \to R + \infty \cdot i  \implies \underline{Z} = \|Z\| \cdot E(90°)
$$

- Wenn am gesamten System eine hohe Spannung anliegt, ist der Strom, der in den Kondensator fließt sehr hoch
- Ist die Frequenz nahezu endlos hoch, ist die Impedanz am Kondensator nahezu $0$
$\implies$ weshalb so gut wie kein Spannungsabfall am Kondensator geschieht

$$
\implies V_{U}(\infty) = 
\dfrac{1}
{\sqrt{(\infty^2 L C - 1)^2 + (RC\infty)^2}}
= 
\frac{1}{\infty} \to 0
$$

---

### Teilaufgabe g)

Reihenschwingkreise können genutzt werden, aus einem Strom, der aus vielen sich überlagernden Spannungen eine bestimmte Frequenz herauszufiltern,
da der Scheinwiderstand im Reihenschwingkreis um die Resonanzfrequenz maximal ist.