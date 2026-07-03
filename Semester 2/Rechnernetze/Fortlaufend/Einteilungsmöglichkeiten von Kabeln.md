---
tags:
  - Rechnernetze
  - TODO
---

### Die Übertragungsstrecken werden in Klassen, Komponenten und Kategorien eingeteilt

Kategorie: Einzelkomponenten (z.B. Stecker, Kabel)
Klasse: Gesamte Übertragungsstrecke
Höhere Kategorien / Klassen decken die darunterliegenden ab



| Kategorie         | Frequenzbereich                   | Anwendung                                                    | Besonderheiten                                                                                  |
| ----------------- | --------------------------------- | ------------------------------------------------------------ | ----------------------------------------------------------------------------------------------- |
| Cat-1             | Bis einige hundert kHz            | Sprachübertragung (Telefonanwendungen)                       | Nicht für Ethernet geeignet, keine offizielle TIA/EIA-Kategorie                                 |
| Cat-2             | Bis 1 oder 4 MHz                  | ISDN-Primärmultiplexanschluss                                | keine offizielle TIA/EIA-Kategorie                                                              |
| Cat-3             | Bis 16 MHz                        | ISDN, 10BASE-T Ethernet (10Mbit/s) 100BASE-T4                | Häufig in den USA verwendet (Telefonverkabelung), Teilweise noch in Altinstallationen verwendet |
| Cat-4             | Bis 20 MHz                        | Token-Ring-Netzwerke, Telefonie (USA)                        | Nicht mehr verwendet, nichtmehr im Standard                                                     |
| Cat-5 / 5e        | Bis 100MHz                        | Fast Ethernet, Gigabit-Ethernet                              | Strukturierte Verkabelung (Schulen / Büros), nicht immer Gigabit-Ethernet-Tauglich              |
| Cat-6 / 6a        | Cat-6: 250 MHz<br>Cat-6a: 500MHz  | Sprach- & Datenübertragung, Multimedia, ATM-Netze, 10GBASE-T | Cat-6: 10GBASE-T bis 55m<br>Cat-6a: 10GBASE-T bis 100m                                          |
| Cat-7 / 7A        | Cat-7: 600 MHz<br>Cat-7A: 1000MHz | 10GBASE-T                                                    | Vier einzeln abgeschirmte Adernpaare (S/FTP) (Standard für neue Installationen)                 |
| Cat-8 / 8.1 / 8.2 | 1600 - 2000 MHz                   | 40GBASE-T                                                    |                                                                                                 |
## Maßnahmen gegen die Störleistung

- Ungeschirmtes, leicht verdrilltes Telefonkabel
- Das Telefonherz hat eine Maximalfrequenz von $f_{max} = 3,4\text{ kHz}$
- Anzahl an Verdrillungen pro Längeneinheit und Durchmesser nimmt in der Regel mit der Kategorie zu.
- Ab Cat 3 wird Isoliert
- Ab Cat 6 werden die Kabelpaare untereinander geschirmt

## Umrechnung Übertragungsrate / 
$$
\frac{C}{\text{bit}} = B \cdot \log_{2}\left( 1 + \frac{S}{N} \right)
$$
$$
\begin{array}{rl}
C & \text{Kapazität} \\
B & \text{Maximalfrequenz} \\
S & \text{Signalleistung (Bessere Schirmung)} \\
N & \text{Störleistung (Schirmung)}
\end{array}
$$

## Benennung nach ISO

$$
\text{XX} / \text{YZZ}
$$

$\text{XX}$ : Gesamtschirmung
$$
\begin{array}{rcl}
U  & = & \text{ungeschirmt} \\
F  & = & \text{Folienschrim} \\
S  & = & \text{Geflechtschirm} \\
SF  & = & \text{Geflecht- und Folienschirm} \\

\end{array}
$$

$\text{Y}$ : Gesamtschirmung
$$
\begin{array}{rcl}
U  & = & \text{??} \\
F  & = & \text{??} \\
S  & = & \text{??} \\
SF  & = & \text{??} \\

\end{array}
$$

$\text{ZZ}$ : Gesamtschirmung
$$
\begin{array}{rcl}
U  & = & \text{ungeschirmt} \\
F  & = & \text{Folienschrim} \\
S  & = & \text{Geflechtschirm} \\
SF  & = & \text{Geflecht- und Folienschirm} \\

\end{array}
$$

## LSA zum Auflegen von TP

- Löt-/Schraub/Abisolierfrei
- Schneller und einfacher als Löten, schrauben und abisolieren
- Drähte werden in Klemmen eingeführt und durch einen Schlagmechanismus festgehalten
- Hohe Zuverlässigkeit: 

## Koaxialkabel

// ABB: Tanenbaum

+Große Bandbreite, wenig Störempfindlichkeit
-höhere Kosten, schwierigere Verlegung

Nicht gerade ein Twisted Pair Kabel, nicht unbedingt geschirmt

## Glasphaserkabel

+Quasi unbegrenzte kapazität, unanfällig, größeres Spektrum = mehr frequenzen
-teuer in der Verlegung

- Steigerung der Rechenleistung in 40 Jahren ca Faktor 2500
- Steigerung der Datenrate in 40 Jahren: ca. Faktor 2000
- Derzeit Begrenzung durch elektro-optische Wandlung

- Glasfaserübertragungsstrecken haben im einfachsten Fall drei Komponenten. Das Licht wird eingekoppelt, pflanzt sich fort und wird empfangen

// -> Totalreflexion, Multimode (Kürzere Distanzen <5km)
// Singlemode (Längere Distanzen >5km)

Licht wird von Glas gedämpft. Wir suchen nach Wellenlängen bei denen die Dämpfung gering is
- Dämpfung von Glas ist in drei Bändern niedrig
- Dispersion: Impulse "Zerlaufen"
- Soliton: cosh-förmiger Impuls führt zu geringer Dispersion

Aufbau einer Glasfaser 
- Glaskern (Siliziumdioxid)
- Glasmantel (Siliziumdioxid)
- Plastikumhüllung

Jena leoni
dotiertes Glas

Wir haben zwei Lichtquellen für Glasfaser. Als empfänger dient eine Photodiode

|                    | LED        | Halbleiterfaser           |
| ------------------ | ---------- | ------------------------- |
| Datenrate          | Niedrig    | Hoch                      |
| Fasertyp           | Mulitimode | Multimode oder Singlemode |
| Entfernung         | Kurz       | Lang                      |
| Lebensdauer        | Langlbig   | Kurzlebig                 |
| Temperatureinfluss | Gering     | Erheblich                 |
| Kosten             | Niedrig    | Teuer                     |

Verteilerkasten
- Für eineen Straßenzug  (noch nicht gespleißt)
- Rein Passiv

- die rechte Seite zum vorangegangenen Bild 

Rein Passiv: Faserkoppler
- Viele. Fasern aus Häusern
- Eine abgehende Faser
- Rein passive Zusammenführung 

Faserspleißkassette: Hier als Glasfaserabschlusspunkt des Netzbetreibers
- Gg-AP ist der Abschlus des Netzbetreibers
- Hoheit des Netzbetreibers
- Nahe der Gebäudeführung

Übliche Glasfaser-Teilnehmerabschlussdose (Gf-TA)
- Wird in Wohnung installiert

Das innere eines Glasfaserkabels

Wer kümmert sich um die Kabel?
International Cable Protection Committee

Stecker für Glasfaser

ST-Stecker
SC-Stecker
LC-Stecker
MPO-Stecker


### Judgement clall Faser / Kupfer


|                            | Faser | Kupfer |
| -------------------------- | ----- | ------ |
| Bandbreite / Datenrate     | +     | -      |
| Dämpfung                   | +     | -      |
| Beeinflussung durch Umwelt | +     | -      |
| Gewicht / Abmessung        | +     | -      |
| Abhörsicher                |       |        |
| Kosten                     | -     | +      |

von Ethernet gibt es Varianten in Kupfer und Glasfaser
- Wir kommen noch dazu, was Ethernet eigentlich genau ist

Funk: Die Welle ist im Kabel geführt. Die Antenne ermöglicht den Übergang zurungeführten Übertragung und zurück

$$
c = \lambda\cdot f
$$
$$
\begin{array}{rcl}
100\text{ MHz} & \implies & 3\text{m} \\
1\text{ GHz} & \implies & 0,3\text{m} \\
3\text{ GHz} & \implies & 0,1\text{m} \\
\end{array}
$$


Breitbandige Funkverfahren: Frequenzsprung, DSSS, UWB
- FHSS: Schneller Sprung von einer Frequenz zu anderen innerhalb des Bands (Verhindert Störung und erhöht Sicherheit)
- DSSS / CDMA: Code zur Bandspreizung unterschiedliche Codes pro Nutzer
- UWB: Sehr niedrige Energie über eine sehr große Bandbreite

Funkasbreitung
- Bodenwelle: Geht direkt von Sendemast zu Sendemast
- Raumwelle: Wird an der Ionosphere reflektiert

- Große Distanzen 
- Omnidirektional
- Eigenschaften frequenzabhängig
	- Niedrige Frequenzen
		- Gute Durchdringung von Hindernissen
		- Leistungsabfall $\sim \frac{1}{r^2}$ (Path Loss)
	- Hohefrequenzen
		- Tendenziell geradlinige Ausbreitung
		- Reflexion an Hindernissen
		- Höhere Absorbtion Hindernisse

...

Richtfunk
- Oberhalb 100 MHz
- Gebündelte Wellen gerichtet auf ein Ziel
- Wenig Überschneidung unterschiedliche Signale in unterschiedliche Richtungen bei selber Frequenz

Fourieranalyse in aller Kürze
- Periodische Zeitfunktion $g(t)$ mit Periodendauer $T$
- Wird. als unendliche Reihe aus Sinus und Cosinusthermen dargestellt
- Grundfrequenz $f = \frac{1}{T}$
$$
g(t) = \underbrace{ \frac{1}{2} c +\sum_{n=1}^{\infty}  a_{n} \cdot \sin(2\pi nft) +\sum_{n=1}^{\infty}  b_{n} \cdot \sin(2\pi nft) }_{ \text{Fourierreihe} }
$$

Abbildung der Amplituden $a_{n}$, $b_{n}$
- Ausgehend von der Fourierreihe: Multiplikation, Integration
- Beispiel $a_{n}$
- Inegration über die Periode des Produkts zweier Sinusfunktionen

Bandbegrenzte Signale