# Wichtige Logic Schaltkreise

TTL, CMOS --Infos aus Präsentation--

# Multiplikation

--Link zu Dodo einfügen--

# Division

--Infos aus Präsentation--

Ein Komparator erhält zwei eingangszahlen, abhängig von den stellen dieser zahlen sind die Eingänge. Er hat immer drei Ausgänge.
Bei Zweistelligen Eingangszahlen hat der Komparator vier Eingänge.
Die Ausgänge beschreibt den Vergleich der beiden Zahlen. 
Ausgänge:
- A=B
- A>B
- A\<B

Beispiel
$$
	\begin{array}{cc|cc|ccc}
	B_{1} & B_{0} & A_{1} & A_{0} & A=B & A>B & A<B \\
	\hline \\
	0 & 0 & 0 & 0 & 1 & 0 & 0 &  \\ 
	0 & 0 & 0 & 1 & 0 & 1 & 0 \\
	0 & 0 & 1 & 0 & 0 & 1 & 0 \\
	0 & 0 & 1 & 1 & 0 & 1 & 0 \\
	\hline \\
	0 & 1 & 0 & 0 & 0 & 0 & 1 \\
	0 & 1 & 0 & 1 & 1 & 0 & 0 \\
	0 & 1 & 1 & 0 & 0 & 1 & 0 \\
	0 & 1 & 1 & 1 & 0 & 1 & 0 \\
	\hline \\
	1 & 0 & 0 & 0 & 0 & 0 & 1 \\
	1 & 0 & 0 & 1 & 0 & 0 & 1 \\
	1 & 0 & 1 & 0 & 1 & 0 & 0 \\
	1 & 0 & 1 & 1 & 0 & 1 & 0 \\
	\hline \\
	1 & 1 & 0 & 0 & 0 & 0 & 1 \\
	1 & 1 & 0 & 1 & 0 & 0 & 1 \\
	1 & 1 & 1 & 0 & 0 & 0 & 1 \\
	1 & 1 & 1 & 1 & 1 & 0 & 0
	
	\end{array}
$$

--Vereinfachte Schaltzeichnung aufschreiben--

# Multiplexer und Datenselektor

--Infos aus Präsentation--

Multiplexer : Viele Ausgänge ein Eingang
Datenselektor: Viele Eingänge ein Ausgang

Ausgangslastfaktor????


