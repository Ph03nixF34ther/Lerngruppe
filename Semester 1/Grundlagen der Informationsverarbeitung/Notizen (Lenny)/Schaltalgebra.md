Anwendungsgebiet der [[Boolesche Algebra|Booleschen Algebra]] 

Beschreibung logischer Schaltungen

# Operationen

## Negation

wird auch als NOT bezeichnet

Zeichen: $\lnot$ (Latex: "\lnot") _oder_ $\overline{ABC}$ (Latex: "\overline{ABC}")

| $A$ | $\lnot A$ |
| --- | --------- |
| 0   | 1         |
| 1   | 0         |

Negation eines Ausdrucks wird mit einem Strich darüber dargestellt

Beispiel: $\overline{A \lor B}$ 

## Konjunktion

wird auch als UND bezeichnet

Zeichen: $\land$ (Latex: "\land")

| $A$ | $B$ | $A\land B$ |
| --- | --- | ---------- |
| 0   | 0   | 0          |
| 0   | 1   | 0          |
| 1   | 0   | 0          |
| 1   | 1   | 1          |

Das Konjunktionszeichen wird in einem Ausdruck weggelassen

Beispiel: $A \lor (A \land B)$ wird zu $A \lor AB$

## Disjunktion

wir auch als OR bezeichnet

Zeichen: $\lor$ (Latex: "\lor")

| $A$ | $B$ | $A \lor B$ |
| --- | --- | ---------- |
| 0   | 0   | 0          |
| 0   | 1   | 1          |
| 1   | 0   | 1          |
| 1   | 1   | 1          |

## Implikation

Ergibt nur 0, wenn $A = 1$  und $B = 0$ ist

Zeichen: $\implies$ (Latex: "\implies")

| $A$ | $B$ | $A \implies B$ |
| --- | --- | -------------- |
| 0   | 0   | 1              |
| 0   | 1   | 1              |
| 1   | 0   | 0              |
| 1   | 1   | 1              |

## Äquivalenz

Ergibt 1, wenn $A = B$

Zeichen: $\iff$ (Latex: "\iff")

| $A$ | $B$ | $A \iff B$ |
| --- | --- | ---------- |
| 0   | 0   | 1          |
| 0   | 1   | 0          |
| 1   | 0   | 0          |
| 1   | 1   | 1          |

## Antivalenz

wird auch als XOR bezeichnet

Zeichen: $\oplus$ (Latex: "\oplus")

| $A$ | $B$ | $A \oplus B$ |
| --- | --- | ------------ |
| 0   | 0   | 0            |
| 0   | 1   | 1            |
| 1   | 0   | 1            |
| 1   | 1   | 0            |

## Bindungsstärke

In Reihenfolge

$\lnot$, $\land$, $\lor$, $\implies$, $\iff$ 

Beispiel: $\lnot(A \lor B) \land (A \land 1 \lor 0)$ bedeutet $((\lnot(A \lor B)) \land ((A \land 1) \lor 0))$ 

## Produktterm

Ein Ausdruck der nur aus [[#Konjunktionen]] und Variablen (auch [[#Negation|negiert]]) nennt sich Produktterm

Jeder Produktterm beschreibt ein Funktion die bei genau einer Wertebelegung 1 Ausgibt

Beispiel: $\lnot ABC$  gibt nur 1 aus wenn $A = 0, B = 1, C = 1$ 

Jede [[Boolesche Algebra|boolesche Funktion]] lässt sich durch eine [[#Disjunktion]] von Produkttermen darstellen
Die Funktionen [[#Implikation]], [[#Antivalenz]] und [[#Äquivalenz]] können auf die Grundoperationen [[#Negation]], [[#Konjunktion]] und [[#Disjunktion]] zurückgeführt werden

Daraus ergibt sich die [[Disjunktive Normalform]] 

# Beispiel

Ausdruck: $AB \lor AC \lor BC$

Tabelle:

| $A$ | $B$ | $C$ | $f(A, B, C)$ |
| --- | --- | --- | ------------ |
| 0   | 0   | 0   | 0            |
| 0   | 0   | 1   | 0            |
| 0   | 1   | 0   | 0            |
| 0   | 1   | 1   | 1            |
| 1   | 0   | 0   | 0            |
| 1   | 0   | 1   | 1            |
| 1   | 1   | 0   | 1            |
| 1   | 1   | 1   | 1            |

Schaltung:

![[Schaltung1.png]]

