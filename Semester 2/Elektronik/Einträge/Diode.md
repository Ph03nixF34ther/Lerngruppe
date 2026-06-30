---
tags:
  - Elektronik
---
# Übersicht: Schaltzeichen für Dioden

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

- [[Diode]]
- [[Zenerdiode]]
- [[Photodiode]]

> [!Important] Durchlassrichtung
> Der technische Strom fließt zur Spitze des Dreiecks bei Durchlassrichtung
> Der technische Strom fließt entgegen der Diodenrichtung bei Sperrstrom

Man unterscheidet bei Dioden zwischen:
- Kleinsignaldioden (kleine Ströme, kleine Spannungen)
- Leistungsdioden (große Ströme, große Spannungen)

Mit steigender Temperatur erhöht sich der Sperrstrom, da mehr Ladungsträger spontan generiert werden.

# Die Diodenkennlinie

Misst man denjenigen Strom, der eine Diode durchströmt bei einer angelegten Spannung, erhält man das folgende Bild:

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=-11, xmax=5,
    xtick={.7},
    ymin=-2, ymax=5,
    ytick=\empty,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[smooth,green,mark=none, domain=-10:-9,samples=20, thick]
{-20*exp(-5*(x+11))-.379999};

\addplot[smooth,green,mark=none, domain=-9:2,samples=60, thick]
{(19/50)*(exp((10*x)/7)-1)};

\addplot[ultra thick, dotted] coordinates {(.7,0) (.7,{(19/50)*(exp((10*.7)/7)-1)})} node[right, midway] {$U_F$};

\addplot[ultra thick, dotted] coordinates {(-10.1,0) (-10.1,{-20*exp(-5*(-10.1+11))-.379999})} node[left, midway] {$U_B$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Dieses Bild ergibt sich dadurch, dass eine Diode ein [[pn-Übergang]] ist. Dieser pn-Übergang kann in [[Verarmungszone|Sperrrichtung]] ($U_{D} < 0$) oder in [[Verarmungszone|Durchlassrichtung]]  ($U_{D} > 0$) geschaltet werden. 
Die Diode benötigt dennoch mindestens eine Spannung von $0,7\ V$ um die Sperrschicht abzubauen.

# Vereinfachung und Ersatzschaltung

## Lineare Näherung

Um einfacher mit der Diode arbeiten zu können, nutzen wir gegebenenfalls Ersatzschaltungen, die uns ein Verständnis über die Funktionsweise geben und auch beim Rechnen mit dem Bauteil eine gute Näherung ermöglichen.

Für die Kennlinie kann eine Näherung über eine Lineare Funktion mit Nullpunkt in der Durchlassspannung angenommen werden. Die Steigung dieser Gerade muss experimentell ermittelt werden und Variiert zwischen den Bauteilen.

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=-11, xmax=5,
    xtick={.7},
    ymin=-2, ymax=5,
    ytick=\empty,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[smooth,green,mark=none, domain=-10:-9,samples=20, thick]
{-20*exp(-5*(x+11))-.379999};

\addplot[smooth,green,mark=none, domain=-9:1.7,samples=60, thick]
{(19/50)*(exp((10*x)/7)-1)} node[left, midway] {Kennlinie};

\addplot[smooth,cyan,mark=none, domain=-11:0.7,samples=2, thick]
{0};

\addplot[smooth,cyan,mark=none, domain=0.7:2,samples=2, thick]
{4*(x - 0.7)} node[right, midway] {Näherung};

\addplot[ultra thick, dotted] coordinates {(.7,0) (.7,{(19/50)*(exp((10*.7)/7)-1)})} node[right, midway] {$U_F$};

\addplot[ultra thick, dotted] coordinates {(-10.1,0) (-10.1,{-20*exp(-5*(-10.1+11))-.379999})} node[left, midway] {$U_B$};

\end{axis}
\end{tikzpicture}
\end{document}
```

Diese approximierte Gerade kann dann über die folgende Schaltung beschrieben werden:

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[ocirc, rotate=-90] at (9.737, 6.737){};
	\node[ocirc, rotate=-90] at (3.737, 6.737){};
	\node[trarrow, xscale=-1, yscale=-1] at (9.237, 5.737){};
	\draw (9.737, 5.737) to[european resistor, l={$r_F$}, v=$ $] (6.737, 5.737);
	\draw (6.737, 5.737) to[european voltage source, l=$U_S$, v_=$0.7\ V$] (3.737, 5.737);
	\draw (3.737, 5.737) -- (3.737, 6.737);
	\draw (9.737, 5.737) -- (9.737, 6.737);
\end{tikzpicture}
\end{document}
```

Die Spannungsquelle stellt sicher, dass die Durchlassspannung überwunden werden muss, um leitend zu werden. Für den leitenden Fall ist der Widerstand als lineares Bauteil angesetzt. 
Damit die Diode immer noch als "Einbahnstraße" gesehen werden kann ist der Stromrichtungspfeil vor dem Widerstand eingezeichnet

> [!Important] Arbeiten mit Kennlinien
> In der Klausur soll mit einer gegebenen Kennlinie ***grafisch*** der Arbeitspunkt der Schaltung gefunden werden. 
> Wie genau das geht, steht [[Arbeitsgerade|hier]]
> In größeren Schaltungen nimmt man die Diode als spannungsgesteuerten Schalter an. 
> Wie genau das geht, steht [[Diode als spannungsgesteuerter Schalter|hier]]

## Genauere Näherung mittels der Shockley-Gleichung

Das mathematische Modell von Shockley ist genauer, wird aber in der Praxis kaum genutzt.
Es beschreibt den Verlauf der Kennlinie vorzüglich in Durchlassrichtung.

$$
I_{D} = f(U_{D}) = I_{S} \cdot (e^{\dfrac{U_{D}}{n \cdot U_{T}}} - 1)
$$

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=0, xmax=2,
    xtick={.7},
    ymin=-2, ymax=5,
    ytick=\empty,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[smooth,green,mark=none, domain=0:0.87,samples=60, thick]
{0.0000001 * (exp(x / 0.05) - 1)} node[right, midway] {Shockley-gleichung};

\end{axis}
\end{tikzpicture}
\end{document}
```

Als $I_{S}$ wird der sogenannte Sperrstrom ($10^{-12} \leq I_{S} \leq 10^{-6}$)
dem Emissionskoeffizient $n \simeq1 \dots 2$
Als $U_{T}$ wird die Temperaturspannung bezeichnet ($U_{T} \simeq 25\ mV$) 

$$
U_{T} =\dfrac{k_{b} \cdot T}{e} \simeq 25\ mV \qquad \text{bei } 20°C
$$

$T$: Temperatur in $K$ (Raumtemperatur $\simeq 300 K$)
$k_{B} = 1,38\cdot 10^{-23} \frac{\text{J}}{\text{K}}$ (Boltzmann-Konstante)
$e = 1,602 \cdot 10^{-11} C$ (Elemtentarladung)

Näherung der Shockleygleichung:
$$
I_{D} = I_{S} \cdot e^{\frac{U_{D}}{n\cdot U_{T}}}
$$

Umkehrfunktion:

$$
U_{D} = n \cdot U_{T} \cdot \ln\left( \frac{I_{D}}{I_{S}} \right)
$$

# Durchbruchverhalten von Dioden

Wird eine zu starke Spannung in Sperrrichtung angelegt kommt es irgendwann zu einem Durchbruch. 
Die Art des Durchbruchs, und wann er einsetzt ist abhängig vom Bauteil:

Ge-Diode: Sperrstrom im $\mu A$ Bereich, danach [[Wärmedurchbruch]]
Si-Diode: Sperrstrom im $nA$ Bereich, nahezu Konstant, danach [[Zenerdurchbruch]]

# Bahnwiderstand

Halbleitermaterial hat einen ohm'schen Widerstand,
Anschlussdrähte haben einen ohm'schen Widerstand

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}[transform shape]
	% Paths, nodes and wires:
	\node[ocirc, rotate=-90] at (9.737, 6.737){};
	\node[ocirc, rotate=-90] at (3.737, 6.737){};
	\draw (9.75, 5.75) to[european resistor, l={$r_B$}] (6.75, 5.75);
	\draw (3.737, 5.737) -- (3.737, 6.737);
	\draw (9.737, 5.737) -- (9.737, 6.737);
	\draw (6.737, 5.737) to[empty diode] (3.75, 5.75);
\end{tikzpicture}
\end{document}
```

Dieser Widerstand kann auch in die Shockleygleichung übernommen werden:

$$
U_{D} = \underbrace{ n \cdot U_{T} \cdot \ln\left( \frac{I_{D}}{I_{S}} \right) }_{ U_{D}' } + I_{D} \cdot R_{B}
$$

Leistungsdioden: $R_{B} \simeq 0,01 \Omega$
Kleinsignaldioden: $R_{B} \simeq 10 \Omega$

Bei großen Diodenströmen überwiegt der ohmsche Anteil. 
Darum kann man einen linearen Anstieg annehmen


# Kleinsignalverhalten 

Arbeitspunkt (bestimmt durch externe Schaltung) => Geringfügige Spannungsänderungen => Änderung des Stroms

$$
R_{D} = \frac{dU_{D}}{dI_{D}} = \frac{n\cdot U_{T}}{I_{D}}
$$

Da fehlt noch der Bahnwiderstand

>[!Important] Dioden Raumladungszone
>Die Raumladungszone wirkt ähnlich einem Kondensator. Einem stark frequenzabhängigem Bauteil, weshalb dieses Modell nur für niedrige Frequenzen oder Gleichspannung gültig ist
>=> Gleichstrom Kleinsignalersatzschaltbild

mit Berücksichtigung der Kapazität: Wechselstrom Kleinsignal Ersatzschaltbild

# Temperaturverhalten von Dioden

## Temperaturverhalten im Sperrbetrieb

![[Temperatur-Sperrrichtung.png|400]]

Bei höherer Temperatur entstehen thermisch in der [[Verarmungszone|Sperrschicht]] mehr freie [[Ladungsträger]], die einen größeren Sperrstrom ermöglichen. selbes gilt auch für die [[Verarmungszone|Durchlassrichtung]]. Damit findet in Durchlassrichtung der Durchbruch früher statt.

![[Temperatur-Durchlass.png|400]]



# Grenzwerte und Kennlinien

>[!Info] Grenzwerte vs. Kennwerte
>Grenzwerte dürfen ***NICHT*** überschritten werden, da das zur Zerstörung des Bauteils führen kann
>Kennwerte können überschritten werden. Sie charakterisieren Das Bauteil und beschreiben ihr Verhalten

## Typisch angegebene Grenzwerte

- maximaler Durchlassstrom $I_{F}$
- maximaler periodischer Spitzenstron $I_{FRM}$
- maximaler Stoßstrim $I_{FSM}$
- Verlustleistung $P_{tot}$
- Sperrschichttemperatur $T_{y}$
- Spitzensperrspannung $U_{RM}$
- Richtstrom (arithmetischer Mittelwert des Stroms)

## Typisch angegebene Kennwerte

- Durchlassspannung (bei gegebenem Strom): $U_{F}$
- Sperrstrom: $I_{R}$
- Sperrschichtkapazität: $C$; $C_{J}$
- Sperrschichtverzögerung $t_{rr}$
- Wärmewiderstand: thermischer Widerstand der Sperrschicht (Junction) zur Umbebung $R_{thJA}$