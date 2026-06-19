# Aufgabe 1: Kennlinienaufnahme Diode

## Teilaufgabe b

| $U_{D}$  in V | 0          | 0,1            | 0,15          | 0,2           | 0,4            | $0,58 \ V$ | $0,61\ V$ | $0,63\ V$ | $0,65\ V$ | $0,68\ V$ | $0,71\ V$ | $0,74\ V$ |
| ------------- | ---------- | -------------- | ------------- | ------------- | -------------- | ---------- | --------- | --------- | --------- | --------- | --------- | --------- |
| $I_{D}$ in mA | $0\ \mu A$ | $0,019\ \mu A$ | $0,04\ \mu A$ | $0,13\ \mu A$ | $15,2\  \mu A$ | 1          | 2         | 3         | 5         | 10        | 20        | 30        |

---

## Teilaufgabe c

| $U_{D}$  in V | -1            | -2             | -5             | -10         | -20          | -30          | -40          | -50          | -55            | -60          |
| ------------- | ------------- | -------------- | -------------- | ----------- | ------------ | ------------ | ------------ | ------------ | -------------- | ------------ |
| $I_{D}$ in mA | $-0,1\ \mu A$ | $-0,19\ \mu A$ | $-0,49\ \mu A$ | $-1\ \mu A$ | $-2\  \mu A$ | $-3\  \mu A$ | $-4\  \mu A$ | $-5\  \mu A$ | $-5,5\  \mu A$ | $-6\  \mu A$ |

---

## Teilaufgabe d

// TODO Kennlinie

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=-1, xmax=6,
    ymin=0, ymax=60,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[ 
	mark=*, % Marker style (e.g., *, square, circle) 
	mark size=1pt % Size of the marker 
] coordinates { 
	(0, 0)
	(0.1, 0.000019)
	(.15, 0.00004)
	(.2, 0.000013)
	(.4, 0.00152)
	(.58, 1)
	(.61, 2)
	(.63, 3)
	(.65, 5)
	(.68, 10)
	(.71, 20)
	(.74, 30)
	(.77, 50)
};

\addplot[thick, dotted] coordinates {(.7,0) (.7, 60)} node[left, midway] {$U_F$};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

## Teilaufgabe e

| $U_{D}$  in V | $0$     | $1,552$    | $1,57$    | $1,652$   | $1,69$  | $1,77$  | $1,81$    | $1,9$      | $2,1$     | $2,2$     |
| ------------- | ------- | ---------- | --------- | --------- | ------- | ------- | --------- | ---------- | --------- | --------- |
| $I_{D}$ in mA | $0\ mA$ | $0,05\ mA$ | $0,1\ mA$ | $0,5\ mA$ | $1\ mA$ | $3\ mA$ | $5\   mA$ | $10\   mA$ | $20\  mA$ | $30\  mA$ |
Rote LED

---

## Teilaufgabe f

// TODO Kennlinie

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=0, xmax=5,
    ymin=0, ymax=60,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[ 
	mark=*, % Marker style (e.g., *, square, circle) 
	mark size=1pt % Size of the marker 
] coordinates { 
	(0, 0)
	(1.552, 0.05)
	(1.57, 0.1)
	(1.65, 0.5)
	(1.69, 1)
	(1.77, 3)
	(1.81, 5)
	(1.9, 10)
	(2.1, 20)
	(2.2, 30)
};

\addplot[thick, dotted] coordinates {(1.7,0) (1.7, 40)} node[left, midway] {$U_F$};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

# Aufgabe 2

## Teil 1

### Teilaufgabe a

// TODO Kennlinie

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=0, xmax=5,
    ymin=0, ymax=40,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[ 
	mark=*, % Marker style (e.g., *, square, circle) 
	mark size=1pt % Size of the marker 
] coordinates { 
	(0, 0)
	(1.552, 0.05)
	(1.57, 0.1)
	(1.65, 0.5)
	(1.69, 1)
	(1.77, 3)
	(1.81, 5)
	(1.9, 10)
	(2.1, 20)
	(2.2, 30)
};

\addplot[mark=*, mark size=1pt] coordinates{(0, 34.5) (5,0)};

\addplot[thick, dotted] coordinates {(1.7,0) (1.7, 40)} node[left, midway] {$U_F$};

\end{axis}
\end{tikzpicture}
\end{document}
```

$$\begin{array}{ll}
R = \dfrac{U}{I} = \dfrac{5 \text{ V} - 2.1 \text{ V}}{20 \text{ mA}} \\
R = 145 \ \ohm
\end{array}$$

---

### Teilaufgabe b

$$\begin{array}{l}
U_{D} = 2,03 \text{ V}\\
I_{D} = 18,655 \text{ mA}
\end{array}$$

---

## Teil 2

### Teilaufgabe a & b

| Spannungsversorgung | ohne Diode | mit Diode (Anode an Lampe) | mit Diode (Kathode an Lampe) |
| ------------------- | ---------- | -------------------------- | ---------------------------- |
| Gerät               | $67,8\ mA$ | $29,4\ mA$                 | $29,5\ mA$                   |
| Wand                | $280\ mA$  | $169,7\ mA$                | $170\ mA$                    |

---

### Teilaufgabe c

// TODO Osci

![[Oszi.jpg|500]]

---

### Teilaufgabe d

Der Helligkeitsunterschied entsteht, weil die Diode nur die Hälfte der Amplituden durchlässt und die Lampe dementsprechend nur die Hälfte der Zeit mit Strom durchflossen wird

---

### Teilaufgabe e

Der Spitzenwert verändert sich, weil an der Diode ein Spannung abfällt

---

## Teil 3

### Teilaufgabe a

| Kapazität $C_1$    | $100 \ \mu \text{F}$ | $470 \ \mu \text{F}$ |
| ------------------ | -------------------- | -------------------- |
| $I$ in $\text{mA}$ | $259$                | $48.76$              |

Die Helligkeit der Lampe verändert sich, weil die Spannung, wenn sie entgegen der Diode läuft, von dem Kondensator kompensiert wird. Eine höhere Kapazität ermöglicht es, dass dieser Effekt länger auf erhalten wird

---

### Teilaufgabe c

// TODO Osci 2

![[Oszi2.jpg|500]]

---

### Teilaufgabe d

$$\begin{array}{l}
\hat{U} = U_{eff} \cdot \sqrt{2} = 6 \text{ V} \cdot \sqrt{2} \\
\hat{U} = 8.4 \text{ V}
\end{array}$$
$$\begin{array}{l}
U_{1\_min} = \hat{U}_{R_1} \cdot e^{-\dfrac{t_{aus}}{R_1 \cdot C_1}} \\

U_{1\_min} =\hat{U} - 1 \text{ V} = 7.4 \text{ V} \\
t_{aus} = 7 \text{ ms} \\
7.4 \text{ V} = 8.4 \text{ V} \cdot e^{-\dfrac{7 \text{ ms}}{1 \text{ k} \ohm \cdot C_1}} \\
\dfrac{7.4 \text{ V}}{8.4 \text{ V}} = e^{-\dfrac{7 \text{ ms}}{1 \text{ k} \ohm \cdot C_1}} \\
\ln \left( \dfrac{7.4 \text{ V}}{8.4 \text{ V}} \right) =  -\dfrac{7 \text{ ms}}{1 \text{ k} \ohm \cdot C_1} \\
C_1 =  -\dfrac{7 \text{ ms}}{1 \text{ k} \ohm \cdot \ln \left( \dfrac{7.4 \text{ V}}{8.4 \text{ V}} \right)} \\
C_1 = 55.228 \ \mu \text{F}
\end{array}$$

---

## Teil 4

### Teilaufgabe a

| $U_q$          | $U_Z$            | $U_{R_V}$         |
| -------------- | ---------------- | ---------------- |
| $10 \text{ V}$ | $6.48 \text{ V}$ | $3.52 \text{ V}$ |

---

### Teilaufgabe b

$$\begin{array}{l}
I_z = I_{R_V} \\
I_{R_V} = \dfrac{U_{R_V}}{R_V} = \dfrac{3.52 \text{ V}}{112 \ \ohm} \\
I_{R_V} = 31.42 \text{ mA}
\end{array}$$

// TODO Arbeitsgerade

``` tikz
\usepackage{pgfplots}
\pgfplotsset{compat=1.5.1}
\begin{document}
\begin{tikzpicture}[]
\begin{axis} [
	width=\textwidth,
	axis lines=center,
    xmin=0, xmax=12,
    ymin=0, ymax=110,
    xlabel={$\frac{U_D}{V}$},
    ylabel={$\frac{I_D}{mA}$}
]

\addplot[blue] coordinates { 
	(0, 0)
	(4, 0)
	(4.5, 0)
	(5, 0)
	(5.9, 0)
	(6, 1.5)
	(6.4, 46)
	(6.6, 80)
};
\addplot[mark=*, mark size=1pt] coordinates{(0, 31.42) (12,0)};

\end{axis}
\end{tikzpicture}
\end{document}
```

---

### Teilaufgabe c

| $U_q$          | $U_Z$            | $U_{R_V}$          |
| -------------- | ---------------- | ---------------- |
| $8 \text{ V}$  | $6.44 \text{ V}$ | $3.56 \text{ V}$ |
| $12 \text{ V}$ | $6.48 \text{ V}$ | $3.52 \text{ V}$ |

---

### Teilaufgabe d

| Lastwiderstand     | $U_Z$            | $U_{R_V}$         |
| ------------------ | ---------------- | ---------------- |
| $1 \text{ k} \ohm$ | $6.44 \text{ V}$ | $3.56 \text{ V}$ |

$$\begin{array}{ll}
I_z = I_{R_V} - I_{R_L} \\
I_{R_V} = \dfrac{U_{R_V}}{R_V} = \dfrac{3.56 \text{ V}}{112 \ \ohm} & I_{R_L} = \dfrac{U_{R_L}}{R_L} = \dfrac{U_z}{R_L} = \dfrac{6.44 \text{ V}}{1 \text{ k} \ohm} \\
I_{R_V} = 31.79 \text{ mA} & I_{R_L} = 6.44 \text{ mA} \\
I_z = 31.79 \text{ mA} - 6.44 \text{ mA} \\
I_z = 25.35 \text{ mA}
\end{array}$$

---

### Teilaufgabe e

| Lastwiderstand     | $U_Z$            | $U_{RV}$         |
| ------------------ | ---------------- | ---------------- |
| $200 \ \ohm$       | $6.40 \text{ V}$ | $3.60 \text{ V}$ |

$$\begin{array}{ll}
I_z = I_{R_V} - I_{R_L} \\
I_{R_V} = \dfrac{U_{R_V}}{R_V} = \dfrac{3.6 \text{ V}}{112 \ \ohm} & I_{R_L} = \dfrac{U_{R_L}}{R_L} = \dfrac{U_z}{R_L} = \dfrac{6.4 \text{ V}}{200 \ \ohm} \\
I_{R_V} = 32.14 \text{ mA} & I_{R_L} = 32 \text{ mA} \\
I_z = 32.14 \text{ mA} -32 \text{ mA} \\
I_z = 0.14 \text{ mA}
\end{array}$$

---

### Teilaufgabe f

// TODO Erklärung

---

## Teil 5

### Teilaufgabe b

| $S_{1}$ | $S_{2}$ | $Y$ |
| ------- | ------- | --- |
| 0       | 0       | 1   |
| 0       | 1       | 0   |
| 1       | 0       | 0   |
| 1       | 1       | 0   |

---

### Teilaufgabe c

| $S_{1}$ | $S_{2}$ | $Y$ |
| ------- | ------- | --- |
| 0       | 0       | 0   |
| 0       | 1       | 1   |
| 1       | 0       | 1   |
| 1       | 1       | 1   |

---

### Teilaufgabe d

Low-Schaltung repräsentiert ein NOR-Schaltung

High-Schaltung repräsentiert eine OR-Schaltung