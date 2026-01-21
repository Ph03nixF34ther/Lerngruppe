Andere Weg Schaltungen der [[Schaltalgebra]] zu vereinfachen

# 1. Schritt

Tabelle bilden (Es darf sich pro Schritt nur eine Variable ändern)

$\overline{A} B C \lor A \overline{B} C \lor A B \overline{C} \lor A B C$ 

| A   | B   |     |     |     |
| --- | --- | --- | --- | --- |
| 0   | 0   |     |     |     |
| 0   | 1   |     |     |     |
| 1   | 1   |     |     |     |
| 1   | 0   |     |     |     |
|     |     | 1   | 0   | C   |

# 2. Schritt

Terme eintragen


| A   | B   |                    |                    |     |
| --- | --- | ------------------ | ------------------ | --- |
| 0   | 0   |                    |                    |     |
| 0   | 1   | $\overline{A} B C$ |                    |     |
| 1   | 1   | $A B C$            | $A B \overline{C}$ |     |
| 1   | 0   | $A \overline{B} C$ |                    |     |
|     |     | 1                  | 0                  | C   |

# 3. Schritt

Gruppen mit den größten Zweierpotenzen bilden

| A   | B   |                    |                    |     |
| --- | --- | ------------------ | ------------------ | --- |
| 0   | 0   |                    |                    |     |
| 0   | 1   | $\overline{A} B C$ |                    |     |
| 1   | 1   | $A B C$            | $A B \overline{C}$ |     |
| 1   | 0   | $A \overline{B} C$ |                    |     |
|     |     | 1                  | 0                  | C   |

$\overline{A} B C \lor A \overline{B} C \implies C$
$A \overline{B} C \lor A B C \implies AC$
$A B C \lor A B \overline{C} \implies A B$

$\implies C \lor A C \lor A B \implies C \lor A B$ 

# Beispiel 1

$\overline{A} \overline{B} \overline{C} \lor \overline{A} B \overline{C} \lor \overline{A}  B C \lor A \overline{B} \overline{C} \lor A B \overline{C}$ 

| A   | B   |                     |                                          |     |
| --- | --- | ------------------- | ---------------------------------------- | --- |
| 0   | 0   |                     | $\overline{A} \overline{B} \overline{C}$ |     |
| 0   | 1   | $\overline{A}  B C$ | $\overline{A} B \overline{C}$            |     |
| 1   | 1   |                     | $A B \overline{C}$                       |     |
| 1   | 0   |                     | $A \overline{B} \overline{C}$            |     |
|     |     | 1                   | 0                                        | C   |

$\overline{A} B \lor \overline{C}$ 

# Beispiel 2

$\overline{A} \overline{B} \overline{C} \overline{D} \lor \overline{A} B \overline{C} \overline{D} \lor A B \overline{C} \overline{D} \lor A \overline{B} \overline{C} \overline{D} \lor \overline{A} \overline{B} C D \lor \overline{A} \overline{B} \overline{C} D \lor \overline{A} B \overline{C} D$ 

| A   | B   |                                            |                                 |     |                                                       |     |
| --- | --- | ------------------------------------------ | ------------------------------- | --- | ----------------------------------------------------- | --- |
| 0   | 0   | $\overline{A} \overline{B} \overline{C} D$ | $\overline{A} \overline{B} C D$ |     | $\overline{A} \overline{B} \overline{C} \overline{D}$ |     |
| 0   | 1   | $\overline{A} B \overline{C} D$            |                                 |     | $\overline{A} B \overline{C} \overline{D}$            |     |
| 1   | 1   |                                            |                                 |     | $A B \overline{C} \overline{D}$                       |     |
| 1   | 0   |                                            |                                 |     | $A \overline{B} \overline{C} \overline{D}$            |     |
|     |     | 0                                          | 1                               | 1   | 0                                                     | C   |
|     |     | 1                                          | 1                               | 0   | 0                                                     | D   |

$\overline{C} \overline{D} \lor \overline{A} \overline{C} \lor \overline{A} \overline{B} D$ 