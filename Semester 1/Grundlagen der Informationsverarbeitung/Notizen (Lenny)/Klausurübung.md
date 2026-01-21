# Übung 1

![[SchaltungÜbung.png]]

$\overline{A} \overline{B} \overline{C} D \lor \overline{A} \overline{B} C D \lor \overline{A} B \overline{C} D \lor \overline{A} B C D \lor A \overline{B} C D \lor A \overline{B} C \overline{D}$ 

| A   | B   |                                            |                                 |                                 |     |     |
| --- | --- | ------------------------------------------ | ------------------------------- | ------------------------------- | --- | --- |
| 0   | 0   | $\overline{A} \overline{B} \overline{C} D$ | $\overline{A} \overline{B} C D$ |                                 |     |     |
| 1   | 0   |                                            | $A \overline{B} C D$            | $A \overline{B} C \overline{D}$ |     |     |
| 1   | 1   |                                            |                                 |                                 |     |     |
| 0   | 1   | $\overline{A} B \overline{C} D$            | $\overline{A} B C D$            |                                 |     |     |
|     |     | 0                                          | 1                               | 1                               | 0   | C   |
|     |     | 1                                          | 1                               | 0                               | 0   | D   |
$\overline{A} D \lor A \overline{B} C$ 

![[Schaltung2.svg]]

# Übung 2

Entwerfe eine logische Schaltung für eine 1-Bit-Voll-Addierstufe

| A   | B   | C   | f1  | f2  | DNF1                          | DNF2               |
| --- | --- | --- | --- | --- | ----------------------------- | ------------------ |
| 0   | 0   | 0   | 0   | 0   |                               |                    |
| 0   | 0   | 1   | 1   | 0   | $\overline{A} \overline{B} C$ |                    |
| 0   | 1   | 0   | 1   | 0   | $\overline{A} B \overline{C}$ |                    |
| 0   | 1   | 1   | 0   | 1   |                               | $\overline{A} B C$ |
| 1   | 0   | 0   | 1   | 0   | $A \overline{B} \overline{C}$ |                    |
| 1   | 0   | 1   | 0   | 1   |                               | $A \overline{B} C$ |
| 1   | 1   | 0   | 0   | 1   |                               | $A B \overline{C}$ |
| 1   | 1   | 1   | 1   | 1   | $A B C$                       | $A B C$            |
$f1(A, B, C) = \overline{A} \overline{B} C \lor \overline{A} B \overline{C} \lor A \overline{B} \overline{C} \lor A B C$ 

| A   | B   |                               |                               |     |
| --- | --- | ----------------------------- | ----------------------------- | --- |
| 0   | 0   |                               | $\overline{A} \overline{B} C$ |     |
| 0   | 1   | $\overline{A} B \overline{C}$ |                               |     |
| 1   | 1   |                               | $A B C$                       |     |
| 1   | 0   | $A \overline{B} \overline{C}$ |                               |     |
|     |     | 0                             | 1                             | C   |

$f2(A, B, C) = \overline{A} B C \lor A \overline{B} C \lor A B \overline{C} \lor A B C$ 

| A   | B   |                    |                    |     |
| --- | --- | ------------------ | ------------------ | --- |
| 0   | 0   |                    |                    |     |
| 0   | 1   |                    | $\overline{A} B C$ |     |
| 1   | 1   | $A B \overline{C}$ | $A B C$            |     |
| 1   | 0   |                    | $A \overline{B} C$ |     |
|     |     | 0                  | 1                  | C   |
$B C \lor A B \lor A C$ 

![[1-Bit-Voll-Addierblock.svg]]