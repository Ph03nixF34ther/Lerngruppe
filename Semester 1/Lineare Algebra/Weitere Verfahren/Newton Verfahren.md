Das Newton-Verfahren, auch bekannt als Newton-Raphson-Verfahren, ist eine iterative Methode zur Annäherung an die Nullstellen einer Funktion. Es basiert auf der Idee, dass die Funktion in der Nähe der Nullstelle durch ihre Tangente approximiert werden kann. Zum Verständnis hilft die folgende Grafik

![[NewtonVerfahren.png]] 

Der iterative Schritt lautet:

$$
x_{n+1}=x_n-\frac{f(x_n)}{f'(x_n)}
$$
Hier ist $f(x)$ die Funktion und $f'(x)$ ihre Ableitung. Der Startwert $x_n$ wird vorgegeben oder durch ausprobieren ermittelt und die Iteration wird solange durchgeführt, bis die Nullstelle mit ausreichender Genauigkeit gefunden wurde.

In Wortlauten passiert folgendes:
1) Ein zufällig gewählter Startwert $x_n$ wird durch Zufall bestimmt.
2) An dieser Stelle $x_n$ (Startwert) wird die Ableitung der Funktion gebildet.
3) Dadurch entsteht an dieser Stelle eine Tangente, welche die Steigung an diesem Punkt hat.
4) Der Schnittpunkt dieser Tangente mit der x-Achse ist unser neuer Startwert.
5) Dies kann nun so oft wiederholt werden, bis der Wert eine gewünschte Genauigkeit hat.

Ergebnisse:
- Hat eine Funktion mehrere Nullstellen können diese durch Variation des Startwertes errechnet werden. 
- Hat eine Funktion keine Nullstellen schwankt das Ergebnis sehr stark und nährt sich keinem konkretem Wert an.
- Hat die Funktion eine Nullstelle und der Wert schwankt trotzdem ziemlich stark ist der Startwert ungünstig gewählt.