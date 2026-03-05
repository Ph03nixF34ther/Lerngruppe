# Die Formel
$$
e^{\theta U} = I + \sin\theta \, U + (1-\cos\theta) U^2
$$
# Herleitung der Formel von Rodrigues
Man kann die Exponenzialfunktion durch seine [[Taylorreihen|Taylorreihe]] darstellen.
Diese Darstellung setzt sich zusammen aus einer Taylorreihe die den Sinus ($\sin(\theta)$) darstellt und derjenigen Taylorreihe, die sich aus $1 - \cos(\theta)$ ergibt.
$$
e^{\theta U} = I + \theta U + \frac{\theta^2}{2!}U^2 + \frac{\theta^3}{3!}U^3 + \frac{\theta^4}{4!}U^4 + \cdots
$$
Sortiere gerade und ungerade Potenzen:
$$
e^{\theta U} = I + \left(\theta - \frac{\theta^3}{3!} + \frac{\theta^5}{5!} - \cdots \right) U + \left(\frac{\theta^2}{2!} - \frac{\theta^4}{4!} + \cdots \right) U^2.
$$
Die Reihen erkennt man als:
$$
\sin\theta = \theta - \frac{\theta^3}{3!} + \frac{\theta^5}{5!} - \cdots
$$
$$
1-\cos\theta = \frac{\theta^2}{2!} - \frac{\theta^4}{4!} + \cdots
$$
Damit erhält man:
$$
e^{\theta U} = I + \sin\theta \, U + (1-\cos\theta) U^2.
$$
Das ist die **Rodrigues-Formel (Matrixform)**.

---
## Rodrigues-Formel in Vektorform
Wendet man die Matrix auf einen Vektor $x$ an, erhält man:
$$
R_\theta(x) = x\cos\theta + (u \times x)\sin\theta + u(u\cdot x)(1-\cos\theta).
$$
Das ist die Rodrigues-Formel in Vektorform.
Sie beschreibt die Rotation von $x$ um die Achse $u$ mit Winkel $\theta$.