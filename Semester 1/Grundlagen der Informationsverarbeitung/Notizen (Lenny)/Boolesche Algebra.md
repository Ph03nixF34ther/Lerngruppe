---
aliases:
  - booleschen Algebra
---

1854 von G. Boole entwickelt

Die Grundlegenden Schaltungen der Digitalrechner arbeiten nach den Regeln der [[Schaltalgebra]], welche auf der Booleschen Algebra basiert

# Assoziativgesetze

Sind von Klammerung unabhängig

$x \land (y \land z) = (x \land y) \land z$

$x \lor (y \lor z) = (x \lor y) \lor z$

# Kommutativgesetze

Sind Reihenfolge unabhängig

$x \land y = y \land x$

$x \lor y = y \lor x$

# Absorptionsgesetze

Verschmelzungsgesetze

$x \land ( x \lor y) = x$

$x \lor ( x \land y) = x$

# Distributivgesetze

Verteilungsgesetze

$x \land (y \lor z) = (x \land y) \lor ( x \land z)$

$x \lor (y \land z) = (x \lor y) \land (x \lor z)$

# Neutrale Elemente

$\exists \text{ ein Element } 0 \in M \text{ mit } 0 \land x = 0 \text{ und } 0 \lor x = x, \forall \, x \in M$ 

$\exists \text{ ein Element } 1 \in M \text{ mit } 1 \land x = x \text{ und } 1 \lor x = 1, \forall \, x \in M$ 

# Komplementäre Elemente

Zu jedem Element gibt es ein komplementäres Element

$\exists \text{ genau ein } y \in M \text{ zu jedem } x \in M \text{ mit } x \land y = 0 \text{ und } x\lor y = 1$ 

# Definiert

1. $0, 1 \in A_n$

2. $\forall \, i \in \lbrace 1, ..., n \rbrace \text{ ist } x_i \in A_n$  

3. $\text{wenn } A \in A_n \text{ ist, so ist } (A) \in A_n$ 

4. $\text{wenn } A, B \in A_n \text{ so sind } (A \land B) \in A_n$ 

5. $A_n \text{ besteht nur aus den durch die Anwendung der Regeln 1 bis 4 gewonnen Zeichenreihen }$
  
# Einige Rechengesetze

1. $\overline{\overline{A}} = A$ 

2. $A \land A \, . . . \land \, A = A$ 

3. $A \lor A \, . . . \lor \, A = A$ 

4. $\overline{A} \lor A = 1$ 

5. $\overline{A} \land A = 0$ 

6. $A \land 0 = 0 \quad A \land 1 = A \quad A \lor 0 = A \quad A \lor 1 = 1$ 

7. $A \lor B = B \lor A \quad A\land B = B \land A$ 

8. $A \land (B \land C) = (A \land B) \land C = A \land B \land C$ 
   $A \lor (B \lor C) = (A \lor B) \land C = A \lor B \lor C$ 

9. $A \land (B \lor C) = (A \land B) \lor (A \land C)$ 
   $A \lor (B \land C) = (A \lor B) \land (A \lor C)$ 

10. $A \land (B \lor A) = A \quad A \lor (B \land A) = A$ 

11. $\overline{A \land B} = \overline{A} \lor \overline{B} \quad \overline{A \lor B} = \overline{A} \land \overline{B} \text{ De-Morgan-Regel}$  

12. Verallgemeinerung der De-Morgan-Regel (Shannonsche Regel)
    $\overline{f(A_{m-1}, ..., A_1, A_0, \land, \lor)} = \overline{f} \, \overline{(A_{m-1}, } \, ..., \, \overline{A_1, } \, \overline{A_0, } \, \lor, \, \land)$ 
    d.h. alle Variablen negieren und $\land$ durch $\lor$ und $\lor$ durch $\land$ ersetzen

Rechenregeln ($\land$ wird weggelassen):

13. $AD \lor BD \lor CD = (A \lor B \lor C) D$ 

14. $AB \lor A \, \overline{B\,} = A$ 

15. $(A \lor B) \land (A \lor \overline{B\,}) = A$ 

16. $A \lor \overline{A\,} B = A \lor B$ 

17. $A (\overline{A\,} \lor B) = AB$ 

## Beispiele

### $\overline{A\,} B C \lor A \overline{B\,} C \lor A B \overline{C\,} \lor A B C$ 

Umformung:

Regel 7: $\overline{A\,} B C \lor A B C \lor A \overline{B\,} C \lor A B \overline{C\,}$ 

Regel 8: $B C (\overline{A\,} \lor A) \lor A \overline{B\,} C \lor A B \overline{C\,}$

Regel 9: $B C (1) \lor A \overline{B\,} C \lor A B \overline{C\,} \implies B C \lor A \overline{B\,} C \lor A B \overline{C\,}$ 

Regel 8: $C (B \lor A \overline{B\,}) \lor A B \overline{C\,}$

Regel 16: $C (B \lor A) \lor A B \overline{C\,}$

Regel 9: $C B \lor C A\lor A B \overline{C\,}$ 

Regel 13: $C B \lor A (C \lor B \overline{C\,})$ 

Regel 16: $C B \lor A (C\lor B)$ 

Regel 9: $C B \lor A C \lor A B$

Regel 7: $A B \lor A C \lor B C$ 


### $\overline{A} \overline{B} \overline{C} \lor \overline{A} B \overline{C} \lor \overline{A} B C \lor A \overline{B} \overline{C} \lor A B \overline{C}$ 

| A   | B   | C   |     |
| --- | --- | --- | --- |
| 0   | 0   | 0   | 1   |
| 0   | 0   | 1   | 0   |
| 0   | 1   | 0   | 0   |
| 0   | 1   | 1   | 0   |
| 1   | 0   | 0   | 1   |
| 1   | 0   | 1   | 0   |
| 1   | 1   | 0   | 1   |
| 1   | 1   | 1   | 0   |


Umformung:

*Regel 9*
$\overline{A} \overline{C} ( \overline{B} \lor B) \lor \overline{A} B C \lor A \overline{B} \overline{C} \lor A B \overline{C}$ 

*Regel 4*
$\overline{A} \overline{C} \lor \overline{A} B C \lor A \overline{B} \overline{C} \lor A B \overline{C}$ 

*Regel 9*
$\overline{A} \overline{C} \lor \overline{A} B C \lor A \overline{C} (\overline{B} \lor B)$ 

*Regel 4*
$\overline{A} \overline{C} \lor \overline{A} B C \lor A \overline{C}$ 
{dorendorf|blue}
*Regel 9*
$(\overline{A} \lor A) \overline{C} \lor \overline{A} B C$ 

*Regel 4*
$\overline{C} \lor \overline{A} B C$ 

*Regel 16*
$\overline{C} \lor \overline{A} B$ 

{dorendorf} Dorendorf: "Mehr als eine Variable Unterschied kann Schwierig werden"
*Regel 9*
$\overline{A} ( \overline{C} \lor BC) \lor A \overline{C}$

*Regel 16*
$\overline{A} ( \overline{C} \lor B) \lor A \overline{C}$

*Regel 9*
$\overline{A} \overline{C} \lor \overline{A} B \lor A \overline{C}$ 

*Regel 9*
$(\overline{A} \lor A) \overline{C} \lor \overline{A} B$  

*Regel 4*
$\overline{C} \lor \overline{A} B$ 


### f(A, B, C, D)

| A   | B   | C   | D   |     | [[Disjunktive Normalform]]                            |
| --- | --- | --- | --- | --- | ----------------------------------------------------- |
| 0   | 0   | 0   | 0   | 1   | $\overline{A} \overline{B} \overline{C} \overline{D}$ |
| 0   | 0   | 0   | 1   | 1   | $\overline{A} \overline{B} \overline{C} D$            |
| 0   | 0   | 1   | 0   | 0   |                                                       |
| 0   | 0   | 1   | 1   | 1   | $\overline{A} \overline{B} C D$                       |
| 0   | 1   | 0   | 0   | 1   | $\overline{A} B \overline{C} \overline{D}$            |
| 0   | 1   | 0   | 1   | 1   | $\overline{A} B \overline{C} D$                       |
| 0   | 1   | 1   | 0   | 0   |                                                       |
| 0   | 1   | 1   | 1   | 0   |                                                       |
| 1   | 0   | 0   | 0   | 1   | $A \overline{B} \overline{C} \overline{D}$            |
| 1   | 0   | 0   | 1   | 0   |                                                       |
| 1   | 0   | 1   | 0   | 0   |                                                       |
| 1   | 0   | 1   | 1   | 0   |                                                       |
| 1   | 1   | 0   | 0   | 1   | $A B \overline{C} \overline{D}$                       |
| 1   | 1   | 0   | 1   | 0   |                                                       |
| 1   | 1   | 1   | 0   | 0   |                                                       |
| 1   | 1   | 1   | 1   | 0   |                                                       |
$\overline{A} \overline{B} \overline{C} \overline{D} \lor \overline{A} \overline{B} \overline{C} D \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} \overline{D} \lor \overline{A} B \overline{C} D \lor A \overline{B} \overline{C} \overline{D} \lor A B \overline{C} \overline{D}$ 

Umformen:

$\overline{A} \overline{B} \overline{C} \overline{D} \lor \overline{A} \overline{B} \overline{C} D \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} \overline{D} \lor \overline{A} B \overline{C} D \lor A \overline{C} \overline{D} (\overline{B} \lor B)$ 

$\overline{A} \overline{B} \overline{C} \overline{D} \lor \overline{A} \overline{B} \overline{C} D \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} \overline{D} \lor \overline{A} B \overline{C} D \lor A \overline{C} \overline{D}$ 

$\overline{A} \overline{B} \overline{C} (\overline{D} \lor D) \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} \overline{D} \lor \overline{A} B \overline{C} D \lor A \overline{C} \overline{D}$ 

$\overline{A} \overline{B} \overline{C} \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} \overline{D} \lor \overline{A} B \overline{C} D \lor A \overline{C} \overline{D}$ 

$\overline{A} \overline{B} \overline{C} \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} (\overline{D} \lor D) \lor A \overline{C} \overline{D}$ 

$\overline{A} \overline{B} \overline{C} \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} \lor A \overline{C} \overline{D}$ 

$\overline{A} \overline{B} (\overline{C} \lor C D) \lor \overline{A} B \overline{C} \lor A \overline{C} \overline{D}$ 

$\overline{A} \overline{B} (\overline{C} \lor D) \lor \overline{A} B \overline{C} \lor A \overline{C} \overline{D}$ 

$\overline{A} \overline{B} \overline{C} \lor \overline{A} \overline{B} D \lor \overline{A} B \overline{C} \lor A \overline{C} \overline{D}$ 

$\overline{A}  \overline{C} (\overline{B} \lor B) \lor \overline{A} \overline{B} D \lor A \overline{C} \overline{D}$ 

$\overline{A}  \overline{C}\lor \overline{A} \overline{B} D \lor A \overline{C} \overline{D}$ 

$\overline{C} (\overline{A} \lor A \overline{D}) \lor \overline{A} \overline{B} D$ 

$\overline{C} (\overline{A} \lor \overline{D}) \lor \overline{A} \overline{B} D$ 

$\overline{A}  \overline{C}\lor \overline{A} \overline{B} D \lor \overline{C} \overline{D}$ 