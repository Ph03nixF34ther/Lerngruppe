# Aufgabe 1
## Teilaufgabe A)
> Der Innenwiderstand beträgt im Gleichspannungsbereich $20.000 \Omega$

-- 3. Einführung
## Teilaufgabe B)
Drehspulmesswerk mit Dauermagnet
## Teilaufgabe C)
- Der Wert wird bei der unteren schwarzen Skala abgelesen (von $0V$ bin $250 V$) (Abgelesener Wert $130 V$)
- Der Multiplikator kann aus der Multiplikatiorentabelle entnehmen (oder errechnen) ($x \cdot 0.01$)
- Daraus ergibt sich, dass $130 V \cdot 0.01 = 1.3 V$

# Aufgabe 2

```tikz
\usepackage{circuitikz}

\begin{document}

\begin{circuitikz}
	% Paths, nodes and wires:
	\draw (8, 4) -- (3, 4);
\end{circuitikz}

\end{document}
```
# Aufgabe 3
Voltmeter: $R \to \inf$
Ampèremeter: $R \to 0$

# Aufgabe 4
$$
U_{1} = U - U_{2} = 12.57 V
$$
$$
I = \frac{12.57V}{10 k\Omega} = 1.257  mA
$$
$$
I_{2} = \frac{11.43V}{100k\Omega} = 0.1143 mA
$$
$$
I_{3} = I - I_{2} = 1.1427 mA
$$
$$
R_{3} = \frac{U_{3}}{I_{3}} \simeq \underline{\underline{10k\Omega}}
$$

# Aufgabe 5
## Systematische Fehler
Systematische Fehler sind Fehler welche sich aus dem Versuchsaufbau oder der Methode ergeben und dadurch die gesamte Messreihe beeinflussen.

## Zufällige Fehler
Zufällige Fehler treten bei einem Versuch aus und kann durch wiederholtes Messen entdeckt werden

## Wie werden diese Fehler (Abweichung vom wahren Wert) angegeben?
In prozentualer und absolute Abweichung.

### Prozentuale Abweichungen
$$
\frac{M_{1}}{M_{2}}
$$
### absolute Abweichungen
$$
M_{1} -M_{2}
$$

# Aufgabe 6
Abgefallene Spannung an $R_{2}$
$$
U_{2} = \psi_{1} - \psi_{2} = 3,5 \text{V}
$$
Der durch diesen Widerstand fließende Strom beträgt 
$$
I_{2} = \frac{U_{2}}{R_{2}} = 3,5 \text{ mA}
$$
Da es sich um eine Reihenschaltung handelt, gilt:
$$
I = I_{1} = I_{2} = I_{3}
$$
### Berechnung von $R_{1}$
$$
U_{1} = 10 \text{V} - 6 \text{V} = 4 \text{V}
$$
$$
R_{1} = \frac{U_{1}}{I} = \frac{4 \text{ V}}{3,5 \text{ mA}} = 1,1428 \text{k}\Omega
$$

### Berechnung von $R_{3}$
$$
U_{3} = 2,5 \text{V}
$$
$$
R_{3} = \frac{U_{3}}{I} = \frac{2,5 \text{ V}}{3,5 \text{ mA}}= 0,7143 \text{ k}\Omega
$$

# Aufgabe 7
// Zeichnung
Wir wenden die Spannungsteilerregel an

$$
I_{1} = I_{\text{ges}}
$$
$$
\frac{U_{1}}{R_{1}} = \frac{U_{\text{ges}}}{R_{\text{ges}}}
$$
$$
U_{1} = U_{\text{ges}} \cdot \frac{R_{1}}{R_{\text{ges}}}
$$
### Berechnung von $R_{\text{ges}}$
$$
R_{\text{ges}} = R_{1} + \frac{(R_{2} + R_{3}) \cdot R_{4}}{R_{2} + R_{3} + R_{4}} \simeq 2,27 \text{k}\Omega
$$
### Einsetzung
$$
U_{1} = U_{\text{ges}} \cdot \frac{R_{1}}{R_{\text{ges}}} = 5,03 \text{ V}
$$
$$
\psi_{1} = U_{\text{ges}} - U_{1} = \underline{\underline{4,97 \text{ V}}}
$$
# Aufgabe 8
## Teilaufgabe A) 
Es handelt sich um spannungsrichtiges Messen
## Teilaufgabe B)
Es wird die Stromteilerregel angewandt
$$
I_{V} = \frac{U_{V}}{R_{V}} = 1\mu\text{A}
$$
$$
I_{R} = I - I_{V} = 10\mu \text{A}
$$
$$
R = \frac{U_{1}}{I_{R}} = \underline{\underline{1\text{M}\Omega}}
$$
## Teilaufgabe C)
$$
R_{\text{Fehler}} = \frac{10 \text{ V}}{11 \mu \text{A}} \simeq 0,909 \text{ M}\Omega
$$
$$
\text{relativer Fehler} = 0,091 
$$
der Feh