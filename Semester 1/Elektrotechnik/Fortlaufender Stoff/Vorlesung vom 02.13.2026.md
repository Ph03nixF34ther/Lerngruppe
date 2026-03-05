# Tief und Hochpässe

## Tiefpässe
### Schaltung mit Tiefpasscharakter

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (5, 4) to[european current source, l={$\underline{U}_1$}] (5, 8);
	\draw (9, 8) to[european resistor] (5, 8);
	\draw (9, 8) to[capacitor] (9, 4);
	\draw (10.5, 4) -- (5, 4);
	\node[circ] at (9, 8){};
	\node[circ] at (10.5, 4){};
	\node[circ] at (9, 4){};
	\draw (10.5, 8) -- (9, 8);
	\node[circ] at (10.5, 8){};
	\draw[-latex] (10.5, 7.75) -- (10.5, 4.25);
	\node[shape=rectangle, minimum width=0.215cm, minimum height=0.215cm] at (11.125, 6.125){} node[anchor=north west, align=left, text width=-0.173cm, inner sep=6pt] at (11, 6.25){$\underline{U}_2$};
\end{tikzpicture}
\end{document}
```

$$
\frac{\underline{U_{2}}}{\underline{U_{1}}} = \frac{\frac{1}{j\omega C}}{R + \frac{1}{j\omega C}}
$$
$$
\underline{U_{2}} = \underline{U_{1}} \cdot \frac{1}{R \cdot j\omega C + 1}
$$
$$
\frac{\underline{U_{2}}}{\underline{U_{1}}} = \frac{1}{\sqrt{ 1 + (R\omega C)^{2} }}
$$

### Grenzwertbetrachtung:

// Abb: Diagram
$$\omega \to 0 \qquad\implies
\frac{\underline{U_{2}}}{\underline{U_{1}}} \to 1
$$
$$\omega \to \infty \qquad \implies
\frac{\underline{U_{2}}}{\underline{U_{1}}} \to 0
$$

### Grenzfrequenz: 

$$
f_{g} = \frac{\underline{U_{2}}}{\underline{U_{1}}} = \frac{1}{\sqrt{ 2 }}
\qquad \implies \omega_{g} = \frac{1}{RC}
$$
$f < f_{g}$ Durchlassbereich
$f > f_{g}$ Sperrbereich

Phase $45°$ Phasenverschiebung bei $f_{g}$

## Hochpässe
## Schaltung mit Hochpasscharakter

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (5, 4) to[european current source, l={$\underline{U}_1$}] (5, 8);
	\draw (9, 8) to[european resistor] (9, 4);
	\draw (9, 8) to[capacitor] (5, 8);
	\draw (10.5, 4) -- (5, 4);
	\node[circ] at (9, 8){};
	\node[circ] at (10.5, 4){};
	\node[circ] at (9, 4){};
	\draw (10.5, 8) -- (9, 8);
	\node[circ] at (10.5, 8){};
	\draw[-latex] (10.5, 7.75) -- (10.5, 4.25);
	\node[shape=rectangle, minimum width=0.215cm, minimum height=0.215cm] at (11.125, 6.125){} node[anchor=north west, align=left, text width=-0.173cm, inner sep=6pt] at (11, 6.25){$\underline{U}_2$};
\end{tikzpicture}
\end{document}
```
$$
\underline{U_{2}} = \underline{U_{1}} - \underline{U_{C}}
$$
$$
\frac{\underline{U_{2}}}{\underline{U_{1}}} = 1 - \frac{1}{\sqrt{ 1 + (R\omega C)^{2} }}
$$

### Grenzwertbetrachtung:

// Abb: Diagram
$$\omega \to 0 \qquad\implies
\frac{\underline{U_{2}}}{\underline{U_{1}}} \to 0
$$
$$\omega \to \infty \qquad \implies
\frac{\underline{U_{2}}}{\underline{U_{1}}} \to 1
$$

### Grenzfrequenz: 

$$
f_{g} = \frac{\underline{U_{2}}}{\underline{U_{1}}} = \frac{1}{\sqrt{ 2 }}
\qquad \implies \omega_{g} = \frac{1}{RC}
$$
$f < f_{g}$ Sperrbereich
$f > f_{g}$ Durchlassbereich

Phase $45°$ Phasenverschiebung bei $f_{g}$

---

# TODO: Tief- und Hochpässe mit Spule

# Gegeninduktion

// Abb: Toroid mit 2 Wicklungen

- ideal gekoppelt: Fluss der von der ersten Spule erzeugt wird durchsetzt vollständig die zweite Spule
- Kern _**ohne**_ ferromagnetisches Material
- $u_{2} = N_{2} \cdot \frac{d\Phi}{dt}$
$$
\Phi \sim i \implies u_{2} = L_{12} \cdot \frac{di_{1}}{dt}
$$
$$
\implies L_{12} = N_{2} \cdot \frac{d\Phi}{dt}
$$
$$
i_{1} \cdot N_{1} = \Phi \cdot \frac{l_{m}}{\mu\cdot A}
$$
$$
\frac{d\Phi}{di_{1}} = N_{1} \cdot \frac{\mu A}{l_{m}}
$$
$$
L_{12} = \boxed{N_{1} \cdot N_{2}} \cdot \frac{\mu A}{l_{m}}
$$
$$
u_{1} = L_{21} \frac{di_{1}}{d\Phi}
$$
# Drosselspulen und magnetische Kreise

## Drosselspulen (Drossel: herabsetzen von Spannungen ohne ohmschen Widerstand)

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (9, 8) to[lamp] (6, 8);
	\draw (9, 8) to[american inductor, v=$U_L$] (12, 8);
	\node[circ] at (6, 8){};
	\node[circ] at (12, 8){};
\end{tikzpicture}
\end{document}
```

// Abb: Drosselspule

- Querschnittsfläche $A$
- Windungszahl $N$
- Wechselspannungsquelle $u$
$$
u = N \cdot \frac{d\Phi}{dt}
$$

Annahme: sinusförmiger Fluss $\Phi = \hat{\Phi} \cdot \sin(\omega t)$
$$
u = N \cdot \frac{d(\hat{\Phi} \cdot \sin(\omega t))}{dt} = N \hat{\Phi}\cdot \frac{d(\sin(\omega t))}{dt} = \underbrace{ N \hat{\Phi} \omega }_{ \text{konstant} }\cdot \cos(\omega t)
$$
$$
\hat{u} = N\cdot \hat{\Phi} \cdot \omega
$$
sinusförmige Spannung erzeugt sinusförmigen Fluss (Phasenverschoben)
$$
\hat{u} = \sqrt{ 2 }
$$
$$
\omega = 2\pi f
$$
$$
\implies \sqrt{ 2 }\cdot U = N\cdot \hat{\Phi}\cdot 2\pi f \implies U = \frac{N\cdot \hat{\Phi}\cdot 2\pi f}{\sqrt{ 2 }} = 4,44\cdot N\cdot f\cdot \hat{\Phi}
$$
ferromagnetischer Kern: Sättigungsproblematik, Vorgabe von $\hat{B} \to U$ ausrechnen, das Maximum an Spule angelegt werden darf

## Transformator

// Abb 2 Spulen um Eisenkern

| Primärwicklung                                                            | Sekundärwickulung                                                                                                  |
| ------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------ |
| dient der Speisung                                                        | dient der Last                                                                                                     |
| zeitlich veränderlicher Strom<br>$\implies$ zeitlich veränderlicher Fluss | $\implies$ zeitlich veränderlicher Fluss<br>$\implies$ zeitlich veränderlicher Strom<br>$\implies$ Selbstinduktion |

### idealer Trafo
- keine ohm'schen Widerstände
- ideale magnetische Kopplung
- $R_{\text{mag}}$ Eisenkern ist vernachlässigbar
- Wirbelstromverluste des Eisen vernachlässugbar
$$
\frac{\underline{U_{1}}}{\underline{U_{2}}} =\frac{N_{1}}{N_{2}} \qquad \implies \text{Spannungen verhalten sich wie Windungszahlen}
$$
Trafo funktioniert nur bei Wechselspannung 
bei Gleichspannung kein veränderlicher Fluss $\implies$ keine Induktion

$$
P_{1} = P_{2} \qquad \text{Energieerhaltungssatz}
$$
$$
\frac{I_{1}}{I_{2}} = \frac{N_{2}}{N_{1}} \qquad (\text{Effektivwerte})
$$
