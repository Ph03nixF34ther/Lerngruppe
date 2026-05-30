---
tags:
  - Rechnernetze
  - TODO
---
# Übersicht

Die Bitübertragungsschicht kann von Netzwerk zu Netzwerk variieren. Verschiedene Eigenschaften der physischen Ebene sind unter anderem Durchlass, Verzögerung und Fehlerrate

- Übertragung von Rohbits über einen Kanal
- Welcher Spannungspegel ist 0, welcher ist 1?
- Welchen Kanal, dh. welche Frequenz?
- Abtastrate / Timingfragen / Taktung
- [[Simplex Betriebsart|Simplex]], [[Halbduplex Betriebsart|Halbduplex]] [[Vollduplex Betriebsart|Duplex]]
- [[Stecker]] / Kabel

# Theoretische Analyse der Datenübermittlung

Informationen können über eine Leitung je nach physikalischen Eigenschaften per [[Elektrische Stromstärke|Strom]] oder [[Elektrische Spannung|Spannung]] übertragen werden.

Diese elektrischen Eigenschaften können dann als Funktion mit einem Parameter (der Zeit) $f(t)$ interpretiert werden.

Da Kupferkabel und generell längere Kabel als Tiefpass fungieren werden hohe Frequenzen abgeschnitten, wodurch das Signal verzerrt wird. 
Wenn nicht alle gesendeten Frequenzen (siehe [[Fourier Analyse]]) beim Empfänger ankommen ist das Signal teilweise verzerrt.

>[!Important] Bandbreite
>Die Breite des Frequenzbereiches, welcher übertragen werden kann ohne stark verzerrt zu werden nennt man [[Bandbreite]].
>Da die Signalstärke bei einer bestimmten Frequenz nicht plötzlich abfällt, sondern der Verlauf abgeflacht ist, spricht man von der Grenzfrequenz $f_{g}$ wenn in dieser Frequenz nur noch die Hälfte der gesendeten Leistung ankommt. 

Die Bandbreite ist physisch durch das Kommunikationsmedium festgelegt (siehe auch [[Stecker|Kabel und Stecker]]. Verschiedene Anwendungsfälle nutzen unterschiedliche Bandbereiche.y

# Drei Arten von Übertragungsmedien

# Digitale Modulation

>[!Info] Womit beschäftigt sich digitale Modulation?
>Digitale Modulation beschäftigt sich mit der Frage, wie können analoge Daten in digitale Daten und zurück gewandelt werden.

# Drei Beispiele für Kommunikationsnetzwerke in der Praxis