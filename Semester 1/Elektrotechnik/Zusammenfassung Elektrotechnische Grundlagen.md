# Widerstände

## Ohmscher Widerstand

$$
\text{Formelzeichen: }R
$$

$$
R = \frac{U}{I}
$$
$$
R = \frac{P}{I_{\text{eff}}^2}
$$

$$
R_{20} = \frac{l \cdot \rho_{20}}{A}
$$

$$
R_{T} = R_{20} \cdot (1 + \alpha_{20} \cdot \Delta T)
$$

## Frequenzabhängiger Widerstand (Blindwiderstand)

$$
\text{Formelzeichen: } X 
$$
Spule:
$$
X_{L} = \omega L
$$

Kondensator
$$
X_{C} = -\frac{1}{\omega C}
$$

## Komplexer Widerstand

$$
\text{Formelzeichen: } \underline{ Z }
$$
$$
\underline{ Z } = R + j \cdot X
$$
$$
\underline{Z} = |Z| \cdot e^{j \varphi}
$$
---
$$
|Z| = \sqrt{ R^2 + X^2 }
$$
$$
\varphi = \arctan\left( \frac{X}{R} \right)
$$
---

$$
R = \cos(\varphi) \cdot |Z|
$$
$$
X = \sin(\varphi) \cdot |Z|
$$


## differenzieller Widerstand

$$
r_{Z} = \frac{\Delta U_{Z}}{\Delta I_{Z}}
$$

# Definition elektrischer Grundgrößen

$$
I = \frac{Q}{t}
$$

$$
\varphi = \frac{W}{Q}
$$

$$
U_{12} = \varphi_{1} - \varphi_{2}
$$

$$
P = \frac{W}{t} = U \cdot I
$$

## Kondensator

$$
C = \frac{Q}{U} = [F]
$$

$$
C = \frac{A}{s} \cdot \epsilon
$$

## Spule

$$
L = \frac{\Phi \cdot N}{I} = [H]
$$


>[!Important] 1.Kirchhoff'scher Satz
>$$I_{1} + I_{2} + I_{3} = 0$$


>[!Important] 2.Kirchhoff'scher Satz
>$$U_{1} + U_{2} + U_{3} = 0$$

# Wechselspannungsgrößen

$$
f = \frac{1}{T} = \frac{\omega}{2 \pi}
$$

# Stern-Dreieck-Transformation

$$
R_{A} = \frac{R_{AB} \cdot R_{AC}}{(R_{AB} + R_{BC} + R_{AC})}
$$
$$
R_{AB} = R_{A} + R_{B} + \frac{R_{A} \cdot R_{B}}{R_{C}}
$$

# Hoch- und Tiefpässe

$$
f_{g} = \frac{1}{2 \pi RC} = \frac{R}{2\pi L}
$$
# Diodenkennlinienapproximation

## lineare Approximation

$$
I_{D} = (U_{D} - U_{TH}) \cdot r_{D}
$$

## Näherung über die Shockley-Gleichung

$$
I_{D} = f(U_{D}) = \boxed{ I_{S} \cdot \left(e^{\dfrac{U_{D}}{n \cdot U_{T}}} - 1\right)} \simeq \boxed{ I_{S} \cdot e^{\dfrac{U_{D}}{n \cdot U_{T}}} }
$$

$$
U_{T} =\dfrac{k_{b} \cdot T}{e} \simeq 25\ mV \qquad \text{bei } 20°C
$$


$T$: Temperatur in $K$ (Raumtemperatur $\simeq 300 K$)
$k_{B} = 1,38\cdot 10^{-23} \frac{\text{J}}{\text{K}}$ (Boltzmann-Konstante)
$e = 1,602 \cdot 10^{-11} C$ (Elemtentarladung)

---

# Bipolartransistorschaltungen

$$
I_{CE} = B \cdot I_{B}
$$

$$
U_{BE} \simeq U_{th} \simeq 0,7\ V
$$
[[Bipolartransistor]]

## Bipolartransistor schalten
$$
U_{CE, sat} \simeq 200\ mV
$$
$$
Ü = 2 \dots 3
$$
$$
I^{\star}_{B} = ü \cdot I_{B}
$$
