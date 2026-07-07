## Aufgabe

Man berechne das folgende Integral:

$$
I(x) = \int \frac{1}{3x^2 + 27} dx
$$
## Lösung

### Partialbruchzerlegung

$$
I(x) = \frac{1}{3} \cdot \int \frac{1}{x^2 + 9} dx
$$

Partialbruchzerlegung 

$$
\begin{array}{rl}
p(x) = & 1 \\
q(x) = & x^2+9 \\
dq(x) = & 2x
\end{array}
$$

$$
\frac{p(-3i)}{dq(-3i)} = \frac{i}{6}
$$
$$
\frac{p(3i)}{dq(3i)} = -\frac{i}{6}
$$
$$
\implies I(x) = \frac{1}{3} \cdot \int -\frac{i}{6\cdot(x-3i)} + \frac{i}{6\cdot(x+3i)}
$$
### Probe

$$
I(x) = \frac{1}{3} \cdot \int -\frac{i}{6\cdot(x-3i)} + \frac{i}{6\cdot(x+3i)} \cdot dx
$$
$$
I(x) = \frac{1}{3} \cdot \int -\frac{i \cdot(x+3i)}{6\cdot(x-3i)\cdot(x+3i)} +\frac{i \cdot(x-3i)}{6\cdot(x+3i)\cdot(x-3i)}\cdot dx
$$
$$
I(x) = \frac{1}{3} \cdot \int \frac{i \cdot(x-3i) - i \cdot(x+3i)}{6\cdot(x+3i)\cdot(x-3i)}\cdot dx
$$

$$
I(x) = \frac{1}{3} \cdot \int \frac{\cancel{ - ix } + 3 \cancel{ + ix } +3}{6 \cdot (x^2 + 9)}\cdot dx
$$
$$
I(x) = \frac{1}{3} \cdot \int \frac{\cancel{ 6 }}{\cancel{ 6 } \cdot (x^2 + 9)}\cdot dx = \boxed{ \frac{1}{3} \cdot \int \frac{1}{(x^2 + 9)}\cdot dx }
$$

### Integration

zunächst können wir den konstanten Vorfaktor $\frac{i}{6}$ vor das Integral ziehen

$$
I(x) = \frac{i}{18} \cdot \int -\frac{1}{(x-3i)} + \frac{1}{(x+3i)} \cdot dx
$$

Jetzt teilen wir das Integral an der Summe

$$
I(x) = \frac{i}{18} \cdot \left( -\int \frac{1}{(x-3i)} \cdot dx + \int \frac{1}{(x+3i)} \cdot dx \right)
$$

jetzt kann das eigentliche Integral gebildet werden

$$
\boxed{ I(x) = \frac{i}{18} \cdot \left(\ln(x+3i) -\ln(x-3i) \right) }
$$

## Probe
   
$$
I'(x) = \frac{i}{18} \cdot \frac{d}{dx}\left(\ln(x+3i) -\ln(x-3i) \right) 
$$
$$
I'(x) = \frac{i}{18} \cdot \left( \frac{d}{dx}(\ln(x+3i))  - \frac{d}{dx}(\ln(x-3i))) \right)
$$

$$
I'(x) = \frac{i}{18} \cdot \left( \frac{1}{x+3i} - \frac{1}{x-3i}\right)
$$
$$
I'(x) = \frac{i}{18} \cdot \left( \frac{\cancel{ x }-3i\cancel{ -x }-3i}{(x-3i)\cdot(x+3i)}\right)
$$

$$
I'(x) = \frac{-\cancel{ 6 }i \cdot i}{(x^2 + 9)\cdot \cancel{ 18 }^3} = \boxed{ \frac{1}{3x^2  +27} }
$$


# Bedeutung und Interpretation

Aus der Lehre der [[Komplexe Zahlen|komplexen Zahlen]] wissen wir, dass sich komplexe Zahlen über die [[Polar-Koordinaten-Form]] darstellen lassen und über die [[Eulersche Form]].

$$
re + im \cdot i
=
e^{\tan^{-1} (\frac{im}{re}) \cdot i} \cdot \sqrt{ im^2 + re^2}
$$

$$
\ln (e^{\tan^{-1} (\frac{im}{re}) \cdot i} \cdot \sqrt{ im^2 + re^2})
$$
$$
\tan^{-1} \left( \frac{im}{re} \right) \cdot i+ \ln(\sqrt{ im^2 + re^2})
$$

bei $\ln(x + 3i)$ gilt
$im = 3$
$re = x$

$$\tan^{-1} \left( \frac{3}{x}  \right) \cdot i+ \ln(\sqrt{ 9 + x^2})$$
bei $\ln(x - 3i)$ gilt
$im = -3$
$re = x$

$$\tan^{-1} \left( - \frac{3}{x}  \right) \cdot i+ \ln(\sqrt{ 9 + x^2})$$

der Arkustangens ist eine ungerade Funktion. es gilt: $f(-x) = -f(x)$. 
darum gilt:

$$-\tan^{-1} \left( \frac{3}{x}  \right) \cdot i+ \ln(\sqrt{ 9 + x^2})$$

dann ergibt sich für den Ausdruck:

$$
I(x) = \frac{i}{18} \cdot \left(\ln(x+3i) -\ln(x-3i) \right)
$$
$$
I(x) = \frac{i}{18} \cdot 
\left(
\left(
\tan^{-1} \left( \frac{3}{x}  \right) \cdot i 
+ \ln(\sqrt{ 9 + x^2}) 
\right) 
- \left( 
-\tan^{-1} \left( \frac{3}{x}  \right) \cdot i
+ \ln(\sqrt{ 9 + x^2}) 
\right) 
\right)
$$

jetzt fällt auf, dass beide Realteile der Funktion wegfallen:

$$
I(x) = \frac{i}{18} \cdot 
\left(
\tan^{-1} \left( \frac{3}{x}  \right) \cdot i 
\cancel{ + \ln(\sqrt{ 9 + x^2})  }
+\tan^{-1} \left( \frac{3}{x}  \right) \cdot i
\cancel{ - \ln(\sqrt{ 9 + x^2})  }
\right)
$$

$$
I(x) = \frac{i}{18} \cdot 
\left(
2 \cdot \tan^{-1} \left( \frac{3}{x}\right) \cdot i
\right)
$$

$$
I(x) = \frac{i^2}{9} \cdot 
\tan^{-1} \left( \frac{3}{x} \right)
$$
$$
I(x) = \frac{-\tan^{-1} \left( \dfrac{3}{x} \right)}{9}
$$