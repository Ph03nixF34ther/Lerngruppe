---
tags:
  - TODO
---
## Die magnetische Spannung
Anaogie zum elektrischen Stromkreis: elektrische Spannung treibt den Strom.
$\implies$ ? treibende Kraft im magnetischen Kreis? $\implies$ magnetische Spannung

### homogenes Magnetfeld
// Abb. Stabmagneten

$H$ im Spalt:
$$
B = \mu \cdot H = \mu_{1} \cdot \mu_{r} \cdot H
$$
$\implies$ Luft: $\mu_{r} = 1$
$$
\implies B = \mu_{0} \cdot H \implies H = \frac{B}{\mu_{0}}
$$
$\implies$ mit gegebenem $B$ ist $H$ bekannt. $s$ ist unbekannt

E-Feld: $U = E \cdot s$       : elektrische Spannung : treibt Strom
H-Feld: $V_{mag} = H \cdot s$ : magnetische Spannung : treibt Fluss
$$
[V_{mag}] = \frac{A}{\cancel{ m }} \cdot \cancel{ m } = A
$$
### inhomogenes Magnetfeld

// Abb. inhomogenes Magnetfeld

$$
dV_{mag} = H \cdot \cos(\alpha) \cdot ds = \vec{H} \cdot d\vec{s}
$$
$$
V_{mag 1,2} = \int_{1}^2 \vec{H} \cdot d\vec{s}
$$
bisher: Wegausschnitt Punkt $1 \to 2$ 
jetzt: Beginn und Ende bei $1 \implies \text{geschlossener Weg} \implies V_{mag} = \oint_{s} \vec{H} \cdot d\vec{s}$
	$\implies$ magnetische Umlaufspannung (Ergebnis unabhängig von der Wahl de Integrationswegs)

Integrationsweg:
bisherM Konzentrischer Kreis rund um Leiter, Radus $r$ 
	$\implies$ Feldstärke betragsmäßig konstant
	$\implies$ $d\vec{s}$ und $\vec{H}$ haben stets die gleiche Richtung
$$
V_{m} = \oint_{s} \vec{H} \cdot d\vec{s} = \oint_{s} H \cdot ds = H \cdot \oint_{s}ds = H \cdot 2 \cdot \pi \cdot r
$$
mit:
$$
H = \frac{I}{2 \cdot \pi \cdot r} =(\text{Feldstärke im Abstand r von einem geraden leiter})
$$
$$
I = V_{mag}
$$
Im Fall mehrerer Ströme: $\oint_{s} \vec{H} \cdot c\vec{s} = \Theta$

// Abb. Stromdurchflossene Fläche

$$
\Theta = I_{1} + I_{2} - I_{3}
$$
# Magnetkreis // Ohmsches Gesetz im Magnetkreis
### Analogie: elektrischer Stromkreis

```tikz
\usepackage{circuitikz}
\begin{document}

\begin{circuitikz}[european, voltage shift=0.5]
\draw (0,0)
to[isource, l=$I_0$, v=$V_0$] (0,3)
to[short, --, i=$I_0$] (2,3)
to[R=$R_1$, i>_=$i_1$] (2,0) -- (0,0);

\draw (2,3) -- (4,3)
to[R=$R_2$, i>_=$i_2$]
(4,0) to[short, -*] (2,0);
\end{circuitikz}

\end{document}
```

```tikz
\usepackage{circuitikz}
\begin{document}

\begin{circuitikz}[european, voltage shift=0.5]
\draw (0,0)
to[isource, l=$I_0$, v=$V_0$] (0,3)
to[short, -*, i=$I_0$] (2,3)
to[R=$R_1$, i>_=$i_1$] (2,0);

\draw (2,3) -- (4,3)
to[R=$R_2$, i>_=$i_2$]
(4,0) to[short, -*] (2,0);

\end{circuitikz}

\end{document}
```

|         |                      |
| ------- | -------------------- |
| $r_{m}$ | mittlerer Radius     |
| $A$     | Fläche des Kerns     |
| $N$     | Anzahl der Windungen |
| $I$     | Strom                |
### Ringspule
Idealisiert:
Feldlinien im inneren sind konzentrierte Kreise
	$\implies$ homogenes Magnetfeld im Kern
Durchflutungsgesetz: $\oint_{s} \vec{H} \cdot d\vec{s}$
	Die Weglänge ergibt sich über die mittlere Länge einer Feldlinie $l_{m} = 2 \cdot \pi \cdot r \cdot r_{m}$
	$$
 H \cdot l_{m} = H \cdot 2 \cdot \pi \cdot r_{m} = \Theta
$$

mit:
$$
 B = \mu \cdot H
$$
$$
\mu_{0} = 4 \pi 10^{-7} \frac{Vs}{Am}
$$
$$
\Phi = B \cdot A
$$
$$
 H \cdot l = 2 \pi r H = \Theta = I \cdot N
$$
$$
\Phi = B \cdot A = \mu \cdot H \cdot A = \mu \cdot \frac{I \cdot N}{l_{m}} \cdot A
$$
$$
 I \cdot N = \Phi \cdot \boxed{\frac{l_{m}}{\mu \cdot A}}
$$
Im Falle elektrischer Leiter: $\rho$ ist [[Spezifischer Widerstand]]
$$
\kappa = \frac{1}{\rho} : \text{spezifischer Widerstand}
$$
