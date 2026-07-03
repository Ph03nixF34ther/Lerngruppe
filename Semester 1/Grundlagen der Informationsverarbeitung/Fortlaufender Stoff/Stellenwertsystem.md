# Definition

Eine schriftliche Formulierung von Zahlen

Sei die Zahlenbasis _b_ so ergeben sich die Ziffern von 0 bis _b_-1

# Beispiele

Beispiel mit _b_ = 10 ([[Dezimalsystem]])

Ziffern: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

25245$_{10}$ 

| 10^4 | 10^3 | 10^2 | 10^1 | 10^0 | Num$_{10}$ | Num$_{10}$ | Summe                                                  |
| ---- | ---- | ---- | ---- | ---- | ---------- | ---------- | ------------------------------------------------------ |
| 2    | 5    | 2    | 4    | 5    | 25245      | 25245      | $2 * 10^4 + 5 * 10^3 + 2 * 10^2 + 4 * 10^1 + 5 * 10^0$ |

---

Beispiel mit _b_ = 2 ([[Binärsystem]])

Ziffern: 0, 1

10011$_{2}$ 

| 2^4 | 2^3 | 2^2 | 2^1 | 2^0 | Num$_{2}$ | Num$_{10}$ | Summe                                             |
| --- | --- | --- | --- | --- | --------- | ---------- | ------------------------------------------------- |
| 1   | 0   | 0   | 1   | 1   | 10011     | 21         | $1 * 2^4 + 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 1 * 2^0$ |

---

Beispiel mit _b_ = 16 ([[Hexadezimalsystem]])

Ziffern: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, E, F

25A4F$_{16}$ 

| 16^4 | 16^3 | 16^2 | 16^1 | 16^0 | Num$_{16}$ | Num$_{10}$ | Summe                                                    |
| ---- | ---- | ---- | ---- | ---- | ---------- | ---------- | -------------------------------------------------------- |
| 2    | 5    | A    | 4    | F    | 25A4F      | 154191     | $2 * 16^4 + 5 * 16^3 + 10 * 16^2 + 4 * 16^1 + 15 * 16^0$ |

# Beispiel

| Dezimal | Oktal | Hexadezimal | Dual         | Basis 5          |
| ------- | ----- | ----------- | ------------ | ---------------- |
| 25      | 31    | 19          | 00011001     | 100              |
| 150     | 226   | 96          | 100100110    | 1100             |
| 256     | 400   | 100         | 000100000000 | 2011             |
| 255     | 377   | FF          | 11111111     | 2010             |
|         |       |             |              | 436 (Geht nicht) |

---

# Operatoren

## Addition

### Beispiele

$169_{10} + 53_{10} \implies 10101001_2 + 110101_2$ 

<div style="display: flex; justify-content: flex-start"><pre style="text-align: right">10101001<br>+   110101<br>----------<br>11011110</pre></div>

## Subtraktion

[[Zweierkomplement]] bilden und normal addieren

### Beispiele

$169_{10} - 53_{10} \implies 10101001_2 - 110101_2$ 

$53_{10} = 00110101_2$
[[Zweierkomplement]]
$00110101_2 \rightarrow 11001010_2 \rightarrow 11001011_2$ 
$-53_{10} = 11001011_2$ 

<div style="display: flex; justify-content: flex-start"><pre style="text-align: right">10101001<br>+ 11001011<br>----------<br><p style="opacity:.5; display: inline">1|</p>01110100</pre></div>

## Multiplikation

Einfach schriftliches Multiplizieren

### Beispiele

<div style="display: flex; justify-content: flex-start"><pre style="text-align: right">121 * 105<br>121<br>121<br>121<br>121<br>121<br>000 <br>121  <br> ---------<br>12705</pre></div>
$121_{10} * 105_{10} = 121 * (1 * 10^2 + 0 * 10^1 + 5 * 10^0) = 12100 + 121 + 121 + 121 + 121 + 121 = 12705$ 

<div style="display: flex; justify-content: flex-start"><pre style="text-align: right">164 * 197<br>164<br>164<br>164<br>164<br>164<br>164<br>000 <br>164  <br>---------<br>77064</pre></div>
$164_{10} * 197_{10} = 244_{8} * 305_{8} = 244_8 + 244_8 + 244_8 + 244_8 + 244_8 + 24400_8 + 24400_8 = 77064_8$

# Division

### Beispiele

$x = 1010_2$

$y = 0011_2$

$-y = 1100_2$


TODO

| r    | x    | y   | Schritt    |
| ---- | ---- | --- | ---------- |
| 0000 | 1010 | r<y | Bit-Shift  |
| 0001 | 0100 | r<y | Bit-Shift  |
| 0010 | 1000 | r<y | Bit-Shift  |
| 0101 | 0000 | r>y | y Abziehen |
| 0001 | 0000 | r<y | Bit-Shift  |
| 0010 | 0000 | r<y | Bit-shift  |
| 0100 | 0000 | r>y | y Abziehen |

