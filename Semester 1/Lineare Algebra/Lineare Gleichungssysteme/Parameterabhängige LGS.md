# Übersicht
In einem parameterabhängigen Gleichungssystem sind eine oder mehr Werte durch variablen ersetzt.
Diese können über die bisherigen Lösungsmethoden gelöst werden
([[Das gaußsche Eliminationsverfahren]], 
[[Der Gauß-Jordansche Algorithmus]],
[[Die Cramersche Regel]]). 

Beispiel:
$$
\begin{pmatrix}
p & 1 & 2 \\
1 & p & 3 \\
2  & 3 & 4
\end{pmatrix}

\cdot 
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix}
= 
\begin{pmatrix}
1 \\
3 \\
1
\end{pmatrix}
$$
Das Gleichungssystem und vor allem dessen Lösung ist abhängig vom Parameter $p$.
# Lösung parameterabhängiger Gleichungssysteme
Die Lösungen dieses Gleichungssystems sind selbst parameterabhängig. 
Zu den Aufgaben gibt es meist Vorgaben, wie das Ergebnis auszusehen hat. Daraus kann dann sowohl der Parameter, als auch die Lösung errechnet werden.
$$
A(p) = \left(\begin{array}{ccc} p & 1 & 2\\ 1 & p & 3\\ 2 & 3 & 4 \end{array}\right)
$$
$$
\vec{b} = \begin{pmatrix}
1 \\
3 \\
1 \\
\end{pmatrix}
$$
Dieses Gleichungssystem wird nun nach einer der bekannten Methoden gelöst
$$
\vec{x} = \left(\begin{array}{c} \frac{2\,p}{4\,p^2-13\,p+8}\\ \frac{9\,p-8}{4\,p^2-13\,p+8}\\ \frac{p^2-11\,p+8}{4\,p^2-13\,p+8} \end{array}\right)
$$
Wir wollen nun $p$ so lösen, dass $x_{0} = 1$ (z.B. weil das die Aufgabe ist). Das ist dann der Fall, wenn
$$
\frac{2\,p}{4\,p^2-13\,p+8} = 1
$$
Diese Gleichung hat zwei Lösungen:
$$
p_{0} \simeq 0.6439
$$
$$
p_{1} \simeq 3.1061
$$
Daraus ergeben sich zwei mögliche Lösungsvektoren $\vec{x}(p)$, bei denen $\vec{x}_{0} = 1$
$$
x_0 = 
\begin{pmatrix}
1.0001  \\
-1.7122  \\
1.0342
\end{pmatrix}
$$
$$
x_{1} = 
\begin{pmatrix}
1.0000  \\
3.2122  \\
-2.6592 \\
\end{pmatrix}
$$