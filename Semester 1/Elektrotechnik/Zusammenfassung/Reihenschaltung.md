---
aliases:
  - Reihenschaltungen
---
# Übersicht
Die Reihenschaltung (je nach Anwendung auch Spannungsteilerschaltung genannt) beschreibt in der Elektrotechnik die Hintereinanderschaltung zweier oder mehrerer Bauelemente in einer Schaltung so, dass sie einen einzigen Strompfad bilden. Zwei Bauelemente sind demnach in Reihe geschaltet, wenn deren Verbindung keine Abzweigung aufweist. Die Anzahl der in Reihe geschalteten Elemente ist beliebig. 

```tikz
\usepackage{circuitikz}
\begin{document}
\begin{tikzpicture}
	% Paths, nodes and wires:
	\node[circ] at (4, 6.5){};
	\node[circ] at (14, 6.5){};
	\draw (5, 6.5) -- (4, 6.5);
	\draw (13, 6.5) -- (14, 6.5);
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (3.5, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (3.25, 6.875){A};
	\node[shape=rectangle, minimum width=0.465cm, minimum height=0.715cm] at (14.25, 6.5){} node[anchor=north west, align=left, text width=0.077cm, inner sep=6pt] at (14, 6.875){B};
	\draw (5, 6.5) to[european resistor, l={$R_1$}] (7, 6.5);
	\draw (7, 6.5) to[european resistor, l={$R_2$}] (9, 6.5);
	\draw (9, 6.5) to[european resistor, l={$R_3$}] (11, 6.5);
	\draw (11, 6.5) to[european resistor, l={$R_4$}] (13, 6.5);
\end{tikzpicture}
\end{document}
```

# Eigenschaften der Reihenschaltung
## schriftliche Zusammenfassung der Eigenschaften
- Alle Elemente werden von demselben elektrischen Strom durchflossen.
- Die Reihenschaltung von potentialfreien Spannungsquellen ermöglicht es, eine höhere Gesamtspannung zu erzeugen. Das wird z. B. in Batterien oder Solarzellen angewendet.
- Die Reihenschaltung von Verbrauchern ist anfällig für Ausfälle (im Sinne einer Unterbrechung). Wenn ein einzelnes Element die elektrische Leitung unterbricht oder aus der Leitung entfernt wird, fällt die komplette Reihe aus. Erwünscht ist dieses bei einer in Reihe zum Verbraucher geschalteten Sicherung.– Bei einem Ausfall im Sinne eines Kurzschlusses und bei konstanter Speisespannung erhöht sich die Spannung an den intakten Verbrauchern.
- Die Reihenschaltung von Relaiskontakten mit den Zuständen „gesperrt“ und „leitend“ realisiert für den Zustand „leitend“ eine UND-Funktion, für den Zustand „gesperrt“ eine ODER-Funktion. Letzteres wird angewendet bei in Reihe geschalteten Ruhestromkontakten einer Alarmanlage.
## Mathematische Beschreibung dieser Eigenschaften

$$
U = U_{1} + U_{2} + U_{3} + \dots
$$
$$
I = I_{1} = I_{2} = I_{3} = \dots
$$
# Herleitung der Ersatzwiderstandsberechnung

$$
U = U_{1} + U_{2} + U_{3} + \dots
$$
$$
I = I_{1} = I_{2} = I_{3} = \dots
$$
Das heißt für den Ersatzwiderstand:
$$
R_{\text{Ersatz}} = \frac{U}{I}
$$
$$
R_{\text{Ersatz}} = \frac{U_{1} + U_{2} + U_{3} + \dots}{I} = \frac{U_{1}}{I} + \frac{U_{2}}{I} + \frac{U_{3}}{I} + \dots = \frac{U_{1}}{I_{1}} + \frac{U_{2}}{I_{2}} + \frac{U_{3}}{I_{3}} + \dots
$$
$$
R_{\text{Ersatz}} = R_{1} + R_{2} + R_{3} + \dots
$$