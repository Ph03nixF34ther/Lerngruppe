---
aliases:
  - Lawinendurchbruch
  - Avalanche-Durchbruch
  - Avalanche-Effekt
---

# Grundlagen
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

\addplot[smooth,green,mark=none, domain=-10.2:-9,samples=20, thick]
{-20*exp(-5*(x+11))-.379999};

\addplot[smooth,green,mark=none, domain=-9:1.7,samples=60, thick]
{(19/50)*(exp((10*x)/7)-1)};

\addplot[ultra thick, dotted] coordinates {(.7,0) (.7,{(19/50)*(exp((10*.7)/7)-1)})} node[right, midway] {$U_F$};

\addplot[ultra thick, dotted] coordinates {(-10.1,0) (-10.1,{-20*exp(-5*(-10.1+11))-.379999})} node[left, midway] {$U_B$};

\addplot[ultra thick] coordinates {(-10, 0)} node[right, midway] {Zenerdurchbruch};

\end{axis}
\end{tikzpicture}
\end{document}
```


Die Grundlage für den Zenereffekt ist eine durch Vorspannung hervorgerufene gegenseitige Verschiebung der Energiebänder im [[dotierte Halbleiter|p-dotierten]] und im  [[dotierte Halbleiter|n-dotierten]] Bereich. Diese Verschiebung geht so weit, dass unbesetzte Zustände im Leitungsband die gleiche Energie haben wie besetzte Zustände im Valenzband. Durch diese Annäherung ist es Elektronen mit einer gewissen Wahrscheinlichkeit möglich, ohne Energieaufnahme aus dem Valenzband in das Leitungsband zu gelangen.

# Durchbruchseffekt

> [!Info] Zenerdurchbruch
> Der Zenerdurchbruch ist hauptsächlich bei stark dotierten Si-Dioden zu beobachten.
> Durch zu große Spannung werden Elektronen aus den Atomen gerissen. Ein Strom fließt. 
> Dieser Strom sorgt für eine Erwärmung des Bauteils, was diesen Effekt weiter verstärkt.
> Der Strom nimmt eine hohe Geschwindigkeit, der zu einem [[Lawineneffekt]] führt.
> Bei einer Maximaltemperatur von $180°C$ wird das Bauteil nachhaltig beschädigt.

Entscheidend: Dotierung ($200 k\frac{V}{cm}$)

# Unterschied zum Wärmedurchbruch

Unterschied Zenerdurchbruch <-> [[Wärmedurchbruch]]:
- Der Zenerdurchbruch entsteht bei einer zu hohen angelegten Spannung
- Der [[Wärmedurchbruch]] entsteht durch einen zu hohen Stromfluss