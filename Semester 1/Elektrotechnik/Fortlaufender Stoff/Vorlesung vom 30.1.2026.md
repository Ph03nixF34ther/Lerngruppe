# Die Induktionswirkung
// Abb. Induktion im bewegten Leiter

- Leiter - zu Rechteck gebogen 
- Freie Ladugsträger im Metall (aus Metall)
- Seite des Leiters der Läge $l$ im Magnetfeld
- Magetfeld mit Flussdichte $\vec{B}$
- Leiter bewegt sich mit Geschwindigkeit $\vec{v}$ im Magnetfeld

$$
\implies \vec{F_{i}} = Q \cdot (\vec{v} \times \vec{B})
$$
Nach der rechten Handregel:
- positive Ladungsträger: Kraft nach oben
- negative Ladungsträger: Kraft nach unten

Jede Kraft auf eine Ladung kann mathematisch als durch ein Feld verursacht beschrieben werden
$$
\vec{F} = \frac{\vec{E}}{Q}
$$
Kraft $\vec{F_i} = \frac{\vec{E_{i}}}{Q}$
- Induziertes elektrisches Feld, entsteht durch die Bewegung des Leiters
- "Induzierte Feldstärke" $\vec{E_{i}}$

Ladungstrennung:
- oberes Leiterende: positiv
- unteres Leiterende: negativ
$$
\vec{F_{i}} = Q \cdot (\vec{v} \times \vec{B}) \hspace{1cm}
\vec{F_{i}} = \frac{\vec{E_{i}}}{Q}
$$
$$
\implies \vec{E_{i}} = \vec{v} \times \vec{B}
$$
- getrennte Ladung induziert ein elektrisches Feld
$$
\vec{E} = \frac{\vec{F}}{Q} \implies \vec{F} = \vec{E} \cdot Q
$$
- das wirkt der durch die Lorenzkraft verursachten Verschiebung der Ladungsträger entgegen
- Das führt zu einem Gleichgewichtszustand
$$
\vec{E} = -\vec{E_{i}} = - \vec{v} \times \vec{B}
$$
in gegebener Anordnung: $\vec{v} \_|\_ \vec{B} \implies E = v \cdot B$
im Leiter: $E$, $E_{i}$ [ ] sind im inneren Feldfrei

am Leiterende:
$E = \frac{U}{s} = \frac{U}{l}$
$$
U = E \cdot l = v \cdot B \cdot l
$$
gilt nur im homogenen Magnetfeld mit $v$ senkrecht $B$
allgemein:
$$
U = \int_{1}^2 \vec{E} \cdot d\vec{s} = \int_{1}^2 \vec{E} \cdot d\vec{l} = \boxed{\int_{1}^2 \vec{v} \times \vec{B} \cdot d\vec{l}}
$$
Anmerkungen:
- $v$ ist die relative Geschwindigkeit des Leiters gegenüber dem Magnetfeld

## Induktionswirkung des zeitlich veränderlichen Magnetfelds

$v$ als Relativgeschwindigkeit bedeutet es ist egal, ob sich Leiter oder Magnet bewegt
$$
\boxed{v = \frac{s}{t}}
\hspace{1cm}
\text{differenzielle Betrachtung}: v = \frac{ds}{dt}
$$
$$
U = B \cdot l \cdot v = B \cdot l \cdot \frac{ds}{dt} \hspace{0,5cm} \implies (\text{Induktionsgesetz } d\Phi = B \cdot l \cdot ds) \hspace{0,25cm} U = \frac{d\Phi}{dt}
$$
unerheblich wie die Änderung des Flusses verursacht wird
- Bewegung des Leiters
- Änderung der Flussdichte 
- Bewegung des Magnetfelds

Leiterschleife als rechteckige Spule (zunächst eine Windung)

Anwendung einer Spule, Insgesamt $N$ Windungen
$$
\implies U = N \cdot \frac{d\Phi}{dt}
$$
Zusammenhang von induzierter Spannung und Fluss nach Rechtsschraubenregel

bei _**zunehmendem**_ magnetischem Fluss wird die Spannung _**negativ**_,
bei _**abnehmendem**_ magnetischem Fluss wird die Spannung _**positiv**_.

- bewegte Ladungsträger im Magnetfeld
- stromdurchflossener Leiter im Magnetfeld
- es wirkt eine Kraft

1 ) die Kraft versucht die Bewegung des Leiters zu verhindern
2 ) durch Veränderung der Feldstärke wird eine Spannung induziert, die einen Strom auslöst. Dadurch entsteht um den Leiter ein Magnetfeld, dass der Zunahme des magnetischen Fluss entgegenwirkt

// Lenzsche Regel

# Selbstinduktion

// Abb.: Ringspule

Toroidspule

|         |                     |
| ------- | ------------------- |
| $N$     | Windungszahl        |
| $A$     | Querschnitt         |
| $l_{m}$ | mittlere Weglänge   |
| $i$     | einstellbarer Strom |
| $\Phi$  | Fluss im Kern       |
| $u$     | Spannung            |
Durch einen Geänderten Fluss entsteht eine Spannungsinduktion ($u$)
Selbstinduktion, Selbstinduktionsspannung $u$

bei Vernachlässigung  des Drahtwiderstands: 
$$
\text{Anliegende Spannung } = \text{ Selbstinduktionsspannung}
$$
$$
u = N \cdot \frac{d\Phi}{dt}
$$
bei einem nicht ferromagnetischen Material des Kerns: Linearer zusammenhang zwischen $B, H : B \sim H$
$$
 I \cdot N = \Theta = \frac{\Phi \cdot l_{m}}{\mu \cdot A} \implies \Phi = \frac{I \cdot N}{l_{m}}\cdot \mu \cdot A
$$
$$
u = \mu \cdot \frac{d}{dt} \left( \frac{I \cdot N}{l_{m}} \cdot \mu \cdot A \right)
= \boxed{\frac{N \cdot N \cdot \mu \cdot A}{l_{m}} \cdot \frac{di}{dt}} = L \cdot \frac{di}{dt}
$$
$$
L =\frac{N \cdot N \cdot \mu \cdot A}{l_{m}}
$$
$$
[L] = \frac{V \cdot s}{A} = H : \text{Henri}
$$
Alternativ:
$$
L = N \cdot \frac{d\Phi}{dt}
$$
ohne ferromagnetisches Material: $i \sim \Phi$
$$
L = N \cdot \frac{\Phi}{i}
$$
für den magnetischen Kreis:
$$
J \cdot N = \Phi \cdot \frac{l}{\mu \cdot A} \implies \frac{J \cdot N \cdot \mu \cdot A}{l} = \Phi
$$
$$
\implies L = N^2 \cdot (\mu \cdot A)/l
$$
$$
\Lambda = \frac{\mu \cdot A}{l}
$$
$$
R_{mag} = \frac{l}{\mu \cdot A}
$$
$$
L = N^2 \cdot \Lambda = \frac{N^2}{R_{mag}}
$$
mit ferromagnetischem Material : $\mu \neq \text{const} \implies L \neq \text{const}$
$$
 L = N \cdot \frac{d\Phi}{di} = N \cdot A \frac{dB}{\cancel{ dH }} \cdot \frac{\cancel{ dH }}{di}
$$
$$
H = \frac{i \cdot N}{l}
$$
$$
\implies \frac{dH}{di} = \frac{N}{l}
$$
$$
\implies L = N^2 \cdot A \cdot \frac{dB}{l \cdot dH} = N^2 \cdot A \cdot \frac{1}{l} \cdot \boxed{ \frac{dB}{dH}}
$$
Das ist die differenzielle Permeabilität $\mu_{\text{diff}}$
Steigung der Magnetisierungskennlinie (im Betrachteten Punkt der Feldstärke)

Spulen mit Eisenkern:
- haben höhere Indikation ans eisenlose
- haben _**keine**_ konstante Induktivität, sondern eine Stromabhängige
- (Induktivitöt nimmt im Sättigungsbereich der Magnetisierungskurve stark ab!)

## Schaltzeichen Spule

// Abb: Schaltzeichen Spule

# Wechselstrom / Wechselgrößen

// Abb. Periodisch zeitabhängiger Strom

>**Periodisch zeitabhängiger Strom:** bedeutet, die Art der Änderung wiederholt sich periodisch

Augenblickswert: der zu einem bestimmten Zeitwert vorhandene Strom

Periodizität Nach ablauf einer Zeit $T$ (Periodendauer) stellt sich der gleiche Agenblickswert wieder ein
$$
i(t) = i(t+T) = i(t + n \cdot T) : n \in N
$$
Sind die Flächen $A, B$ sind gleich groß, ist der zeitliche Mittelwert $0$ und man spricht von einem **WECHSELSTROM**
$\implies$ Wechselgrößen: Augenblickswert periodisch, Mittelwert ist $0$.
$\implies$ Mischgrößen: Mittelwert ist nicht $0$, Durchschnittswert wird als Betrag der Wechselspannung angenommen

// Abb: Liniendiagram einer sinusförmigen Wechselspannung

$\hat{u}$ : Scheitelwert / Amplitude
$x$-Achse : Zeit / dazu proportionaler Winkel
$$
\omega T = 2\pi \implies T = \frac{2\pi}{\omega}
$$
$$
\text{Frequenz} = \frac{\text{Anzahl der Schwingungen}}{\text{Zeiteinheit}}
$$
$$
f = \frac{1}{T} = \frac{\omega}{2\pi}
$$
$$
[f] = \frac{1}{s} = \text{Hz}
$$
Winkelgeschwindigkeit : $\omega$ (Kreisfrequenz)
$$
\omega = 2\pi f
$$
$$
[\omega] = \frac{1}{s}
$$
(Einheit einer Winkelgeschwindigkeit $\neq \text{Hz}$)

// Abb: Nullphasenwinkel

Anfang der Periode fällt nicht unbedingt mit $t = 0$ zusammen
Nullphasenwinkel: Winkel zwischen Nulldurchgang der positiven Halbwelle ud Beginn der Zeitzählung
Pfeilspitze zeigt in Richtung der Ordinateachse (Konvention!)
$$
 i(t) = \hat{i} \cdot \sin (\omega t +\psi_{i})
$$
// Abb: Liniendiagramm von Strom und Spannung

Phasenverschiebung zwischen Strom und Spannung $\psi$
$$
u (t) = \hat{u} \cdot \sin(\omega t + \psi_{u})
$$
$$
i (t) = \hat{i} \cdot \sin(\omega t + \psi_{i})
$$
$$
\psi = u(t) - i(t) =\psi_{u} - \psi_{i}
$$
$\psi > 0$ Spannung eilt dem Strom voraus
$\psi = 0$ Spannung und Strom in Phase
$\psi < 0$ Strom eilt der Spannung voraus

