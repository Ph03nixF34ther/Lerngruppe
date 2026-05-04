---
aliases:
  - reguläre Ausdrücke
  - regulärer Ausdruck
---
Mit regulären Ausdrücken können reguläre Mengen beschrieben werden

Eine reguläre Menge $R$ über einem [[Alphabet]] $A$ ist wie folgt definiert:

1. $\varnothing \in R$; die leere Menge ist regulär
2. $\left\{ \varepsilon \right\}$; die Menge, die nur das leere Wort enthält, ist regulär
3. $\left\{ a \right\} \in R \ \forall \ a \in A$
4. Auch die Vereinigung sowie Konkatenation (Verkettung von [[Wort|Wörtern]] oder [[Terminalsymbol|Terminalsymbolen]]) von regulären Mengen erzeugt reguläre Mengen
5. Eine Menge ist genau dann regulär, wenn sie in endlich vielen Schritten aus den Regeln 1 - 4 gewonnen werden kann

Die Mengen der über einem [[Alphabet]] $A$ beschriebenen regulären Ausdrücke wird nachfolgenden Regeln gebildet:

1. "$\varnothing$" ist ein regulärer Ausdruck, der die leere Menge bezeichnet
2. "$\varepsilon$" ist ein regulärer Ausdruck, der die reguläre Menge $\left\{ \varepsilon \right\}$ bezeichnet
3. "$a$" mit $a \in A$ ist eine regulärer Ausdruck für die reguläre Menge $\left\{ a \right\}$
4. Sind $p$ und $q$ reguläre Ausdrücke für die regulärem Mengen $P$ und $Q$, so ist:
	- "$\left( p \right)^*$" ein regulärer Ausdruck, der die Menge $P^*$ bezeichnet (Konkatenation von $P$ mit sich selbst)
	- "$\left( p \lor q\right)$" ein regulärer Ausdruck, der die Vereinigungsmenge von $P$ und $Q$ bezeichnet
	- "$\left( pq \right)$" ein regulärer Ausdruck, der die Konkatenation von $P$ und $Q$ bezeichnet
Eine reguläre Menge kann in der Regel durch mehrere Ausdrücke beschrieben werden

| Regulärer Ausdruck | [[Backus-Naur-Form]]-Equivalent   | Beschreibung                                                |
| ------------------ | --------------------------------- | ----------------------------------------------------------- |
| $a^*$              | aaaaaaaaaaa ... \| $\varepsilon$  | So oft wiederholen wie man will, auch kein Mal              |
| $(a \lor b)$       | a \| b                            | Eins oder das andere                                        |
| $ab$               | ab                                | Die Eingabe                                                 |
| $(ab)^*$           | abababababab ... \| $\varepsilon$ | Die Eingabe, so oft wiederholen wie man will, auch kein Mal |

Bespiel 1: 
Alphabet: $A = \left\{0, 1\right\}$
Ausdruck: $0 ((1)^*0(10)^*1(01)^*)^*$ 
Damit können folgende Binärzahlen gebildet werden:
$0$, $01110101$, $001010110101$ usw.

Beispiel 2:
Alphabet: $A = \left\{a, b \right\}$
Ausdruck: $L \subset A^* = (ab)^* \lor (ba)^* \lor a(ba)^* \lor b(ab)^*$ 
Beschreibung: Die zu bilden Wörter dürfen weder $aa$ noch $bb$ enthalten
