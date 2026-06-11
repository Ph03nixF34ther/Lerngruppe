# Prozesse ... 

- sind die aktiven Komponenten eines Systems
- können voneinander abhängen
- besitzt einen eigenen Adressraum
- verfügen über virtuellen Prozessen
- benutzen und benötigen Ressourcen
- haben einen Vaterprozess und ggf. Kindprozesse 

# Prozesse werde erzeugt für ...

- Benutzeranfragen
- Hintergrundprozesse (Deamons)
- Systemaufruf eines bestehenden Prozesses
- Initiierung eines Batch-Jobs

# Prozesse werden terminiert ...

## Freiwillig

- Exit-Schlüsselwort
- Fehler innerhalb des Prozesses

## Unfreiwillig

- Schwerwiegende Fehler 
- Durch andere Prozesse (kill)
-> Reaktion des Prozesses auf Ereignisse Mögliche 

# Lebenszyklus von Prozessen

- Prozesse haben einen vorgegebenen Lebenszyklus
	- Erzeugung
	- Abarbeitung
	- Beendigung


# Prozesszustände 

Dabei haben Prozesse immer einen der folgenden Zustände:

- aktiv: besitz alle Ressourcen und CPU und wird abgearbeitet
- bereit: besitzt nicht die CPU, aber alle notwendigen Ressourcen
- wartende: wartend auf Zuteilung einer Ressource, keine CPU
