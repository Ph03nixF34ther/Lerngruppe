---
tags:
  - TODO
aliases:
  - magnetischen Flussdichte
  - magnetischer Flussdichte
  - magnetischer Flussdichten
---
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
| $H$                  | [[magnetische Feldstärke]]                                                                    |
| $I$                  | [[Elektrische Stromstärke]]                                                                   |
| $N$                  | Windungszahö                                                                                  |
| $l_{m}$              | Lämge der Spule (Mittelpunkte des taurischen Körpers)                                         |
| $\Theta = I \cdot N$ | Summe aller Ströme, die durch Kreisförmige (Ringspule!) Flächen mit Umfang $l_{m}$ duchfluten |



## Magnetische Flussdichte
-> $H$ berücksichtigt die Materialeigenschaften des Raums nicht!
	-> Keine Aussage über die Stärke eines Felds möglich
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
