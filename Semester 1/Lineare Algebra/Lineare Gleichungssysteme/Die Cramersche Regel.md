# Beschreibung der cramerschen Regel

| Gesucht | $x$        |
|---------|------------|
| Gegeben | $b$, $A$   |

Die Cramersche Regel findet die Lösungsvariable $x_z$, indem die Determinante der Koeffizientenmatrix, deren Spalte $z$ durch den Bildvektor ersetzt wurde, durch die Determinante $det(A)$ geteilt wird.

$$
x_i = \frac{det(A_i)}{det(A)}
$$

1. Errechne die Determinante $det(A)$
2. Setze den Bildvektor an der $i$ ten Spalte der Koeffizientenmatrix $A$ ein (diese neue Matrix heißt $A_i$)
3. Errechne die Determinante $det(A_i)$
4. Rechne $x_i = \frac{det(A_i)}{det(A)}$

# Beispiel für das Lösen eines LGS mittels der Cramerschen Regel
$$
A:= 
\begin{pmatrix} 
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{pmatrix} 
\hspace{1cm}
b := 
\begin{pmatrix} 
10 \\ 
5 \\ 
20 
\end{pmatrix}
$$
---
$$
det\left(\left[
\begin{array}{ccc}
3 & 5 & -2 \\ 
4  & -1 & 4 \\ 
1 & 1 & 1 
\end{array}\right]\right):= -25
$$
Die Determinante ist $\not = 0$, dh. es gibt eine Lösung des LGS.
$$
det\left(\left[
\begin{array}{|c|cc}
10 & 5 & -2 \\ 
5 & -1 & 4 \\ 
20 & 1 & 1 
\end{array}\right]\right):= 275
\hspace{1cm}
\Rightarrow x_0 = \frac{275}{-25} = \underline{\underline{-11}}
$$
$$
det\left(\left[
\begin{array}{c|c|c}
3 & 10 & -2 \\ 
4 & 5 & 4 \\ 
1 & 20 & 1 
\end{array}\right]\right):= -375
\hspace{1cm}
\Rightarrow x_1 = \frac{-375}{-25} = \underline{\underline{15}}
$$
$$
det\left(\left[
\begin{array}{cc|c|}
3 & 5 & 10 \\ 
4 & -1 & 5 \\ 
1 & 1 & 20 
\end{array}\right]\right):= -400
\hspace{1cm}
\Rightarrow x_2 = \frac{-400}{-25} = \underline{\underline{16}}
$$
