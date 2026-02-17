
### Aufgab 1
Ausmultiplizieren:
$$
p(x)=(x-1)\cdot(x-4)\cdot(x-9)
$$
$$
\to p(x)=(x ^2-4x-1x+4)\cdot(x-9)
$$
$$
\to p(x)=(x ^2-5x+4)\cdot(x-9)
$$
$$
\to p(x)=x ^3-9x ^2-5x ^2 +45x+4x-36
$$
$$
\to p(x)=x ^3-14x ^2 +49x-36
$$
Bgleitmatrix bilden:
$$
Cp=
\begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
36 & -49 & 14
\end{bmatrix}
$$
Hauptachsentransformation $VDV ^{-1}$
Berechnen von D mithilfe der Eigenwerten:
$$
\text{Regel:}\;\;\; \det(Cp-x\cdot I)=0
$$
$$
x\cdot
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{bmatrix}
=
\begin{bmatrix}
x & 0 & 0 \\
0 & x & 0 \\
0 & 0 & x
\end{bmatrix}
$$
$$
\begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
36 & -49 & 14
\end{bmatrix}
-
\begin{bmatrix}
x & 0 & 0 \\
0 & x & 0 \\
0 & 0 & x
\end{bmatrix}
=
\begin{bmatrix}
-x & 1 & 0 \\
0 & -x & 1 \\
36 & -49 & -x+14
\end{bmatrix}
$$
$$
\det
\left(
\begin{bmatrix}
0 & -x & 0 \\
0 & 0 & -x \\
-36x & 49x & -14x
\end{bmatrix}
\right)
=
-x ^3+14x ^2-49x+36
=
0
$$
$$
-x ^3+14x ^2-49x+36=0 \to (1,4,9)
$$
$$
D=
\begin{bmatrix}
1 & 	0 & 0 \\
0 & 4 & 0 \\
0 & 0 & 9
\end{bmatrix}
$$
Berechnen von V mithilfe der Eigenvektoren:
$$
\text{Regel:}\;\;\; (Cp-Eigenwert_{n}\cdot I)\cdot v=0
$$
$$
\text{Eigenwerte siehe oben (1, 4, 9)}
$$
$$
\begin{bmatrix}
0-1 & 1 & 0 \\
0 & 0-1 & 1 \\
36 & -49 & 14-1
\end{bmatrix}
\cdot v_{0}=
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
\to
v_{0}=
\begin{bmatrix}
1 \\
1 \\
1
\end{bmatrix}
$$
$$
\begin{bmatrix}
0-4 & 1 & 0 \\
0 & 0-4 & 1 \\
36 & -49 & 14-4
\end{bmatrix}
\cdot v_{1}=
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
\to
v_{1}=
\begin{bmatrix}
\frac{1}{16} \\
\frac{1}{4} \\
1
\end{bmatrix}
$$
$$
\begin{bmatrix}
0-9 & 1 & 0 \\
0 & 0-9 & 1 \\
36 & -49 & 14-9
\end{bmatrix}
\cdot v_{2}=
\begin{pmatrix}
0 \\
0 \\
0
\end{pmatrix}
\to
v_{2}=
\begin{bmatrix}
\frac{1}{81} \\
\frac{1}{9} \\
1
\end{bmatrix}
$$
$$
\to V=
\underline{\underline{
\begin{bmatrix}
1 & \frac{1}{16} & \frac{1}{81} \\
1 & \frac{1}{4} & \frac{1}{9} \\
1 & 1 & 1
\end{bmatrix}}}
$$
Kontrolle:
$$
V\cdot D\cdot V ^{-1}=
\begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
36 & -49 & 14
\end{bmatrix}
= Cp
\to \text{richtig}
$$
### Aufgabe 2
$$
A=
\begin{bmatrix}
0 & 3 & 0 \\
-3 & 0 & 4 \\
0 & -4 & 0
\end{bmatrix}
; \;\;\;\;
b=
\begin{bmatrix}
1 \\
0 \\
0
\end{bmatrix}
$$
$$
a=\sqrt{ 3 ^2+4^2 }=5
$$
$$
b=
\begin{bmatrix}
1 \\
0 \\
0
\end{bmatrix}; \;\;\;
A\cdot b=
\begin{bmatrix}
0 \\
-3 \\
0
\end{bmatrix}; \;\;\;
A ^2\cdot b=
\begin{bmatrix}
-9 \\
0 \\
12
\end{bmatrix}
$$
$$
x(t)=
\begin{bmatrix}
1 \\
0 \\
0
\end{bmatrix}
+
\begin{bmatrix}
0 \\
-3 \\
0
\end{bmatrix}
\cdot
\frac{\sin(5\cdot t)}{5}+
\begin{bmatrix}
-9 \\
0 \\
12
\end{bmatrix}
\cdot
\frac{1-\cos(5*t)}{25}
$$
$$
\text{Drehachse: } w=
\begin{bmatrix}
4 \\
0 \\
3
\end{bmatrix} \text{(Aus A abgelesen)}
$$
$$
\text{Mittelpunkt: }
M=\frac{w\cdot b}{w \cdot w}\cdot w =
\begin{bmatrix}
0,64 \\
0 \\
0,48
\end{bmatrix}
$$
$$
\text{Radius: } r=|M-b|=0,6
$$
$$
\text{Geschwindigkeit: }v=|A*b|=3
$$
$$
\text{Zum Zeiptunkt x(1): } x(1)=
\begin{bmatrix}
0,742 \\
0,575 \\
0,344
\end{bmatrix}
$$
$$
\text{Abstand Koordinaten Ursprung: } d=|b|=1
$$
$$
\text{Ebene: } E(s,t)=
\begin{bmatrix}
1 \\
0 \\
0
\end{bmatrix}
+
\begin{bmatrix}
0 \\
-3 \\
0
\end{bmatrix}
\cdot
s+
\begin{bmatrix}
-9 \\
0 \\
12
\end{bmatrix}
\cdot
t
$$
### Aufgabe 5
$$
x_{i}=\frac{\det(A_{i})}{\det(A)};\;\;\;\;\;A(s,t)=
\begin{bmatrix}
s & t & 0 \\
t & 1 & 1 \\
0 & 1 & s
\end{bmatrix} \;\;\;\;\;
b=
\begin{bmatrix}
0 \\
1 \\
0
\end{bmatrix}
$$
$$
D=\det(A(s,t))=-(s\cdot t ^2)+(s ^2-s)
$$
$$
D_{1}=\det
\left(
\begin{bmatrix}
\overbrace{0} ^b & t & 0 \\
1 & 1 & 1 \\
0 & 1 & s
\end{bmatrix}
\right)=-(s\cdot t)
$$
$$
D_{2}=\det
\left(
\begin{bmatrix}
s & \overbrace{0} ^b & 0 \\
t & 1 & 1 \\
0 & 0 & s
\end{bmatrix}
\right)=s ^2
$$
$$
D_{3}=\det
\left(
\begin{bmatrix}
s & t & \overbrace{0} ^b\\
t & 1 & 1 \\
0 & 1 & 0
\end{bmatrix}
\right)=-s
$$
$$
\begin{bmatrix}
\frac{D_{1}}{D} \\
\frac{D_{2}}{D} \\
\frac{D_{3}}{D}
\end{bmatrix}=
\begin{bmatrix}
\frac{t}{t ^2+(1-s)}\to 0,5\\
\frac{-s}{t ^2+(1-s)} \\
\frac{1}{t ^2+(1-s)}\to 0,25 \\
\end{bmatrix}
$$
$$
I:\frac{t}{t ^2+(1-s)}=0,5
;\;\;\;\;\;\;
II:\frac{1}{t ^2+(1-s)}=0,25
$$
$$
\frac{I}{II}=\frac{t}{1}=\frac{0,5}{0,25} \to\;\;\; \underline{\underline{t=2}};\;\;\;\; \underline{\underline{s=1}}
$$
$$
\text{Kontrolle durch Einsetzen: } A(1,2)=
\begin{bmatrix}
1 & 2 & 0 \\
2 & 1 & 1 \\
0 & 1 & 1
\end{bmatrix}
\cdot
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix}
=
\begin{bmatrix}
0 \\
1 \\
0
\end{bmatrix}
\to
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix}
=
\begin{bmatrix}
0,5 \\
-0,25 \\
0,25
\end{bmatrix}
$$
