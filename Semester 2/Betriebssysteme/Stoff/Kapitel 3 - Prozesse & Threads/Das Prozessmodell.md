# Allgemein

- konzeptionelles Modell, das den Umgang mit Parallelität vereinfacht
- erleichtert Beschreibung von Prozessen und deren Synchronisation
- hilft, sich  Abläufe innerhalb eines Systems darzustellen

# Einfaches Prozessmodell

```mermaid
graph LR
	A(Start) --> B(P1, P2, P3, P4, P5)
	B --> C(Prozessor)
	C --> D(Ende)
	C --> A
```



```mermaid
graph LR
	X:::hidden --"Start"--> A(Bereit)
	A --"Aktivierung"--> B(aktiv)
	B --"Ende"--> C:::hidden
	B --"Deaktivierung"--> A
	classDef hidden display:none;
```


```mermaid
graph LR
	A(aktiv)--"3"--> B(wartend)
	B--"4"--> C(bereit)
	C --"1"--> A
	A --"2"--> C
```

# Erweitertes Prozessmodell

```mermaid
graph LR
	A(neu)--"Start"--> B(bereit)
	B--"Aktivierung"--> C(aktiv)
	C--"Deaktivierung"--> B
	C--"Ende"--> D(beendet)
	C--"warten auf Ereignis"--> E(wartend)
	E--"Ereignis tritt ein"--> B
```
# Zustandsänderung

- ausführen
	bereit $\longrightarrow$ aktiv
- verdrängen
	aktiv $\longrightarrow$ bereit
- blockieren
	aktiv $\longrightarrow$ wartend
- aufwecken
	wartend $\longrightarrow$ bereit