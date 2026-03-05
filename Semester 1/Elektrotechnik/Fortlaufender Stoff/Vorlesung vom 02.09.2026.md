# Einschaltvorgang ohmsch Kapazitiv
```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (5, 4) to[european current source] (5, 8);
	\draw (5, 8) to[cute open switch] (9, 8);
	\draw (9, 8) to[european resistor] (9, 6);
	\draw (9, 6) to[capacitor] (9, 4);
	\draw (9, 4) -- (5, 4);
\end{tikzpicture}
\end{document}
```
$$
U = u_{R} + u_{C}
$$
$$
u = R \cdot i + u_{C}
$$
$$
U = R \cdot C \cdot \frac{d \cdot u_{c}}{dt} + u_{C} \hspace{1cm} \implies \text{Differenzialgleichung}
$$
Die Differenzialgleichung hat die selbe Form, wie bei der ohmsch induktiven Spannung.
Das heißt, wir verwenden den selben Lösungsansatz
$$
U = u_{C} \hspace{1cm}
$$
nach Ladung des Kondensators fließt kein Strom mehr, Das heißt es gibt keinen Spannungsabfall am Widerstand mehr
$$
u_{cf} = u_{cf 0} \cdot e^{-\frac{t}{RC}}
$$
$$
 u_{C} = U + u_{cf 0} \cdot e^{-\frac{t}{RC}}
$$
Schaltpunkt:
Spannung am Kondensator ändert sich nicht sprunghaft.
wenn $c$ für $t = 0$ ungeladen: $u_{c} = 0$
$$
0 = U + u_{cf 0} \cdot \underbrace{ e^{-\frac{0}{RC}} }_{ 1 }
$$
$$
\implies u_{cf 0} = -U
$$
$$
\implies u_{C} = U - U \cdot e^{-\frac{t}{RC}} = \boxed{U \cdot (1 - e^{-\frac{t}{RC}})}
$$
$$
\tau = R \cdot C
$$
$$
i = \frac{U}{R} \cdot e^{-\frac{t}{\tau}}
$$
Großer Anschaltstrom $\implies$ Geht bei Ladung des Kondensators im Laufe der Zeit gegen $0$
# Energie des magnetischen Felds
## Allgemein

// Abb: Toroidspule mit Stromquelle, die über einen Schalter und Widerstand zur Stromgrenzung verbunden ist


| Formelzeichen | Beschreibung               |
| ------------- | -------------------------- |
| $N$           | Windungszahl               |
| $l_{m}$       | Mittlere Länge des Toroids |
| $A$           | Querschnittsfläche         |
| $i$           | Strom                      |
| $R$           | Widerstand                 |
mit Schließen des Schalters: Energiezufuhr
$$
dW = u \cdot i \cdot dt
$$
$$
u = N \cdot \frac{d\Phi}{dt} \hspace{1cm} \text{(mit Richtung 0)} \hspace{1cm} = N \cdot A \cdot \frac{dB}{dt} \hspace{1cm} (\Phi = B \cdot A, A = \text{const})
$$
$$
i = \frac{H \cdot l_{m}}{N}
$$
$$
dW = \cancel{ N } \cdot A \cdot \frac{dB}{\cancel{ dt }} \cdot \frac{H \cdot l_{m}}{\cancel{ N }} \cdot \cancel{ dt }
$$
$$
dW = A \cdot dB \cdot H \cdot l_{m} \hspace{1cm} \implies \text{integrieren}
$$
$$
W = \int_{0}^{B_{1}} A \cdot dB \cdot H \cdot l_{m} = \int_{0}^{B_{1}} \underbrace{ A \cdot l_{m} }_{ V : \text{Volumen des Torus} } \cdot H \cdot dB = V_{T} \cdot \int_{0}^{B_{1}} H \cdot dB
$$
$$
w = \frac{W}{V} = \int_{0}^{B_{1}} H \cdot dB
$$
allgemein: Kern aus ferromagnetischem Material
vereinfacht: Kern aus ***nicht*** ferromagnetischem Material $\implies$ Permeabilität konstant
$$
B = \mu_{0} \cdot \mu_{R} \cdot H \hspace{1cm} \text{mit } \mu_{1} = 1 \text{ (bei Luft)}
$$
$$
\implies H = \frac{B}{\mu_{0}}
$$
$$
w = \int_{0}^{B_{1}} \frac{B}{\mu_{0}} \cdot dB = \frac{1}{\mu_{0}} \cdot \frac{1}{2} B_{1}^2
$$
$$
 \implies w = \frac{1}{2\mu_{0}} \cdot B^2
$$
$$
B = \mu_{0} \cdot H
$$
$$
\implies w = \frac{1}{2} \mu_{0} \cdot H^2 \hspace{1cm} \text{oder} \hspace{1cm} \implies w = \frac{1}{2} \cdot B \cdot H
$$
$$
W = \int_{V} w \cdot dV
$$
mit bekannter Induktivität $L$:
$$
u = L \cdot \frac{di}{dt}
$$
$$
dw = \underbrace{ L \cdot \frac{di}{\cancel{ dt }} }_{ u_{L} } \cdot i \cdot \cancel{ dt }
$$
$$
dw = L \cdot i \cdot di
$$
$$
\begin{array} {l | r}
\text{Einschalten des Stroms:} & i(t=0) = 0 \\
 & i(t \to \inf) = \frac{U}{R} = I \\
\end{array}
$$
$$
\implies W = \int_{0}^{I} L \cdot i \cdot di = L \cdot \int_{0}^I i \cdot di = \boxed{\frac{1}{2} \cdot L \cdot I^2}
$$

// Abb: Energiedichte an Hand der Magnetisierungskennlinie dargestellt

# Parallelschwingkreis

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (5, 4) to[european current source, l={$\underline{U}$}] (5, 8);
	\draw (7, 8) to[european resistor] (7, 4);
	\draw (9, 8) to[capacitor] (9, 4);
	\draw (11, 4) -- (5, 4);
	\draw (11, 8) to[american inductor] (11, 4);
	\draw (11, 8) -- (5, 8);
	\node[circ] at (7, 8){};
	\node[circ] at (9, 8){};
	\node[circ] at (7, 4){};
	\node[circ] at (9, 4){};
\end{tikzpicture}
\end{document}
```
$$
\underline{y} = \frac{1}{R} + j \cdot \left( \omega C - \frac{1}{\omega L} \right)
$$
$$
y = \sqrt{ \frac{1}{R^2} + \left( \omega C - \frac{1}{\omega L} \right)^2 } \hspace{1.5cm} : \text{ Scheinleitwert}
$$
damit
$$
I = U \cdot y
$$
$$
I_{R} = \frac{U}{R} \hspace{1.5cm}I_{C} = U \cdot \omega C \hspace{1.5cm} I_{L} = \frac{U}{\omega L}
$$

// Abb: Zeigerdiagram

### Resonanz
$$
y = \sqrt{ \frac{1}{R^2} + \left( \omega C - \frac{1}{\omega L} \right)^2 } 
$$
Scheinleitwert wird minimal for $\omega C = \frac{1}{\omega L}$
Die Admittanz ist rein reel $\implies$ Strom und Spannung sind in Phase
$$
\omega C = \frac{1}{\omega L} \implies \omega^2 = \frac{1}{LC}
$$
Resonanz Fall bei 
$$
\omega = \omega_{R} = \frac{1}{\sqrt{ LC }}
$$
$$
\omega = 2\pi f \hspace{1cm} \implies f_{R} = \frac{1}{2\pi \sqrt{ LC }}
$$
Im Resonanzfall: Stromüberhöhung
$$
Q = \frac{I_{C}}{I} = \frac{I_{L}}{I} = \frac{\omega_{R} \cdot C}{\frac{1}{R}} = \frac{\frac{1}{\omega_{R} \cdot L}}{\frac{1}{R}}
$$
