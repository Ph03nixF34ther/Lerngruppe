# Beschreibung des gaußschen Eliminationsverfahrens

| Gesucht | $x$        |
|---------|------------|
| Gegeben | $b$, $A$    |

Das gaußsche Eliminationsverfahren verändert durch simple Rechenschritte sowohl die Matrix $A$ als auch den Bildvektor $b$ um die Matrix in eine Dreiecksmatrix umzuwandeln.

Die Variablen des Urbildvektors lassen sich dann aus $A'$ und $b'$ ableiten.

>**WICHTIG**
>Manche linearen Gleichungssysteme haben keine Lösung
>Für solche Gleichungssysteme ist die [[Grundlegende Matrix Operationen#Determinante von Matrizen (siehe Addition)|Determinante]] der [[Koeffizienten-Matrix]] $\det(A)=0$

# Beispiel für das gaußsche Eliminationsverfahren
$$
A:= 
\begin{pmatrix} 
1 & 1 & 1 \\ 
4  & -1 & 4 \\ 
3 & 5 & -2 
\end{pmatrix} 
\hspace{1cm}
b := 
\begin{pmatrix} 
20 \\
5 \\ 
10
\end{pmatrix}
$$
$$
\left[
\begin{array}{ccc}
1 & 0 & 0        \\
-4 & 1 & 0         \\
-3 & 0 & 1
\end{array} 
\right] *
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
4 & -1 & 4 & 5 \\ 
3  & 5 & -2  & 10 
\end{array} 
\right]  = 

\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 2 & -5  & -50
\end{array} 
\right] 
$$
An diesem Punkt könnte man die Suche nach der Dreiecksmatrix beenden, da durch verschiedene Matrizenoperationen, wie Spalten oder Zeilenverschiebungen aus dieser Matrix bereits eine Dreiecksmatrix entsteht. 
Aus gründen der Beispielführung wird die Vorgehenswiese hier nicht abgebrochen sondern fortgeführt
$$
\left[
\begin{array}{ccc}
1 & 0 & 0        \\
0 & 1 & 0         \\
0 & 2 & 5
\end{array} 
\right]
*
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 2 & -5  & -50
\end{array} 
\right] 
 = 
\left[
\begin{array}{ccc|c}
1 & 1 & 1 & 20 \\
0 & -5 & 0 & -75 \\ 
0  & 0 & -25  & -400
\end{array} 
\right] 
$$

Mit dieser erweiterten Matrix können nun die Parameter bestimmt werden:
$$
-25 * x_3 = -400 \hspace{1cm} \Rightarrow x_3 = 16 \\
-5  * x_2 = -75  \hspace{1cm} \Rightarrow x_2 = 15 \\
x_1 + x_2 + x_3 = 20 \hspace{1cm} \Rightarrow x_1 = -11
$$

