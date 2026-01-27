alternativ: Vorgegebener Spulenstrom $\implies$ Fluss bestimmen
$$
H_{E} =\frac{I \cdot N}{l_{m}}
$$
Dann $B_{E}$ aus dem DIagram ablesen
$\implies$ $\Phi = B_{E} \cdot A$

## Eisenkern mit Luftspalt

// Abb: 3D-Ansicht: Querschnittsfläche $A$

| Formelzeichen (gegeben) | Beschreibung des Formelzeichens |
| ----------------------- | ------------------------------- |
| $l_{m}$                 | Mittlere Feldlänge              |
| $A$                     | Querschnittsfläche              |
| $l_{L}$                 | Länge Luftspalt                 |
| $N$                     | Windungszahl                    |
|                         | Magnetisierungskennlinie        |
Ziel: Fluss $\Phi$ im Kern erzeugen.
Gesucht: Strom $I$ berechnen
Vorraussetzung: $l_{L} \ll l_{m}$ (Die Länge des Luftspalts ist bedeutend geringer, als die Länge des Eisenkerns)

// Abb. Analyse Plattenkondensator

**Annahme**: homogenes Feld (dazu: $s$ relativ klein $\implies$ von Plattenkondensator zu homogenen Feld)
$\implies$ _**Kein Streufluss**_

Fluss im Luftspalt = Fluss im Eisenkern 
$\implies$ Fluss ist überall gleich. er verteilt sich auf die Fläche $A$

$$\implies B_{E} = B_{L} = \frac{\Phi}{A}$$
(Anmerkung: $l_{L}$ frelativ groß $\implies$ Streufluss nicht vernachlässigbar 
$\implies$ verfügbarer Querschnitt in Luft > verfügbarer Querschnitt in Eisen
$\implies$ Diese Näherung ist eingeschränkt)

Zur Erzeugung eines Flusses: Flussdichte errechnen (Diagram)
Magnetisierungskennlinie $\implies H$ entnehmen
$$
H_{L} = \frac{B_{L}}{\mu_{0}}
$$
$$
\implies \mu = \mu_{0} \cdot \mu_{r} : \mu_{r}\text{ (Luft)} =  1
$$
Durchflutungsgesetz: 
$$
I \cdot N = \Theta =H_{E} \cdot l_{E} + H_{L} \cdot l_{L}
$$
($l_{E} = l_{m} - l_{L}$)
oftmals: $\Phi = f(I)$ als diagram mitgeliefert

> Ist die Querschnittsfläche des Eisenkerns nicht überall gleich, muss dieser Abschnittsweise berechnet werden

---
Frage: Flussdichte im Luftspalt des Magnetkerns
Durchflutungsgesetz: 
$$
\Theta = H_{E} \cdot l_{E} + H_{L} \cdot l_{L}
$$
Zusammenfassung Flussdichte (Feldstärke: $B = \mu \cdot H$)
$$
\text{Luftspalt} : H_{L} = \frac{B_{L}}{\mu_{0}} \hspace{1cm}(\mu_{r}=1)
$$
$$
\Theta = H_{E} \cdot l_{E} + \frac{B_{L}}{\mu_{0}} \cdot l_{L}
$$
$$
B_{L} = \frac{\Theta - H_{E} \cdot l_{E}}{l_{L}} \cdot \mu_{0}
$$
$$
B_{L} = -\frac{H_{E} \cdot l_{E}}{l_{L}} \cdot \mu_{0}
$$

Der Arbeitspunkt kann nun als Schnittpunkt dieser Funktion und der Hystereseschleife ermittelt werden.

// Abb: Hystereseschleife Dauermagnet mit Lastgerade

---
Ausgehend von Bingung: $l_{L}$ relativ klein $\implies$ kein Steufluss $\implies B_{L} = B_{E}$ 
- Im Diagramm : 2 Kurven eintragen (Magnetisierungskennlinie, Durchflutungsgesetz)
- es muss gelten: $B_{E} = B_{L} \implies$ nur im Schnittpunkt der beiden Kurven
- dies ist der Arbeitspunkt des magnetischen Kreises
- dort kann nun die Flußdichte des gesamten magnetischen Kreises im Arbeitspunkt abgelesen werden


| Aus der Elektronik          | Aus der Magnetik                |
| --------------------------- | ------------------------------- |
| Bauelement (z.B. Dioden)    | Permanentmagnet                 |
| Kennlinie (Diodenkennlinie) | Demagnetisierungskurve          |
| Last (z.B. Widerstand)      | Luftspalt im magnetischen Kreis |
| Lastgerade                  | $B_{L} = f(H)$ Lastgerade       |
$\implies$ Arbeitspunkt

---
### Bewegte Ladung im Magnetfeld
$$
\text{Strom} = \frac{Ladung}{Zeit} \hspace{1cm} I = \frac{Q}{t}
$$
Stromdurchflossener Leiter erfährt Kraft $\implies$ Eine Kraft wird auf eine sich bewegende Ladung ausgewirkt

// Abb. +Ladung bewegt sich durch ein Magnetisches Feld

Bewegte positive Ladung, Bewegung _**senkrecht**_ zu Feldrichtung mit Geschwindigkeit $\vec{v}$

- Strom ist bewegte Ladung
- bewegte Ladung erzeugt ein Magnetfeld
- der Strom überlagert sich mit dem Magnetfeld

Hinter der Ladung findet eine Verstärkung des Magnetfelds statt
Vor der Ladung findet eine Abschwächung des Magnetfelds statt
$\implies$ Teilchen bewegt sich
$$
F = B\cdot I\cdot l = B \cdot \frac{Q}{t} \cdot l = B \cdot Q \cdot \boxed{\frac{l}{t}} \to \frac{\text{Weg}}{\text{Zeit}} = \text{Geschwindigkeit}
$$
$$
 = B  \cdot Q \cdot \vec{v} \implies \boxed{Q \cdot v \cdot B = F}
$$
 = Lorenzkraft

Vorraussetzungen:
- externes Magnetfeld ($|B| > 0$)
- Ladung muss bewegt sein ($|v| > 0$)

für beliebige Winkel zwischen $\vec{v}$ und $\vec{B}$:
$$
\boxed{F = Q \cdot v \cdot B \cdot \sin(\alpha)} \to (\alpha =\text{Eingeschlossener Winkel})
$$

## Hall - Effekt


```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\draw (3, 4) to[european current source, i>=$I$] (3, 7);
	\node[shape=rectangle, draw, line width=1pt, minimum width=0.965cm, minimum height=1.965cm] at (6.5, 5.5){};
	\node[shape=rectangle, minimum width=0.59cm, minimum height=0.465cm] at (6.5, 5.75){} node[anchor=north west, align=left, text width=0.202cm, inner sep=6pt] at (6.187, 6){B};
	\draw (3, 7) -- (6.5, 7) -- (6.5, 6.5);
	\draw (3, 4) -- (6.5, 4) -- (6.5, 4.5);
	\draw (6, 5.5) -- (5.75, 5.5) -- (5.75, 3.25);
	\draw (7, 5.5) -- (7.25, 5.5) -- (7.25, 3.25);
	\node[circ] at (6, 5.5){};
	\node[circ] at (7, 5.5){};
	\node[circ] at (6.5, 4.5){};
	\node[circ] at (6.5, 6.5){};
	\node[circ] at (5.75, 3.25){};
	\node[circ] at (7.25, 3.25){};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (5.75, 3){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (5.5, 3.25){1};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (7.25, 3){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (7, 3.25){2};
\end{tikzpicture}
\end{document}
```
- dünnes Leiterplättchen (Breite $b$, Dicke $d$)
- Magnetfeld mit Flussdichte $B$, senkrecht zum Leiter
- Strom $I$ durch Leiter, Gleichverteilung des Stroms über die Breite des Leiters

- Metallischer Leiter, dh. die Majoritätsträger sind Elektronen ("freie Elektronen")
- Dies induziert eine Lorenzkraft
$$
F = Q \cdot v \cdot B = e \cdot v_{e} \cdot B
$$
$$
\implies v = \frac{I}{e \cdot n \cdot A} : \text{Flussgeschwindigkeit der Elektronen}
$$
### Kräfte zwischen stromführenden Leitern
```tikz
\begin{tikzpicture}
	% Paths, nodes and wires:
	\node[circ](N1) at (4, 6){} node[anchor=center] at (N1.text){$I_1$};
	\node[circ](N2) at (6, 6){} node[anchor=center] at (N2.text){$I_2$};
	\draw[latex-latex] (4, 6) -- (6, 6);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.465cm] at (5, 6.25){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (4.75, 6.5){r};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (6, 6.375){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (5.75, 6.75){2};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (4, 6.375){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.75, 6.75){1};
\end{tikzpicture}
```

$$
H_{1} = \frac{I_{1}}{2\pi r} \implies B_{1} = \mu \cdot H_{1} = \mu_{0} \cdot \frac{I_{1}}{2\pi r}
$$
Rechtsschraubenregel:
$\implies$ Magnetfeld rund um $L_{1}$ Kreisförmig im Urzeigersinn

Rechte-Hand-Regel:

| Rechte Hand Regel | Formel                        |
| ----------------- | ----------------------------- |
| U                 | $I_{1}$                       |
| V                 | $\vec{B_{1}}$                 |
| W                 | resultierende Kraft $\vec{F}$ |
$$
 F = B_{1} \cdot I_{2} \cdot l = ()
$$