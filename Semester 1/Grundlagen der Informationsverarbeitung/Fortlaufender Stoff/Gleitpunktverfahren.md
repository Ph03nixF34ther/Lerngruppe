$z = m * b^e \text{ mit } b, e \in \mathbb{R}$ 

$m$: Mantisse, gibt den Zahlenwert an
$e$: Exponent, charakterisiert die Größenordnung der Zahl
$b$: Basis, meist 2, 10 oder 16 verwendet

Normalisierung: $1 / b \le m \le 1 \text{ für } m \ne 1$ 

Fester Teil für Mantisse und Exponent benutzt, Basis muss nicht extra erwähnt werden

Meist mit 32 [[Bit]] dargestellt mit zum Beispiel 26 [[Bit]] Mantisse und 6 [[Bit]] Exponent

$12.25_{10}$ zum Beispiel als

$\underbrace{11000100000000000000000000}_{\text{26 Stellen Mantisse}}\underbrace{000100}_{\text{6 Stellen Exponent}}$ 

Berücksichtigt __nicht__ ob die Zahl oder der Exponent negativ ist

Für negative Zahlen wird wieder der Vorzeichen-Bit aus der [[Darstellung numerischer Zahlen#Negative zahlen|negativen Zahlen]] verwendet

Für den Exponent wird eine feste Zahl $q$ als Bias bezeichnet
Diese ergibt sich aus der Hälfte (aufgerundet) des maximal möglichen Werts des Exponents und wird dazu addiert, um den Exponenten auf $0 \le e \le 2q$ abzubilden 

$\underbrace{0}_{\text{Vorzeichen}}\underbrace{1100010000000000000000000}_{\text{25 Stellen Mantisse}}\underbrace{100100}_{\text{6 Stellen Exponent}}$ 

**!!Bei Dorendorf die 1 vorm Komma dalassen!!**
# Beispiele
(Vorkommastelle weggelassen)

$12.25_{10}$

$12_{10}$
$12/2 = 6 R 0$
$6/2 = 3 R 0$
$3/2 = 1 R 1$
$1/2 = 0 R 1$
$12_{10} = 1100_2$

$0.25_{10}$
$0.25*2 = 0.5 \, | -0$
$0.5*2 = 1.0 \, | -1$
$0*2 = 0 \, | -0$
$0.25_{10} = 0.01_2$ 

$12.25_{10} = 1100.01_2$

$1100.01_2 = 1.10001_2 * 2^3$

$e = \overbrace{3}^{\text{der Exponent von }2^3} + \overbrace{32}^{\text{der Bias aus } 2^{6}/2} = 35_{10} = 100011_2$ 

$m = \overbrace{10001_2}^{\text{Kommateil von }1.10001_2}$ 

$sign bit = 0$ 

$\underbrace{0}_{\text{Vorzeichen}}\underbrace{1000100000000000000000000}_{\text{25 Stellen Mantisse}}\underbrace{100011}_{\text{6 Stellen Exponent}}$ 

# Mathematische Operatoren

Für zwei Gleitkommazahlen $z_1$ und $z_2$ gilt

## Multiplikation

$z_1 * z_2 = m_1 * m_2 * b^{e_1 + e_2}$ 

### Beispiel

$z_1 = 15 = 0.15 * 10^2$ 

$z_2 = 2.5 = 0.25 * 10^1$

$0.15 * 0.25 * 10^{2+1} = 0.0375 * 101{3} = 37.5$ 

## Division

$z_1 / z_2 = m_1 / m_2 * b^{e_1 - e_2}$

### Beispiel

$z_1 = 15 = 0.15 * 10^2$ 

$z_2 = 2.5 = 0.25 * 10^1$

$0.15 / 0.25 * 10^{2-1} = 0.6 * 10^1 = 6$ 

## Addition

Benötigt zunächst eine Angleichung des kleineren an den größeren Exponenten
Wenn $e_1 \gt e_2$ wird $z_2$ wir folgt Umgewandelt

$z_2' = (m_2 / b^{e_1 - e_2}) * b^{e_1}$ 

Danach werden die Mantissen von $z_1$ und $z_2'$ addiert

Normalisierung könnte noch benötigt werden

### Beispiel

$z_1 = 15 = 0.15 * 10^2$ 

$z_2 = 2.5 = 0.25 * 10^1$

$e_1 > e_2 \implies z_2' = (\dfrac{0.25}{10^{2-1}}) * 10^2 = 0.025 * 10^2$ 

$z_1 + z_2' = (0.15 + 0.025) * 10^2 =0.175 * 10^2 = 17.5$ 

## Subtraktion

Benötigt zunächst eine Angleichung des kleineren an den größeren Exponenten
Wenn $e_1 \gt e_2$ wird $z_2$ wir folgt Umgewandelt

$z_2' = (m_2 / b^{e_1 - e_2}) * b^{e_1}$ 

Die Mantissen von $z_1$ und $z_2'$ subtrahieren

Normalisierung könnte noch benötigt werden

### Beispiel

$z_1 = 15 = 0.15 * 10^2$ 

$z_2 = 2.5 = 0.25 * 10^1$

$e_1 > e_2 \implies z_2' = (\dfrac{0.25}{10^{2-1}}) * 10^2 = 0.025 * 10^2$ 

$z_1 - z_2' = (0.15 - 0.025) * 10^2 = 0.125 * 10^2 = 12.5$  