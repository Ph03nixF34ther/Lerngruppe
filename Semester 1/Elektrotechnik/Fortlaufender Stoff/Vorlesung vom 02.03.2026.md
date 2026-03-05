## Kreis mit Kondensator

// Abb: Kreis mit Kondensator

$$
q = C \cdot U
$$
Erhöhung der Spannung um $du \implies dq$ 
$$
dq = C \cdot du
$$
$$
dq = i \cdot dt \hspace{1cm} I = \frac{Q}{t}
$$
$$
\frac{du}{dt} = \frac{i}{C} \implies i = \frac{C\cdot du}{dt}
$$
### mit sinus-förmiger Anregung:
$$
u(t) = \hat{u} \cdot \sin(\omega t)
$$
$$
i = C \cdot \frac{d(\hat{u} \cdot \sin(\omega t))}{dt} = C \cdot \hat{u} \cdot\frac{d}{dt} \sin(\omega t) \implies  i=\underbrace{ C \cdot \hat{u} \cdot \omega }_{ \hat{i} } \cdot \cos(\omega t)
$$
$\implies$ Phasenversatz um $\psi = -\frac{\pi}{s} = -90°$
$\implies$ Der Strom eilt der Spannung vorraus

Effektivwerte:
$$
I = \underbrace{ \omega \cdot C }_{ \frac{1}{R} }\cdot U
$$
Analog zum ohmschen Widerstand:
$$
X_{c} = -\frac{1}{\omega C}
$$
"Blindwiderstand", "Reaktannz", "Kapazitärer Blindwiderstand"
$$
\omega = 2 \pi f \hspace{0,5 cm} iX_{c} = -\frac{1}{2\pi fC}
$$
$$
f \uparrow \implies |X_{c}| \downarrow
$$
### Komplex:
$$
\underline{I} = C \cdot \frac{d\underline{U}}{dt}B
$$
$$
\underline{U} = U \cdot e^{j\omega t}
$$
$$
\underline{I} = C \cdot \frac{d}{dt}(U \cdot e^{jt\omega}) = C \cdot j\omega \cdot \underline{U}
$$
$\implies$Phasenversatz um $\psi = -\frac{\pi}{s} = -90°$

# Kreis mit Spule und Sehnenwiderstand

// Abb: Kreis mit Spule und Sehnenwiderstand

Abfallende Spannung muss zusammen der abgegebenen Spannung entsprechen
$$
u = u_{R} + u_{L}
$$
$$
i = \hat{i} \cdot \sin(\omega t) 
$$

Wir kennen die Phasenverschiebung nicht:
$$
u = \hat{u} \cdot \sin(\omega t + \varphi)
$$
bekannt sind $\hat{u}, \omega \implies \hat{i}, \varphi$ sind zu bestimmen
## Sinusförmige Berechnung

---
$$
\hat{u} \cdot \sin(\omega t + \varphi) = R \cdot i + L \cdot \frac{di}{dt}
$$
$$
u\hat{c} \cdot \sin(\omega t + \varphi) = (R \cdot \hat{i} \sin(\omega t)) + L \cdot \hat{i} \cdot\frac{d}{dt} \sin(\omega t) = \underbrace{ R \cdot \hat{i} \sin(\omega t) + L \cdot \hat{i}\cdot\omega \cdot \cos(\omega t) }_{ \text{muss füt beliebige } \omega t \text{ gelten}}
$$
$\implies$ für $\omega t = -\varphi$
$$
= R \cdot \hat{i} \cdot \sin(-\varphi) + L \cdot \hat{i} \cdot\omega \cdot \cos(-\varphi)
$$
$$
\implies \varphi = \arctan\left( \frac{\omega L}{R} \right)
$$
Zur Bestimmung von $\hat{i}$: Ansatz mit $\omega t = 90° - \varphi$
$$
\hat{u} \cdot \sin (90°) = R\cdot \hat{i} \cdot \sin(90° - \varphi) + L \cdot \hat{i} \cdot \omega \cdot \cos(90° - \varphi)
$$
$$
\hat{u} \cdot \sin (90°) = R\cdot \hat{i} \cdot \cos(\varphi) + L \cdot \hat{i} \cdot \omega \cdot \sin(\varphi)
$$
$$
\hat{u}^2 = R_{1}^2 \cdot \hat{i} \cdot \cos^2(\varphi) + (\omega L)^2\cdot \hat{i}^2 \cdot \sin^2(\varphi) - 2 \cdot R\cdot\omega L \cdot \hat{i}^2 \cdot \sin(\varphi ) \cdot \cos (\varphi)
$$
$$
1)^2 0 = R^2 \cdot \hat{i}^2 \cdot \sin^2(\varphi) + (\omega L)^2 \cdot \hat{i}^2 \cdot \cos^2(\varphi) - 2 \cdot R\cdot\omega L \cdot \hat{i}^2 \cdot \sin(\varphi ) \cdot \cos (\varphi)
$$
$$
\hat{u} = R^2 \cdot \hat{i}^2 + (\omega L)^2 \cdot \hat{i}^2
$$
$$
\hat{i} = \frac{\hat{u}}{\sqrt{ R^2 + (\omega L)^2 }} \implies I = \text{ Effektivwert: }\frac{U}{\sqrt{ R^2 + (\omega L)^2 }}
$$
## Komplexe berechnung
$$
\underline{U}_{R} = R \cdot \underline{I}
$$
$$
\underline{U}_{L} =
j \omega L \cdot \underline{I}
$$
$$
\underline{U} = \underline{U}_{R} + \underline{U}_{L} = R \cdot \underline{I} + j \omega L \cdot \underline{I} = \underline{I}(R + j\omega L)
$$
$$
\implies \underline{I} = \frac{\underline{U}}{R + j \omega L} = \frac{\underline{U}}{\underline{z}}
$$
// Abb: Einzeichnung Komplexer Strom und komplexe Spannungen

$\implies$ Widerstandsdreieck konstriuiert
$$
\implies \varphi = \arctan\left( \frac{\underline{U}_{L}}{\underline{U}_{R}} \right) = \arctan\left( \frac{\omega L}{R} \right)
$$
$$
\underline{z} = z \cdot e^{j \varphi}
$$
# Kreis mit Kondensator und Widerstand

// Abb

$$
 \underline{U}_{R} = R \cdot \underline{I}
$$
$$
\underline{U}_{C} = \frac{1}{j \cdot\omega C} \cdot \underline{I} = -j \cdot \frac{1}{\omega C} \cdot \underline{I}
$$
$$
\underline{U} = \underline{U}_{R} + \underline{U}_{C} = \underline{I} \cdot \left( R + \frac{1}{j \cdot \omega C} \right)
$$
$$
\implies \underline{I} = \frac{\underline{U}}{\underbrace{ R + \frac{1}{j\omega C} }_{ \underline{z} }}
$$
$\underline{z}$ : Impedanz
$z = |z| = \sqrt{ R^2 + \left( \frac{1}{\omega C}^2 \right) }$ 

Effektivwerte;
$$
I = \frac{U}{z}
$$

// Abb: Widerstandsdiagram

## Berechnung von Phasenwinkel und Effektivwiderstand
$$
\varphi = \frac{R_{C}}{R + R_{C}}
$$
$$
z = |z| = \sqrt{ R^2 + \left( \frac{1}{\omega C}^2 \right) }
$$

# Spule mit Parallelwiderstand
$$
U = U_{R} = U_{L}
$$
$$
I_{L} + I_{R} = I
$$
$$
\underline{I}_{R} = \frac{\underline{U}}{R}
$$
$$
\underline{I}_{L} = \frac{\underline{U}}{j \cdot \omega L} = - j \frac{\underline{U}}{\omega L}
$$
$$
\underline{I} = \underline{I}_{R} +\underline{I}_{L} = \underline{U} \cdot \underbrace{ \left( \frac{1}{R} - j \cdot \frac{1}{\omega L} \right) }_{ \text{Admittanz: } y}
$$
$$
\underline{y} = G + j B_{L}
$$
$$
\text{Betrag der Admittanz: } |\underline{y}| = y = \sqrt{ G^2 + B^2 } = \underbrace{ \sqrt{ \left( \frac{1}{R} \right)^2 + \left( \frac{1}{\omega L} \right)^2 } }_{ Scheinleitwert }
$$
Effektivwerte:
$$
I = U \cdot y = U \cdot \sqrt{ \left( \frac{1}{R} \right)^2 + \left( \frac{1}{\omega L} \right)^2 }
$$

Zeigerdiagram 
// Abb.

$$
\varphi = \arcsin\left( \frac{- j \cdot\underline{z}}{\omega L} \right) = \arctan\left( \frac{R}{\omega L} \right)
$$
$$
I_{R} = \underline{I} \cdot \cos(\varphi)
$$
$$
I_{L} = \underline{I} \cdot \sin(\varphi)
$$
# Schwingkreis

Schwingung mit $f = \frac{1}{T}$
$f$ : Eigenfrequenz
Abnahme der Amplitude: gedäpfte Schwingung

Schwingkreis min. 1 Spule, min 1 Kondensator

> Wird ein Schwingkreis mit einem Wechselstromkreis verbunden, wird die Schwingung des Wechselstromkreises erzwungen.
> Stimmen beide Frequenzen überein handelt es sich um eine ==Resonanz==

## Reihenwingkreis
Alle Bauteile sind in Reihegeschaltet

$$
\underline{z} = R + j\omega L + \frac{1}{j\omega C}
$$
$$
\underline{z} = R + j \cdot (\omega L - \frac{1}{\omega C})
$$
$$
\underline{I} = \frac{\underline{U}}{\underline{z}} = \frac{\underline{U}}{R + j \cdot \left( \omega L - \frac{1}{\omega C} \right)}
$$
$$
|\underline{I}| = \sqrt{  R^2 + \left( \omega L - \frac{1}{\omega C} \right)^2}
$$
Wann wird der Blindanteil $0$
$$
\omega L = \frac{1}{\omega C}
$$
$$
\implies\omega_{R} = \sqrt{ \frac{1}{LC} }
$$
$\omega_{R}$ ist die Resonanzfrequenz
$$
f_{R} = \frac{1}{2\pi \sqrt{ LC }} 
$$

### Betrag der Blindwiderstände im Resonanzfall
$$
\underbrace{ X_{R} }_{ \text{Kennwiderstand des Schwingkreises} } = \omega_{R} L = \frac{1}{\omega_{R} C}
$$
$|U_{L}|, |U_{C}|$ besonders im Resonanzfall ggf. Größer als Versorgungsspannung
$\implies$ Spannungsübersteigung
$$
Q = \frac{U_{C}}{U} = \frac{U_{C}}{U}
$$
"Güte", "Gütefaktor"
$$
d = \frac{1}{Q} \hspace{1cm} \to\text{ "Dämpfung" / "Dämpfungsfaktor"}
$$
Allgemein: Resonanzfraquenz errechnen über:
$$
I_{m} (z) = 0
$$
// Abb: 

==Frequenzgang==: Abhängigkeit der elektrischen Größen von der Frequenz
$$
U(t) = \hat{u}_{1} \cdot \sin(\omega_{1}t) + \hat{u}_{2} \cdot \sin(\omega_{2}t) + \dots
$$
Die zu $\omega_{R}$ passende Frequenz wird groß, alle übrigen klein
$\implies$ "Strebung", "Filterung"
Wunsch: möglichst steil verlaufende Resonanzkurve: Charakterisierung über "Bandbreite"
$$
b = f_{2} - f_{1} = \frac{\omega_{2} - \omega_{1}}{2\pi}
$$
mit den Grenzfrequenzen $f_{1}, f_{2}, (\omega_{1}, \omega_{2})$
Lage auf der Grenzfrequenz bei $I = \frac{I_{R}}{\sqrt{ 2 }}$
$$
\sqrt{ R^2 + \left( \omega_{1}L - \frac{1}{\omega_{1}C}^2 \right) } = \sqrt{ R^2 + \left( \omega_{2}L - \frac{1}{\omega_{2}C}^2 \right) } = \sqrt{ 2 } \cdot R
$$
$$
 \large|R^2 + \left( \omega_{1}L - \frac{1}{\omega_{1}c}^2 \right)\large|
 =  \large|R^2 + \left( \omega_{2}L - \frac{1}{\omega_{2}c}^2 \right)\large|
 = R
$$
$$
\omega_{1} < \omega_{2} \implies \omega_{1} L - \frac{1}{\omega_{1}C} = -R
$$
$$
\implies\omega_{1} = -\frac{R}{2L} + \sqrt{ \frac{1}{LC} + \left( \frac{R}{2L} \right)^2 }
$$
$$
\implies\omega_{2} = \frac{R}{2L} + \sqrt{ \frac{1}{LC} + \left( \frac{R}{2L} \right)^2 }
$$
$$
\implies B = \frac{\omega_{2} - \omega_{1}}{2\pi} = \frac{R}{L_{2}\pi}
$$
# Schaltvorgänge
## Ohmsch induktive Gleichstromkreise

// Abb: Ohmsch induktive Gleichstromkreise

$$
U = u_{R} + u_{L}
$$
$$
u_{L} = L \cdot \frac{di}{dt}
$$
$$
u_{R} = R \cdot i
$$
$$
\implies U = R\cdot i + L \cdot \frac{di}{dt} \hspace{2 cm} \text{Differenzialgleichung}
$$
$$
i(t ) = \underbrace{ i_{e} }_{ \text{"Eingeschwingene Strom"} } + \underbrace{ i_{f} }_{ \text{"flüchtige Strom"} }
$$
$$
U = R \cdot (i_{e} + i_{f}) + L \cdot \frac{d}{dt} (i_{e} + i_{f})
$$
es gilt für $t \to \infty$ | $i = i_{e} \implies L \cdot \frac{di_{e}}{dt} + R \cdot i_{e} = U$
$$
L \cdot \frac{di_{f}}{dt} + R \cdot i_{f} = 0
$$
Eingeschwungener Zustand: $i_{e} = \frac{U}{R}$
$$i_{f} = ? \hspace{1cm} \frac{di_{f}}{i_{f}} + \frac{R}{L}dt = 0$$

für $t = 0;$  $i_{f} = i_{f_{0}}$
für $t = t_{1};$  $i_{f} = i_{f_{1}}$
$$
-\frac{R}{L} \cdot \int_{0}^{t_{1}} dt = \int_{i_{f_{0}}}^{i_{f_{1}}} \frac{di_{f}}{i_{f}}
$$
$$
\frac{R}{L} t_{1} = \ln\left( \frac{i_{f_{1}}}{i_{f_{0}}} \right)
$$
mit $i_{f_{1}}, t_{1}$ als Variablen, und $i_{f_{1}} = i_{f}$, $t_{1} = t$
$$
i_{f} = i_{f_{0}} \cdot e^{-\frac{R}{L} \cdot t }
$$
$$
\implies i = i_{e} + i_{f} = \frac{U}{R} + i_{f_{0}} \cdot e^{-\frac{R}{L} \cdot t }
$$
Fehlt noch: Betrachtung der Schaltung zum Zeitpunkt $t=0$:
Spule im Kreis $\implies$ keine sprunghafte Änderung von $i$
$$
\implies 0 = \frac{U}{R} +i_{f_{0}} \cdot \underbrace{ e^{-\frac{R}{L} \cdot t } }_{ e^0 = 1 }
$$
$$
\implies i_{f_{0}} = -\frac{U}{R}
$$
$$
\implies I = \frac{U}{R} - \frac{U}{R} \cdot e^{-\frac{R}{L} \cdot t }
$$
$$
i = \frac{U}{R} \cdot \left( 1 - e^{-\frac{R}{L} \cdot t } \right) = \frac{U}{R} \cdot (1 - e^{-\frac{t}{\tau}})
$$
$$
\tau = \frac{L}{R} \hspace{2 cm} \text{Zeitkonstante}
$$
Resonanzfrequenz: Strom hat ein Minimum
$\implies$ Größter Scheinwiderstand / kleinste Admittanz
$$
\underline{I} = \frac{U}{\underline{z}}
$$
$\implies$ Sperrkreis

bei $\omega_{1}$ und $\omega_{2}$ gilt:
$$
I(\omega_{1}) = I (\omega_{2}) = I_{R} \cdot \sqrt{ 2 }
$$
Bandbreite $m = f_{2} - f_{1}$