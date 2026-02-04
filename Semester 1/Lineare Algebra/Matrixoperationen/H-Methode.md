Die H-Methode ist eine Methode der Differentialrechnung. Mit welcher die Ableitungsfunktion von einer Funktion f(x) hergeleitet werden kann. 
Dabei ist diese nur eine andere Interpretation des Differentialquotienten:

$$f'(x) = \lim_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0} $$
Dieser bestimmt die Steigung der Tangente von f(x) an der Stelle x_0, also f'(x_0). 
Dabei nähert sich der Punkt x immer näher an den Punkt x_0 an. Zwischen diesen beiden Punkten liegt eine Sekante, die sich der Tangente immer weiter annähert, bis die Punkte identisch sind.

![[Pasted image 20260204155801.png]]
Also schrumpft der Abstand zwischen x und x_0 immer weiter.
Dieser Abstand wird dann bei der H-Methode als h zusammengefasst. 
$$h = x - x_0 $$
Diesen lässt man dann im Limens nur noch gegen Null laufen. 
$$ f'(x_0) = \lim_{x \to x_0} \frac{f(x) - f(x_0)}{h} $$
Jetzt löst man die Gleichung noch nach x auf und ersetzt x dann.
$$ x = h + x_0 $$
$$  f'(x_0) = \lim_{x \to x_0} \frac{f(h + x_0) - f(x_0)}{h} $$

Beispiel:

$$ f(x) = x^2 $$
$$ f'(x) = \lim_{h \to 0} \frac{f(x+h) - f(x)}{h} = \lim_{h \to 0} \frac{(x+h)^2 - x^2}{h} $$
$$ = \lim_{h \to 0} \frac{x^2 + 2xh + h^2 - x^2}{h} = \lim_{h \to 0} \frac{2xh + h^2}{h} $$
$$ = \lim_{h \to 0} \frac{h ( 2x +h )}{h} = \lim_{h \to 0} 2x + h $$
mit h gegen null ergibt:
$$ f'(x) = 2x $$
