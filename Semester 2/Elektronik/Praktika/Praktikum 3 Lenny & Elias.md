# Vorbereitungsaufgaben

## Aufgabe 1

#### Gegeben:
Quellspannung $U_{q} = 5\ V$
Wiederstand $R_{1} = 1000 \Omega$
Ausgangspotential am Punkt $A = 2,2\ V$

#### Lösung:
Da die Gesamtspannung $U_q$ die Summe der Teilspannungen ist ($U_q = U_1 + U_2$), können wir die Spannung über $R_1$ direkt berechnen:

$$U_1 = U_q - U_2$$
$$U_1 = 5\,\text{V} - 2{,}2\,\text{V} = 2{,}8\,\text{V}$$
Beim unbelasteten Spannungsteiler verhalten sich die Spannungen proportional zu den Widerständen:
$$\frac{U_2}{U_1} = \frac{R_2}{R_1}$$

Diese Formel stellen wir nach dem gesuchten Widerstand $R_2$ um:
$$R_2 = R_1 \cdot \frac{U_2}{U_1}$$
$$R_2 = 1000\,\Omega \cdot \frac{2{,}2\,\text{V}}{2{,}8\,\text{V}}$$
$$R_2 \approx 785{,}71\,\Omega$$
## Aufgabe 2

**a) p-Kanal Anreicherungstyp** _(Unterbrochene Linie = Anreicherungstyp (normal sperrend); Pfeil zeigt nach außen = p-Kanal)_

**b) n-Kanal Anreicherungstyp** _(Unterbrochene Linie = Anreicherungstyp (normal sperrend); Pfeil zeigt nach innen = n-Kanal)_

**c) p-Kanal Verarmungstyp** _(Durchgehende Linie = Verarmungstyp (normal leitend); Pfeil zeigt nach außen = p-Kanal)_

**d) n-Kanal Verarmungstyp** _(Durchgehende Linie = Verarmungstyp (normal leitend); Pfeil zeigt nach innen = n-Kanal)_

## Aufgabe 3
#### Schwellenspannung $U_{GS(th)}$:
Die Schwellenspannung (oft auch als $U_{th}$ oder $U_T$ bezeichnet) ist die Mindestspannung zwischen Gate und Source, die benötigt wird, um einen MOSFET des Anreicherungstyps einzuschalten.

#### Sättigungsspannung $U_{DS,at}$:
Ab dieser Grenze ($U_{DS} \ge U_{DS,sat}$) sorgt eine weitere Erhöhung von $U_{DS}$ kaum noch für einen höheren Strom. Der Drainstrom $I_D$ bleibt nahezu **konstant** (gesättigt) und wird fast ausschließlich von der Gate-Spannung $U_{GS}$ gesteuert.

## Aufgabe 4

#### Gegeben: (Aus Datenblatt)
Maximale Verlustleistung $P_{tot}=0,2W$ (bei 25°C)
Wiederstand bei Beleuchtung **($1000\,\text{lx}$):** $75\,\dots\,300\,\Omega$

#### Lösung:
Die elektrische Leistung an einem Widerstand ist allgemein definiert als:
$$P = U \cdot I$$
Da uns die Spannung über dem LDR im konkreten Belastungsfall nicht direkt gegeben ist, ersetzen wir $U$ mithilfe des Ohmschen Gesetzes ($U = R \cdot I$):
$$P = (R \cdot I) \cdot I = I^2 \cdot R$$
Da wir den maximalen Strom ($I_{\max}$) suchen, stellen wir die Formel nach $I$ um:
$$I^2 = \frac{P_{\text{tot}}}{R}$$
$$I_{\max} = \sqrt{\frac{P_{\text{tot}}}{R}}$$
Da wir den ungünstigsten Fall betrachten, bei dem der LDR stark beleuchtet wird und sein Widerstand auf den minimalen Datenblattwert von **$R_{\min} = 75\,\Omega$** absinkt.

Setzen wir die Werte in die Formel ein:

$$I_{\max} = \sqrt{\frac{0{,}2\,\text{W}}{75\,\Omega}}$$
$$I_{\max} = \sqrt{0{,}002667\,\text{A}^2} \approx 0{,}05164\,\text{A}$$
## Aufgabe 5

![[PWM.png]]

## Aufgabe 6

#### Gegeben:
Nennleistung der Lampe: $P_{nen}=3W$
Tastverhältnis $\delta = 80\% = 0,8$ (aus vorheriger Aufgabe)

#### Lösung:
$$P_{mittel}= \delta \cdot P_{nen}$$
$$
P_{mittel}=0,8 \cdot 3W = 2,4W
$$
#### Antwort:
Die mittlere Leistung der Lampe beträgt **$2{,}4\,\text{W}$**. Durch die PWM-Ansteuerung leuchtet die Lampe also mit $80\%$ ihrer maximalen Leistung.

# Praktikumsaufgaben
## Aufgabe 1

### Teil 1

#### Teilaufgabe b

| $0\ V$  | $0,5\ V$     | $1\ V$       | $1,446\ V$ | $1,544\ V$ | $1,59\ V$ | $1,738\ V$ | $1,849\ V$ | $1,9\ V$  | $1,96\ V$ | $2,05\ V$ | $2,135\ V$ |
| ------- | ------------ | ------------ | ---------- | ---------- | --------- | ---------- | ---------- | --------- | --------- | --------- | ---------- |
| $0\ mA$ | $0,1\ \mu A$ | $0,2\ \mu A$ | $0,1\ mA$  | $0,5\ mA$  | $1\ mA$   | $10\ mA$   | $50\ mA$   | $100\ mA$ | $200\ mA$ | $500\ mA$ | $1\ A$     |

---

#### Teilaufgabe c & d

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}
\begin{axis}[
    width=\textwidth,
    xmin=0, xmax=2.5,
    xlabel={$U_{DS}$},
    ymin=0, ymax=500,
    ylabel={$I_D$}
]
\addplot[thick, smooth] coordinates {
	(0, 0)
	(0.5, 0.0001)
	(1, .0002)
	(1.446, 0.1)
	(1.544, 0.5)
	(1.59, 1)
	(1.738, 10)
	(1.849, 50)
	(1.9, 100)
	(1.96, 200)
	(2.05, 500)
	(2.135, 1000)
};

\addplot[thick, dotted] coordinates {
	(1.8, 0)
	(1.8, 50)
} node[midway, right] {$U_{GS(th)}$};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

### Teil 2

#### Teilaufgabe b

| $U_{GS}$ | $0\ V$        | $0,1\ V$   | $0,2\ V$   | $0,3\ V$    | $0,4\ V$   | $0,5\ V$   | $1\ V$     | $2\ V$      | $3\ V$      | $4\ V$     | $6\ V$     | $8\ V$     | $12\ V$    |
| -------- | ------------- | ---------- | ---------- | ----------- | ---------- | ---------- | ---------- | ----------- | ----------- | ---------- | ---------- | ---------- | ---------- |
| $1,6\ V$ | $0,05\ \mu A$ | $1,19\ mA$ | $1,25\ mA$ | $1,26\ mA$  | $1,26\ mA$ | $1,27\ mA$ | $1,33\ mA$ | $1,4\ mA$   | $1,45\ mA$  | $1,5\ mA$  | $1,6\ mA$  | $1,73\ mA$ | $1,99\ mA$ |
| $1,7\ V$ | $0,45\ \mu A$ | $5,02\ mA$ | $5,2\ mA$  | $5,5\ mA$   | $5,57\ mA$ | $5,7\ mA$  | $5,98\ mA$ | $6,35\ mA$  | $6,63\ mA$  | $6,9\ mA$  | $7,5\ mA$  | $8,1\ mA$  | $9,5\ mA$  |
| $1,8\ V$ | $0,5\ \mu A$  | $21,6\ mA$ | $23,7\ mA$ | $24,85\ mA$ | $25,4\ mA$ | $25,8\ mA$ | $27\ mA$   | $28,7\ mA$  | $30,2\ mA$  | $31,6\ mA$ | $35,2\ mA$ | $38,1\ mA$ | $46,6\ mA$ |
| $1,9\ V$ | $0,4\ \mu A$  | $74,3\ mA$ | $84\ mA$   | $88,1\ mA$  | $90,7\ mA$ | $93,4\ mA$ | $99,1\ mA$ | $107,3\ mA$ | $114,5\ mA$ | $120\ mA$  | $140\ mA$  | $165\ mA$  | $220\ mA$  |

---

#### Teilaufgabe c & d

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}
\begin{axis}[
    width=\textwidth,
    clip=false,
    xmin=0, xmax=12,
    xlabel={$U_{DS}$},
    ymin=0, ymax=260,
    ylabel={$I_D$}
]
\addplot[thick, smooth] coordinates {
	(0, 0.00005)
	(0.1, 1.19)
	(0.2, 1.25)
	(0.3, 1.26)
	(0.4, 1.26)
	(0.5, 1.27)
	(1, 1.33)
	(2, 1.4)
	(3, 1.45)
	(4, 1.5)
	(6, 1.6)
	(8, 1.73)
	(12, 1.99)
} node[right] {$1.6$ V};

\addplot[thick, smooth] coordinates {
	(0, 0.00045)
	(0.1, 5.02)
	(0.2, 5.2)
	(0.3, 5.5)
	(0.4, 5.57)
	(0.5, 5.7)
	(1, 5.98)
	(2, 6.35)
	(3, 6.63)
	(4, 6.9)
	(6, 7.5)
	(8, 8.1)
	(12, 9.5)
} node[right] {$1.7$ V};

\addplot[thick, smooth] coordinates {
	(0, 0.0005)
	(0.1, 21.6)
	(0.2, 23.7)
	(0.3, 24.85)
	(0.4, 25.4)
	(0.5, 25.8)
	(1, 27)
	(2, 28.7)
	(3, 30.2)
	(4, 31.6)
	(6, 35.2)
	(8, 38.1)
	(12, 46.6)
} node[right] {$1.8$ V};

\addplot[thick, smooth] coordinates {
	(0, 0.0004)
	(0.1, 74.3)
	(0.2, 84)
	(0.3, 88.1)
	(0.4, 90.7)
	(0.5, 93.4)
	(1, 99.1)
	(2, 107.3)
	(3, 114.5)
	(4, 120)
	(6, 140)
	(8, 165)
	(12, 220)
} node[right] {$1.9$ V};

\addplot coordinates {
	(0.1, 1.19)
	(0.2, 5.2)
	(0.3, 24.85)
	(0.4, 90.7)
} node[midway, right] {$U_{DS,ab}$};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

#### Teilaufgabe e

Sperrbereich: Der Sperrbereich liegt bei $U_{GS} \le U_{DS,ab}$ und somit ist $I_D \approx 0$

Ohm'scher Bereich: Der Ohm'sche Bereich Bereich liegt bei $U_{DS,ab} < U_{GS} < 0$ und kleines $U_{DS}$ und hier wirkt der JFET wie ein spannungsgesteuerter Widerstand

Abschnürbereich:  Der Abschnürbereich liegt bei großem $U_{DS}$ ($U_{DS} \ge U_{GS} - U_{DS,ab}$)

---

## Aufgabe 2

### Teilaufgabe a

``` tikz
\usepackage{pgfplots}

\begin{document}
\begin{tikzpicture}
\begin{axis}[
    width=\textwidth,
    clip=false,
    xmin=0, xmax=12,
    xlabel={$U_{DS}$},
    ymin=0, ymax=260,
    ylabel={$I_D$}
]
\addplot[thick, smooth] coordinates {
	(0, 0.00005)
	(0.1, 1.19)
	(0.2, 1.25)
	(0.3, 1.26)
	(0.4, 1.26)
	(0.5, 1.27)
	(1, 1.33)
	(2, 1.4)
	(3, 1.45)
	(4, 1.5)
	(6, 1.6)
	(8, 1.73)
	(12, 1.99)
} node[right] {$1.6$ V};

\addplot[thick, smooth] coordinates {
	(0, 0.00045)
	(0.1, 5.02)
	(0.2, 5.2)
	(0.3, 5.5)
	(0.4, 5.57)
	(0.5, 5.7)
	(1, 5.98)
	(2, 6.35)
	(3, 6.63)
	(4, 6.9)
	(6, 7.5)
	(8, 8.1)
	(12, 9.5)
} node[right] {$1.7$ V};

\addplot[thick, smooth] coordinates {
	(0, 0.0005)
	(0.1, 21.6)
	(0.2, 23.7)
	(0.3, 24.85)
	(0.4, 25.4)
	(0.5, 25.8)
	(1, 27)
	(2, 28.7)
	(3, 30.2)
	(4, 31.6)
	(6, 35.2)
	(8, 38.1)
	(12, 46.6)
} node[right] {$1.8$ V};

\addplot[thick, smooth] coordinates {
	(0, 0.0004)
	(0.1, 74.3)
	(0.2, 84)
	(0.3, 88.1)
	(0.4, 90.7)
	(0.5, 93.4)
	(1, 99.1)
	(2, 107.3)
	(3, 114.5)
	(4, 120)
	(6, 140)
	(8, 165)
	(12, 220)
} node[right] {$1.9$ V};

\addplot[mark=\empty] coordinates {
	(0, 250)
	(12, 0)
} node[midway, right] {Arbeitsgerade};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

### Teilaufgabe b

$$\begin{array}{l}
\begin{array}{l}
I_{R_1} = \dfrac{U_{GS, max}}{R_2} = \dfrac{3 \text{ V}}{1 \text{ k} \ohm} \\
I_{R_1} = 3 \text{ mA}
\end{array} \\ \\
\begin{array}{l}
R_1 = \dfrac{U_{Bat} - U_{GS, max}}{I_{R_1}} = \dfrac{9 \text{ V}}{3 \text{ mA}} \\
R_1 = 3 \text{ k} \ohm
\end{array}
\end{array}$$

---

### Teilaufgabe d

| $U_{GS}$ | $0\ V$       | $1,6\ V$   | $1,7\ V$   | $1,8\ V$   | $1,9\ V$    | $2\ V$      | $2,1\ V$    | $2,2\ V$    | $2,3\ V$    |
| -------- | ------------ | ---------- | ---------- | ---------- | ----------- | ----------- | ----------- | ----------- | ----------- |
| $I_D$    | $1,2\ \mu A$ | $1,68\ mA$ | $9,33\ mA$ | $44,6\ mA$ | $167,8\ mA$ | $258,5\ mA$ | $259,1\ mA$ | $257,4\ mA$ | $257,7\ mA$ |
| $U_{DS}$ | $12\ V$      | $11,77\ V$ | $11,8\ V$  | $11,18\ V$ | $6,12\ V$   | $0,115\ V$  | $0,048\ V$  | $0,032\ V$  | $0,029\ V$  |

---

### Teilaufgabe e

Der Drainstrom $I_D$ steigt mit zunehmender Gate-Source-Spannung $U_{GS}$, da eine höhere Gate-Source-Spannung $U_{GS}$ es erlaubt, dass mehr Strom fließen kann

---

## Aufgabe 3

### Teilaufgabe a

Bei Umgebungslicht:
$3,9\ k\Omega$

Bei Dunkelheit
$11\ k\Omega$

---

### Teilaufgabe b

Der Fotowiderstand (LDR) ist ersetzt den $R_2$, denn dieser bestimmt die Gate-Source-Spannung $U_{GS}$, welche wiederum den Fluss durch die Lampe bestimmt, welcher von dem Fotowiderstand (LDR) gesteuert werden soll

---

### Teilaufgabe c

$$\begin{array}{l}
R_{1} = \dfrac{U_{1}}{U_{2}} \cdot R_{LDR,Dunkel} = \dfrac{10 \text{ V}}{2 \text{ V}} \cdot 11 \text{ k} \ohm \\
R_1 = 55 \text{ k} \ohm
\end{array}$$

---

## Aufgabe 4

### Teilaufgabe b

![[Lampe1.jpg|500]]

---

### Teilaufgabe c

Das Ausgangssignal verschiebt sich zum Eingangssignal um eine habe Periode

---

### Teilaufgabe d

Es handelt sich um einen Low-Side Schaltungstyp

---

### Teilaufgabe e

Geöffneter Schalter: Die mittlere Leistung entspricht $50\%$ der vollen Leistung also $1.5 \text{ W}$

Geschlossener Schalter: Die mittlere Leistung entspricht $100\%$ der vollen Leistung also $3 \text{ W}$

---

### Teilaufgabe f

Die mittlere Leistung entspricht bei $90\%$ $3 \text{ W} \cdot 0.9 = 2.7 \text{ W}$