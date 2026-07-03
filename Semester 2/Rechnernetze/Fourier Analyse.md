---
tags:
  - Elektronik
---
# Hintergrund

Im 19. Jahrhundert bewies der Französische Mathematiker Jean-Baptiste Fourier, dass jede periodische Funktion $g(t)$, mit der Periodendauer $T$ als konstruierte Summe einer (möglichst unendlichen) Nummer aus Sins und Kosinusfunktionen dargestellt werden kann:

$$
g(t) = \frac{1}{2} c + \sum_{n=1}^{\infty} a_{n} \cdot \sin(2\pi nft) + \sum_{n=1}^{\infty} b_{n} \cdot \cos(2\pi nft)
$$

Eine solche Funktion nennt man Fourierreihe.


$$
a_{n} = \frac{2}{T} \cdot \int_{0}^T g(t) \cdot \sin(2\pi nft)
$$
$$
b_{n} = \frac{2}{T} \cdot \int_{0}^T g(t) \cdot \cos(2\pi nft)
$$
$$
c = \frac{2}{T} \cdot \int_{0}^T g(t)
$$
