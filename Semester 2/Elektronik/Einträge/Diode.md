---
tags:
  - Elektronik
  - TODO
---

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\draw (5, 8.5) to[empty diode] (8, 8.5);
	\draw (5, 7.5) to[empty Schottky diode] (8, 7.5);
	\draw (5, 6.5) to[empty Zener diode] (8, 6.5);
	\draw (5, 5) to[empty bidirectionaldiode] (8, 5);
	\draw (5, 3.5) to[empty photodiode] (8, 3.5);
	\node[shape=rectangle, minimum width=4.215cm, minimum height=0.465cm] at (10.25, 8.5){} node[anchor=north west, align=left, text width=3.827cm, inner sep=6pt] at (8.125, 8.75){Normale Diode};
	\node[shape=rectangle, minimum width=4.215cm, minimum height=0.465cm] at (10.25, 7.5){} node[anchor=north west, align=left, text width=3.827cm, inner sep=6pt] at (8.125, 7.75){Schottky Diode};
	\node[shape=rectangle, minimum width=4.215cm, minimum height=0.465cm] at (10.25, 6.5){} node[anchor=north west, align=left, text width=3.827cm, inner sep=6pt] at (8.125, 6.75){Zener Diode};
	\node[shape=rectangle, minimum width=4.215cm, minimum height=0.465cm] at (10.25, 5){} node[anchor=north west, align=left, text width=3.827cm, inner sep=6pt] at (8.125, 5.25){Bidirektionale Diode};
	\node[shape=rectangle, minimum width=4.215cm, minimum height=0.465cm] at (10.25, 3.5){} node[anchor=north west, align=left, text width=3.827cm, inner sep=6pt] at (8.125, 3.75){Photodiode};
\end{tikzpicture}
\end{document}
```

Die Diode besteht aus einfachen [[pn-Übergang]].

Man unterscheidet bei Dioden zwischen:
- Kleinsignaldioden (kleine Ströme, kleine Spannungen)
- Leistungsdioden (große Ströme, große Spannungen)

Mit steigender Temperatur erhöht sich der Sperrstrom, da mehr Ladungsträger spontan generiert werden

[[Verarmungszone]] wirkt als Ventil 

// Abb. Diode

Der technische Strom fließt zur Spitze des Dreiecks bei Durchlassrichtung
Der technische Strom fließt entgegen der Diodenrichtung bei Sperrstrom

### Durchlassrichtung

// Abb

- Majoritätsträger werden zum Übergang hingetrieben
- An beiden Seiten werden Ladungsträger induziert, die die Raumladungszone aufheben.
- Über das ganze Bauelement kann dann ein Strom fließen

- Pdotierter Bereich: Anode
- Ndotierter Bereich: Kathode

anders als beim ohmschen Widerstand: kein linearer Zusammenhang
Durchlassbereich: 
- Nach Schwell / Schleusenbereich: starker linearer anstieg

mathematisches Modell: Shockley-Gleichung

$$
I_{0} = f(U_{D}) = \underbrace{ I_{S} }_{ \text{Sättigungssperrstrom (}\mu\text{A / nA)} } \cdot (e^{\frac{U_{D}}{U_{T}}} - 1) \qquad \text{Für } U_{D} > 0
$$

- $U_{T}$ Ist die Temperaturspannung (bei Raumtemperatur etwa $\simeq 25\text{ mV}$)
- Diode hat einen NTC (negativen Temperaturkoeffizient)

mit Korrekturfaktor:

$$
I_{0} = f(U_{D}) = I_{S} \cdot (e^{\frac{U_{D}}{n \cdot U_{T}}} - 1) \qquad \text{Für } U_{D} > 0 \qquad n = \text{Idealityfactor} \qquad 1 \leq n \leq 2
$$

$$
U_{T} = \frac{U_{B} \cdot T}{e}
$$

$T$: Temperatur in $K$ (Raumtemperatur $\simeq 300 K$)
$U_{B} = 1,38\cdot 10^{-23} \frac{\text{J}}{\text{K}}$ (Boltzmann-Konstante)
$e = 1,602 \cdot 10^{-11} C$ (Elemtentarladung)

Näherung:
$$
I_{D} = I_{S} \cdot e^{\frac{U_{D}}{n\cdot U_{T}}}
$$
$$
U_{D} = n \cdot U_{T} \cdot \ln\left( \frac{I_{D}}{I_{S}} \right)
$$

Ge-Diode: Sperrstrom im $\mu A$ Bereich, danach Wärme-Durchbruch
Si-Diode: Sperrstrom im $nA$ Bereich, nahezu Konstant, danach Zener-Durchbruch

> [!Info] Zenerdurchbruch
> hauptsächlich stark dotierte Si-Dioden
> Strom steigt immer weiter, da sich das Bauteil immer weiter erwärmt, bis die Diode beschädigt ist 
> Maximaltemperatur: $180°C$

Unterschied Zener-Durchbruch <-> Wärmedurchbruch:
Zenerdurchbruch: zu viel Spannung
Wärme-Durchbruch: zu große Stromstärke
### Bahnwiderstand

Halbleitermaterial hat einen ohm'schen Widerstand,
Anschlussdrähte haben einen ohm'schen Widerstand

// Abb: Diode mit Innenwiderstand in technischer Zeichnung

$$
U_{D} = \underbrace{ n \cdot U_{T} \cdot \ln\left( \frac{I_{D}}{I_{S}} \right) }_{ U_{D}' } + I_{D} \cdot R_{B}
$$

Leistungsdioden: $R_{B} \simeq 0,01 \Omega$
Kleinsignaldioden: $R_{B} \simeq 10 \Omega$

Bei großen Diodenströmen überwiegr der ohmsche Anteil. Darum linearer anstieg

>[!Fakt] Stationärer Betrieb
>Angelegte Spannung bleibt gleich


### Modell: Diode als Spannungsgesteuerter Schalter

// Abb: Aktiverzweipol

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

Bei einer Zenerdiode findet der Zenerdurchbruch bereits bei niedriger Spannung in Sperrrichtung statt

Verhalten im Durchbruchbereich:
=> Lawineneffekt (Beschleunigte Ladungsträger => Kollosion im Gitter => mehr Ladungsträger)
=> Zenereffekt: Sperrspannung erzeugt ein starkes elektrisches Feld (lokal am pn-Übergang), Elektronen werden aus dem Gitter gezerrt => Freie Ladungsträger, Sperrschicht Leitfähig
	Entscheidend: Dotierung ($200 k\frac{V}{cm}$)