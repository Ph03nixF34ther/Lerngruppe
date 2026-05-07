# Wichtigste Punkte für Netzwerkprotokolldesign

- Zuverlässigkeit: Redundanz
- Routing
- Resourcenzuweisung
- Anpassbarkeit / Protocol Stack
- Adressierung
- Inter-Networking
- Skalierbarkeit
- Sicherheit / Schutz

MTU = Maximum Transmition Unit

# Netzwerkschichten

- Devide and Conquer
- Abstraktionsmodell
- Beim Austausch einer Schicht muss nicht die gesamte Kommunikation getauscht werden, sondern nur die Schicht und ihre Schnittstellen

- Netzwerksoftware ist sehr strukturiert
- Reduktion der Komplexität durch aufteilung Schichten bieten Dienste an und abstrahieren / schirmen von der Umsetzung ab
- Schichten reden über Protokolle

- Kommunikation über die Interfaces möglichst minimieren

>**Modell**
>Abstrakte Darstellung der grundlegenden Zusammenhänge ein Netzwerk betreffen

>**Architektur**
>Ein Satz von Schichten und Protokollen wird als Netzarchitektur bezeichnet

# Beispiel: Kommunikation zweier Peers

