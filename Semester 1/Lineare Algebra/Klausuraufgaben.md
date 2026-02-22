# 1. Man zerlege folgende Matrix A in die Form A=T*D*T^{-1}:

$$
A = 
\begin{bmatrix}
1 & 2 & 0 \\
2 & 3 & 2 \\
0 & 2 & 1
\end{bmatrix}
$$

1. Schritt: Das [[Charakteristische Polynome]] der Matrix $A$ bilden durch $\det(I\cdot x-A)$

$$
I\cdot x-A =
\begin{bmatrix}
x-1 & -2 & 0 \\
-2 & x-3 & -2 \\
0 & -2 & -1
\end{bmatrix}
$$
$$
\det(I\cdot x -A)= x^3 -5\cdot x^2 -x+5
$$

2. Die Nullstellen dieses [[Charakteristische Polynome|Charakteristischen Polynoms]] sind die [[Eigenwerte und Eigenvektoren|Eigenwerte]]. Diese werden in die Matrix $D$ auf der Hauptdiagonalen geschrieben

$$
p(x)=x^3-5\cdot x^2 -x +5
$$
$$
p(x)= 0 \to x_{1}=5; x_{2}=1; x_{3}=-1
$$
$$
D = 
\begin{bmatrix}
5 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & -1
\end{bmatrix}
$$

3. Jetzt wird die Matrix $T$ gebildet. Sie setzt sich aus den [[Eigenwerte und Eigenvektoren|Eigenvektoren]] der Matrix $A$ zusammen.

$$
T=
\begin{bmatrix}
1 & -1 & 1 \\
2 & 0 & -1 \\
1 & 1 & 1
\end{bmatrix}
$$

5. Zu Letzt die Inverse der Matrix $T$ Berechnen und $T\cdot D\cdot t^-1 = A$ notieren.

---

# 2. Die Wurzel / Die Potenz usw. einer Matrix Bilden

1. Die Hauptachsen Transformation bilden. Siehe [[Klausuraufgaben#1.Man zerlege folgende Matrix A in die Form A=T*D*T {-1}|1. Aufgabe]]. 
2. Mit den [[Eigenwerte und Eigenvektoren|Eigenwerten]] aus der Matrix $D$ die gewünschte Operation durchführen. zum Beispiel aus jedem Wert die Wurzel ziehen, oder jeden Wert ins Quadrat rechnen.
3. $T\cdot \sqrt{D} \cdot T^-1$ berechnen und als $T\cdot \sqrt{D} \cdot T^-1= \sqrt{ A }$ notieren.

---

# 3. Man bestimme das Exponential von A mittels Interpolation

1. Die [[Eigenwerte und Eigenvektoren|Eigenwerte]] der Matrix $A$ mit dem [[Charakteristische Polynome|Charakteristischem Polynom]] bestimmen. Siehe [[Klausuraufgaben#1.Man zerlege folgende Matrix A in die Form A=T*D*T {-1}|1.Aufgabe]].

$$
A = 
\begin{bmatrix}
1 & 2 & 0 \\
2 & 3 & 2 \\
0 & 2 & 1
\end{bmatrix}; Eigenwert: 5; 1; -1
$$

2. Diese [[Eigenwerte und Eigenvektoren|Eigenwerte]] werden in die Transponierte [[Vandermonde-Matrix]] $V$ eingesetzt. 

$$
V = 
\begin{bmatrix}
5^0 & 5^1 & 5^2 \\
1^0 & 1^1 & 1^2 \\
-1^0 & -1^1 & -1^2
\end{bmatrix}
$$

3. In einen Vektor $b$ wird das Exponential der einzelnen [[Eigenwerte und Eigenvektoren|Eigenwerte]] berechnet

$$
b =
\begin{bmatrix}
e^5 \\
e^1 \\
e^{-1}
\end{bmatrix}
= 
\begin{bmatrix}
148,413 \\
2,718 \\
0,368
\end{bmatrix}
$$

4. Im nächsten Schritt werden die Inverse von $V$ mit $b$ multipliziert und in $v$ gespeichert.

$$
V^{-1} \cdot b= v =
\begin{bmatrix}
-4,332 \\
1,175 \\
5,875
\end{bmatrix} 
$$

5. Im Letzten Schritt werden die einzelnen Werte von Oben nach unten mit der Matrix $A$ multipliziert und anschließend addiert. Dabei wird $A$ von $0$ Aufsteigend Potenziert.

$$
v_{0} \cdot A^0 + v_{1}\cdot A^1 + v_{2}\cdot A^2
$$

Dabei ist $A^0$ die Einheitsmatrix und $A^1$ Die Matrix $A$

$$
-4,332\cdot 
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{bmatrix}
+ 1,175\cdot
\begin{bmatrix}
1 & 2 & 0 \\
2 & 3 & 1 \\
0 & 2 & 1
\end{bmatrix}
+ 5,875\cdot
\begin{bmatrix}
5 & 8 & 4 \\
8 & 17 & 8 \\
4 & 8 & 5
\end{bmatrix}
$$

Die Matrix, die diese Rechnung liefert ist das Exponential von $A$.

---

# 4. Man bestimme die ersten drei Orthonormalpolynome für Folgendes Skalarprodukt

1. Das Skalarprodukt wird Vorgegeben. In diesem Beispiel lautet es:

$$
\int_{1} ^2 p(x)\cdot q(x) dx
$$

2. Da die ersten drei Orthonormalpolynome gefordert sind, werden für die Funktionen jeweils ein Zähler von 0 bis 2 erstellt. Sollten die ersten vier gefordert sein würden diese bis 3 gehen.

$$
i = 0..2; j=0..2
$$

3. Nun wird [[Die Cramersche Regel|die Cramersche Regel]] $G_{i,j}$ gebildet. Dafür werden die einzelnen Eintrage mit den Ergebnissen des Integrals gefüllt. Dabei wird $p(x)$ zu $x^i$ und $q(x)$ zu $x^j$.

$$
\int_{1}^2 x^i\cdot x^j dx
$$
$$
G_{i,j}=
\begin{bmatrix}
\int_{1}^2 x^0\cdot x^0 dx & \int_{1}^2 x^0\cdot x^1 dx & \int_{1}^2 x^0\cdot x^2 dx \\
\int_{1}^2 x^1\cdot x^0 dx & \int_{1}^2 x^1\cdot x^1 dx & \int_{1}^2 x^1\cdot x^2 dx \\
\int_{1}^2 x^2\cdot x^0 dx & \int_{1}^2 x^2\cdot x^1 dx & \int_{1}^2 x^2\cdot x^2 dx
\end{bmatrix}
= 
\begin{bmatrix}
1 & \frac{3}{2} & \frac{7}{3} \\
\frac{3}{2} & \frac{7}{3} & \frac{15}{4} \\
\frac{7}{3} & \frac{15}{4} & \frac{31}{5}
\end{bmatrix}
$$

4. Die Matrix $R$ wird von dieser Matrix mit der [[Cholesky-Zerlegung]] erstellt.

$$
R = 
\begin{bmatrix}
1 & 0 & 0 \\
\frac{3}{2} & \frac{\sqrt{ 3 }}{6} & 0 \\
\frac{7}{3} & \frac{\sqrt{ 3 }}{2} & \frac{\sqrt{ 5 }}{30}
\end{bmatrix}
$$

5. Im letzten Schritt wird die Inverse von $R$ mit einem Vektor, der mit den einzelnen Potenzen von x gefüllt ist, multipliziert. Die einzelnen Werte des Ergebnisvektors sind die Lösungen.

$$
R^{-1} \cdot
\begin{bmatrix}
x^0 \\
x^1 \\
x^2
\end{bmatrix}
= 
\begin{bmatrix}
1 \\
\sqrt{ 3 }\cdot(2\cdot x-3) \\
\sqrt{ 5 }\cdot (6\cdot x^2-18 \cdot x+13)
\end{bmatrix}
$$

Die Orthonormalpolynome sind dementsprechend: 

$$1: 1 $$
$$2:\sqrt{ 3 }\cdot(2\cdot x-3)$$  
$$3:\sqrt{ 5 }\cdot (6\cdot x^2-18 \cdot x+13) $$

---

# 5. Man bestimme die Euklidisch kürzeste Lösung von folgendem unterbestimmten LGS

$$
3\cdot x + 5\cdot y - 4\cdot z ＝5
$$
$$
5\cdot x + 4\cdot y - 3\cdot z＝10
$$

1. Zuerst wird die Matrix $M$ und der Vektor $b$ aus den beiden Gleichungen gebildet

$$
M =
\begin{bmatrix}
3 & 5 & -4 \\
5 & 4 & -3
\end{bmatrix}; 
b=
\begin{bmatrix}
5 \\
10
\end{bmatrix}
$$

$$
\begin{bmatrix}
3 & 5 & -4 \\
5 & 4 & -3
\end{bmatrix}
\cdot
\begin{bmatrix}
x \\
y \\
z
\end{bmatrix}
=
\begin{bmatrix}
5 \\
10
\end{bmatrix}
$$

2. Man sucht sich eine beliebige Variable aus und addiert diese für sich

$$
\begin{bmatrix}
3 & 5 \\
5 & 4
\end{bmatrix}
\cdot
\begin{bmatrix}
x \\
y
\end{bmatrix}
-
\begin{bmatrix}
4 \\
3
\end{bmatrix}
\cdot z = b
$$

3. Nun wird es umgestellt, damit nach x und y aufgelöst werden kann

$$
\begin{bmatrix}
3 & 5 \\
5 & 4
\end{bmatrix}
\cdot
\begin{bmatrix}
x \\
y
\end{bmatrix}
= b + 
\begin{bmatrix}
4 \\
3
\end{bmatrix} 
\cdot z
$$

4. Beide Seiten werden mit der Inversen der Quadratischen Matrix Multipliziert. Auf der Linken Seite bleibt die Einheitsmatrix übrig und die Rechte Seite ist die Lösung

$$
\begin{bmatrix}
x \\
y
\end{bmatrix}
= 
\begin{bmatrix}
3 & 5 \\
5 & 4
\end{bmatrix}^{-1}\cdot
(b + 
\begin{bmatrix}
4 \\
3
\end{bmatrix}\cdot z)
$$
$$
\begin{bmatrix}
x \\
y
\end{bmatrix}
= 
\begin{bmatrix}
\frac{30}{13} \\
-\frac{5}{13}
\end{bmatrix} +
\begin{bmatrix}
-\frac{1}{13} \\
\frac{11}{13}
\end{bmatrix}\cdot z
$$

5. Die Lösungen sind dementsprechend :

$x(z)= \frac{30}{13} - \frac{1}{13}\cdot z$
$y(z)=-\frac{5}{13}+\frac{11}{13}\cdot z$

6. Für den euklidisch Kürzeste Lösung wird der Lösungsvektor $v(z)$ gebildet

$$
v(z)=
\begin{bmatrix}
x(z) \\
y(z) \\
z
\end{bmatrix}
$$

7. Die Funktion $g(z)$ bilden um ein lokales Minimum zu finden. 

Kann mit euklidischen Länge $\left|\vec{v}(z)\right| = \sqrt{{x(z)}^2 + {y(z)}^2 + {z}^2}$ oder der Länge an sich $v(x)^T\cdot v(x) = {x(z)}^2 + {y(z)}^2 + {z}^2$ gemacht werden

$$
g(z) = v(x)^T\cdot v(x) = 
\frac{(11\cdot z-5)^2}{169}+\frac{(-z+30)^2}{169} +z^2
$$

8. Die Ableitung $dg(z)$ von $g(z)$ wird gebildet.

$$
dg(z) = 
\frac{582\cdot z-170}{169}
$$

9. Die Ableitung wird gleich Null gesetzt.

$$
dg(z) = 0
z= \frac{85}{291}
$$

10. Der Wert wird in $v(z)$ eingesetzt und Der Betrag des Vektors wird gebildet.

$$
|v\left( \frac{85}{291} \right)| = 2.308
$$

---

# 6. Man untersuche die kritischen Stellen von folgendem bivariaten Interpolationspolynom: Über folgenden Gitterpunkten haben wir folgenden Werteverlauf

(1,2),(1,4),(1,6) 
(2,2),(2,4),(2,6)        
(3,2),(3,4),(3,6)

$$
W = 
\begin{bmatrix}
1 & 1 & 1 \\
1 & 2 & 1 \\
1 & 1 & 1
\end{bmatrix}
$$

1. Aus den Gitterpunkten Lassen sich x und y werte entnehmen. Diese sind $x_{0} = 1$, $x_{1} = 2$, $x_{2} = 3$ und $y_{0} = 2$, $y_{1} = 4$, $y_{2} = 6$. Mit diesen Werten werden zwei [[Vandermonde-Matrix|Vandermonde-Matrizen]] befüllt:
   $Vx$ und $Vy$ 

$$
Vx = 
\begin{bmatrix}
1 & 1 & 1 \\
1 & 2 & 4 \\
1 & 3 & 6
\end{bmatrix};
Vy=
\begin{bmatrix}
1 & 2 & 4 \\
1 & 4 & 16 \\
1 & 6 & 36
\end{bmatrix}
$$

2. Die Matrix $U$ wird gebildet als $U=Vx^{-1}\cdot W\cdot (Vy^{-1})^T$ 

$$
U = 
\begin{bmatrix}
10 & -6 & \frac{3}{4} \\
-12 & 8 & -1 \\
3 & -2 & \frac{1}{4}
\end{bmatrix}
$$

3. Es wird das Polynom $p(x,y)$ gesucht dieses Entsteht aus $p(x,y)= [1, x, x^2]\cdot U\cdot \begin{bmatrix}1 \\ y \\ y^2\end{bmatrix}$.
4. Nun wird $p(x,y)$ nach $x$ und $y$ einzeln abgeleitet

$$
p(x,y) = \begin{bmatrix}
1 & x & x^2
\end{bmatrix}\cdot U\cdot \begin{bmatrix}1 \\ y \\ y^2\end{bmatrix}
$$
$$
\frac{d}{dx}\cdot p(x,y)=
\begin{bmatrix}
0 & 1 & 2\cdot x
\end{bmatrix}\cdot U\cdot
\begin{bmatrix}
1 \\
y \\
y^2
\end{bmatrix}
$$
$$
\frac{d}{dy}\cdot p(x,y)=
\begin{bmatrix}
1 & x & x^2
\end{bmatrix}\cdot U\cdot
\begin{bmatrix}
0 \\
1 \\
2\cdot y
\end{bmatrix}
$$

5. Die Ergebnisse der Beiden Gleichungen werden in den Vektor $\nabla$ geschrieben. 

$$
\nabla (x,y)=
\begin{bmatrix}
\frac{y^2\cdot (x-2)+y\cdot(16-8\cdot x)+(12\cdot x-24)}{2} \\
\frac{y\cdot(x^2-4\cdot x+3)+(16\cdot x-4\cdot x^2-12)}{2}
\end{bmatrix}
$$

6. Nun wird der Vektor Gleich Null gesetzt. Der untere Teil wird null für 

$$
y(x)=\frac{-(16\cdot x-4\cdot x^2-12)}{(x^2-4\cdot x+3)}
$$

Gibt man diesen in in den Vektor $\nabla$ ein erhält man

$$
\nabla(x,y(x)) =
\begin{bmatrix}
-(2\cdot x)+4\\
0
\end{bmatrix}
$$

Daraus lässt sich schließen, dass die Stelle (2,4) für $p(x,y)$ kritisch ist, da, wenn diese Zahlen eingesetzt werden, der obere Werte ebenfalls null wird.

7. Nun wird die [[Hesse-Matrix]] $H(x,y)$ mit allen möglichen zweiten Ableitungs-Kombinationen gebildet:

$$
H(x,y)= 
\begin{bmatrix}
\frac{d}{dx} \frac{d}{dx}p(x,y) & \frac{d}{dy} \frac{d}{dx} p(x,y) \\
\frac{d}{dx} \frac{d}{dy}p(x,y) & \frac{d}{dy} \frac{d}{dy}p(x,y)
\end{bmatrix}
$$

8. Mit den Werten eingesetzt, ergibt sich

$$
H(2,4)=
\begin{bmatrix}
-2 & 0 \\
0 & -0,5
\end{bmatrix}
$$

9. Da alle Werte negativ sind, ist die kritische Stelle ein lokales Maximum.

---

# 7. Man berechne den Funktionswert an der Stelle i für folgende rationale Funktion

$$
h(z)=
\begin{bmatrix}
1 & 0 & 0
\end{bmatrix}\cdot 
\left(
z\cdot I-
\begin{bmatrix}
0 & 1 & 1 \\
0 & 0 & 1 \\
0 & 0 & 0
\end{bmatrix}
\right)^{-1}\cdot
\begin{bmatrix}
0 \\
1 \\
0
\end{bmatrix}
$$

1. Zuerst nimmt man sich den Mittleren Teil, ohne die Inverse. Die Überlegung ist, dass dieser Teil, mit einem Vektor $v$ multipliziert, den hinteren Vektor ergeben soll

$$
\begin{bmatrix}
z & -1 & -1 \\
0 & z & -1 \\
0 & 0 & z
\end{bmatrix} \cdot v =
\begin{bmatrix}
0 \\
1 \\
0
\end{bmatrix}
$$

2. Diese Gleichung wird mit der [[Die Cramersche Regel|Cramerschen Regel]] gelöst. Der erste Vektor gibt an, dass nur die erste Spalte ersetzt werden muss.

$$
f(z)=\frac{
\det
\begin{bmatrix} 
0 & -1 & -1 \\
1 & z & -1 \\
0 & 0 & z
\end{bmatrix}
}{\det
\begin{bmatrix}
z & -1 & -1 \\
0 & z & -1 \\
0 & 0 & z
\end{bmatrix}}= \frac{z}{z^3}= \frac{1}{z^2}
$$

3. An der stelle $z = 1\mathrm{i}$ ergibt sich der Wert:

$$
h(z)= \frac{1}{-1}=-1
$$

4. Alternativ kann die Inverse bestimmt und mit den beiden Vektoren multipliziert werden. Daraus ergibt sich ebenfalls $\dfrac{1}{z^2}$

$$
\begin{bmatrix}
z & -1 & -1 \\
0 & z & -1 \\
0 & 0 & z
\end{bmatrix}^{-1}= 
\begin{bmatrix}
\frac{1}{z} & \frac{1}{ z^2} & \frac{z+1}{z^3} \\
0 & \frac{1}{z} & \frac{1}{z^2} \\
0 & 0 & \frac{1}{z}
\end{bmatrix}
$$
$$
 \begin{bmatrix}
1 & 0  & 0
\end{bmatrix}\cdot
\begin{bmatrix}
\frac{1}{z} & \frac{1}{ z^2} & \frac{z+1}{z^3} \\
0 & \frac{1}{z} & \frac{1}{z^2} \\
0 & 0 & \frac{1}{z}
\end{bmatrix}\cdot
\begin{bmatrix}
0 \\
1 \\
0
\end{bmatrix}=\frac{1}{z^2}
$$

---

# 8. Man approximiere über dem Intervall [1,3] das Monomial x^3 durch ein Polynom 2. Grades im quadratischen Mittel

1. Zuerst werden zwei Zählvariablen $i$ und $j$ festgelegt, die von 0 bis zwei jeweils Zählen sollen.

$$
i= 0..2; j=0..2
$$

2. Das Integral soll die Grenzen 1 bis 3 haben. Daraus ergibt sich folgendes:

$$
\int_{1}^3 x^i\cdot x^jdx
$$

3. Nun wird Die Gramersche Matrix $G_{i,j}$ gebildet. Siehe Aufgabe 4 Teil 3
4. Mit der Matrix $G_{i,j}$ wird die Matrix $R$ durch die [[Cholesky-Zerlegung]] gebildet. Siehe Aufgabe 4 Teil 4
5. Nun wir der Vektor $v(x)$ aus der Inverse von $R$ und den einzelnen Gewichten von $x$ gebildet

$$
v(x) = R^{-1}\cdot \begin{bmatrix}
1 \\
x \\
x^2
\end{bmatrix}
$$

6. Im nächsten Schritt wird der Vektor $g_{i}$ gebildet, dafür werden die einzelnen Werte von $v$, von oben nach unten, jeweils in das folgende Integral eingesetzt

$$
g_{i}= 
\int_{1}^3 v(x)_{i}\cdot x^3dx
$$

Die Drei einzelnen werte sind die einzelnen Ergebnisse von $g_{i}$ 

7. Im letzten Schritt wird das Polynom $p(x)$ gebildet durch:

$$
p(x)= g^T\cdot v(x)
$$

8. Dieses Polynom ist die gesuchte Lösung

---

# Teilchen Auf einer Kreisbahn

$x(t)$ beschreibt einen Kreis $K$. Zum Zeitpunkt Null $x(0)$ ist das Teilchen $T$ am Punkt $b$

$$
x(t)= A \cdot t
$$
$$
A = 
\begin{bmatrix}
0 & 3 & 0 \\
-3 & 0 & 4 \\
0 & -4 & 0
\end{bmatrix}
$$
$$
b=
\begin{bmatrix}
1 \\
4 \\
2
\end{bmatrix}
$$

## Teilaufgaben:

### 1. Geben Sie x(t) an:

Mit der [[Formel von Rodrigues]]:

$a$ ergibt sich aus den Werten von der Matrix $A$:

$$
a= \sqrt{ 3^2+4^2 } = 5
$$

Mit den Vektoren $b$, $A \cdot b$, $A^2 \cdot b$ lässt sich $x(t)$ beschreiben:

$$
b= 
\begin{bmatrix}
1 \\
4 \\
2
\end{bmatrix};
A\cdot b=
\begin{bmatrix}
12 \\
5 \\
-16
\end{bmatrix};
A^2\cdot b=
\begin{bmatrix}
15 \\
-100 \\
-20
\end{bmatrix}
$$

$$
x(t)= b+(A\cdot b)\cdot \frac{\sin(a\cdot t)}{a}+(A^2\cdot b)\cdot\frac{1-\cos(a\cdot t)}{25}
$$
$$
x(t)= 
\begin{bmatrix}
1 \\
4 \\
2
\end{bmatrix}+
\begin{bmatrix}
12 \\
5 \\
-16
\end{bmatrix}\cdot
\frac{\sin(5\cdot t)}{5}+
\begin{bmatrix}
15 \\
-100 \\
-20
\end{bmatrix}\cdot \frac{1-\cos(5\cdot t)}{a^2}
$$

### 2. Drehachse:

Der Vektor $w$ ergibt sich aus den Einträgen der Matrix $A$:

$$
w= 
\begin{bmatrix}
4 \\
0 \\
3
\end{bmatrix}
$$

### 3. Ebene:

Die Ebene, auf der der Kreis $K$ liegt, ergibt sich aus $x(t)$:

$$
E(s,t)= 
\begin{bmatrix}
1 \\
4 \\
2
\end{bmatrix}+
\begin{bmatrix}
12 \\
5 \\
-16
\end{bmatrix}\cdot
s
\begin{bmatrix}
15 \\
-100 \\
-20
\end{bmatrix}\cdot t
$$

### 4. Mittelpunkt 

Der Mittelpunkt $M$ ergibt sich aus der Drehachse $w$ und dem Vektor $b$ 

$$
M=\frac{w\cdot b}{w\cdot w}\cdot w
$$

### 5. Radius

Der Radius $r$ ist der Betrag der Differenz vom Mittelpunkt $M$ und dem Vektor $b$:

$$
r=|M-b|
$$

### 6. Geschwindigkeit:

Die Geschwindigkeit $v(t)$ ist der Betrag von dem Produkt der Matrix $A$ und $x(t)$ oder von dem Produkt der Matrix $A$ und $b$ 

$$
v(t)= |A\cdot x(t)|=|A\cdot b|
$$

### 7. Abstand zum Koordinatenursprung:

Der Abstand $s$ ergibt sich aus dem Betrag von $x(t)$ oder $b$:

$$
s= |x(t)|=|b|
$$

### 8. Beschleunigung des Teilchens T

Die Beschleunigung $va$ ergibt sich aus dem Betrag von $A^2\cdot b$

$$
va= |A^2\cdot b|
$$
