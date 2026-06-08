---
tags:
  - Elektronik
  - TODO
---
### Grafische Lösung 

// Abb: Kennlinie und Lastgerade

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (2, 8.5) to[european resistor] (5, 8.5);
	\draw (5, 8.5) to[empty diode] (8, 8.5);
\end{tikzpicture}
\end{document}
```

Kennlinie Diode:
beschreibt den Zusammenhang Strom / Spannung an Bauteil

=> Arbeitspunkt 
!!!!

Zastro Übungsaufgaben

### Differenzieller Widerstand

// 

Lineare Näherung der Diodenkennlinie im Arbeitspunkt
Punkt auf der Diodenkennlinie, Tangente an der Kennlinie

$$
R_{d} = \frac{\Delta U_{D}}{\Delta I_{D}}
$$

Umgekehrt:
$$
R_{D} = 10\Omega
$$
Veränderte Spannung => Änderung des Stroms der Diode berechenbar

### Kleinsignalverhalten / Kleinsignalbetrieb / Kleinsignalersatzschaltbild

Arbeitspunkt (bestimmt durch externe Schaltung) => Geringfügige Spannungsänderungen => änderung des Stroms

$$
R_{D} = \frac{dU_{D}}{dI_{D}} = \frac{n\cdot U_{T}}{I_{D}}
$$

Da fehlt noch der Bahnwiderstand

>[!Important] Dioden Raumladungszone
>Die Raumladungszone wirkt ähnlich einem Kondensator. Einem stark frequenzabhängigem Bauteil, weshalb dieses Modell nur für niedrige Frequenzen oder Gleichspannung gültig ist
>=> Gleichstrom Kleinsignalersatzschaltbild

mit Berücksichtigung der Kapazität: Wechselstrom Kleinsignal Ersatzschaltbild

### Schaltverhalten von Halbleiter-Dioden

Diode in Durchlassrichtung: niederohmig, RLZ verschwindet ( mit Ladungsträgern überschwemmt)
Bauteil wird wieder hochohmig, wenn die Sperrschicht wieder aufgebaut und die Ladungsträger verschwinden sind

### Zenerdioden
Bei einer Zenerdiode findet der Zenerdurchbruch bereits bei niedriger Spannung in Sperrrichtung statt

Verhalten im Durchbruchbereich:
=> Lawineneffekt (Beschleunigte Ladungsträger => Kollosion im Gitter => mehr Ladungsträger)
=> Zenereffekt: Sperrspannung erzeugt ein starkes elektrisches Feld (lokal am pn-Übergang), Elektronen werden aus dem Gitter gezerrt => Freie Ladungsträger, Sperrschicht Leitfähig
	Entscheidend: Dotierung ($200 k\frac{V}{cm}$)
	Unterschreiten der Zener-Spannung: Feldstärke sinkt wieder: keine weitere Regeneration von Ladungsträgern: Sperrschicht wird wieder Hochohmig

// Abb: Sperrbereich, Knickbereich Durchbruchbereich