# Magnetische Feldstärke
- Magnetnadel im Feld einer Spule (Ringspule)
- Magnetnadel dreht sich (? => Drehmoment!)
- Drehmoment versucht die Nadel in Richtung des Felds auszurichten
- Höhe des Drehmoments stellt ein Maß für die Stärke des Magnetfelds dar
### Experiment:
- Variation des Spulenstroms $I \implies I \sim M$
- Variation der Windungszahl $N \implies N \sim M$
- Variation des Radus => Änderung der Mittleren Länge $l_{m}$ einer Feldline: $M \sim \frac{1}{l_{m}}$
$$
\implies M \sim \boxed{\frac{I \cdot N}{l_{m}}} \implies \text{Magnetische Feldstärke } H 
$$
$$
M \sim H
$$
$$
H = \frac{\Theta}{l_{m}}
$$
=> magnetische Feldstärke als Größe, die das aus dem Strom resultierenden Feld beschreibt

| Formelzeichen        | Beschreibung // Verlinkung                                                                    |
| -------------------- | --------------------------------------------------------------------------------------------- |
| $H$                  | magnetische Feldstärke                                                                        |
| $I$                  | [[Elektrische Stromstärke]]                                                              |
| $N$                  | Windungszahö                                                                                  |
| $l_{m}$              | Lämge der Spule (Mittelpunkte des taurischen Körpers)                                         |
| $\Theta = I \cdot N$ | Summe aller Ströme, die durch Kreisförmige (Ringspule!) Flächen mit Umfang $l_{m}$ duchfluten |
### Einheit der magnetischen Feldstärke
$$
[H] = \frac{A}{m}
$$
### gerader Leiter

// Abb. Ermittlung Feldstärke gerader Leiter

- Stromdurchflossener gerader Leiter
- Aufpunkt $P$ im Abstand $r$ vom Mittelpunkt des Leiters 
=> ? Feldstärke im Punkt $P$

- Länge einer Feldlinie $l = 2 \cdot \pi \cdot r$
- elektrische Durchflutung: $\Theta = N \cdot I$; hier: $N = 1 \implies \Theta = I$
$$
H = \frac{\Theta}{l} = \frac{I}{2 \cdot \pi \cdot r}
$$
> Magnetische Feldstärke ist eine Größe, die in dem Punkt des Raums zugeordnet werden kann. Sie ist eine gerichtete Größe und lässt sich drch einen Vektor darstellen

## Magnetische Flussdichte
-> $H$ berücksichtigt die Materialeigenschaften des Raums nicht!
	-> Keine AUssage über die Stärke eines Felds möglich
-> weitere Größen nötig => magnetische Flussdichte $B$

// Abb. Stromführender Leiter im homogenen Magnetfeld

#### Versuchsaufbau mit
- magnetischem Feld (z.B. Hufeisenmagnet, zwei Stabmagnete)
- stromführender Leiter $I$ in Zeichenebene hinein, Länge $l$
=> "Leiterschaukel"

-  Magnetfeld übt Kraft auf den Stromdurchflossenen Leiter aus, die senkrecht zu Feldrichtung und Leiter steht
- Umkehrung der Stromrichtung $\implies$ Umkehrung der Kraft (Bewegungsrichtung)
- Umkehrung des Magnetfelds $\implies$ Umkehrung der Auslenkung

Variation der Parameter:
- Stromstärke $I$ $\implies$ höhere Stromstärke => größere Ausdehnung
$$
F \sim I
$$
- Länge des Leiters $l \implies$ längerer Leiter $\to$ größere Ausdehnung
$$
F \sim l
$$
$$
F \sim l \cdot I
$$
Proportionalitätskonstante ? $\implies B \implies F = B \cdot I \cdot l$  
  $\implies$ magnetische Flussdichte, gerichtete Größe, $B, H$ sind stets gleich gerichtet
  $$
[B] = \frac{[F]}{[I \cdot l]} = \frac{N}{A \cdot m} = \frac{V \cdot A \cdot s}{A \cdot m^2} = \frac{V \cdot \cancel{ A } \cdot s}{\cancel{ A } \cdot m^2} = \frac{V \cdot s}{m^2} = T (\text{Tesla})
$$
Dichte:
$$
\rho = \frac{\text{irgendwas}}{m^2}
$$
#### Verknüpfung von $B, H$ über Permeabilität
$$
B = \mu \cdot H
$$
beschreibt die Magnetischen Eigenschaften des vom Feld durchsetzten Raums!
$$
[\mu] = \frac{[B]}{[H]} = \frac{\left( \frac{V \cdot s}{m^2} \right)}{\frac{A}{m}} = \frac{V \cdot s}{A \cdot m}
$$
$$
\mu = \mu_{0} \cdot \mu_{r}
$$
$$
\mu_{0} = 4 \cdot \pi \cdot 10^{-7} \frac{V \cdot s}{A \cdot m}
$$

## Der magnetische Fluss
$$
\text{Flussdichte} = \frac{\text{Fluss}}{\text{Fläche}}
$$
$\implies$ Integration über die Fläche liefert den magnetischen Fluss

// Abb. homogenes magnetisches Feld, mit Körper

$$
\Phi = B \cdot A
$$
$$
[\Phi] = [B] \cdot [A] = \frac{V \cdot s}{\cancel{ m^2 }} \cdot \cancel{ m^2 } = V \cdot s = \text{Weber} = \text{Wb}
 $$
 
// Abb. Vom magnetischen Feld durchsetztes Flächenelement


gesucht: Anteil von $B$, der in Richtung $dA$ wirkt $\implies B \cdot \cos(\alpha)$
$$
d \Phi = \vec{B} \cdot dA \cdot \cos(\alpha)
$$
$$
\Phi = \int_{A} \vec{B} \cdot d\vec{A}
$$

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
