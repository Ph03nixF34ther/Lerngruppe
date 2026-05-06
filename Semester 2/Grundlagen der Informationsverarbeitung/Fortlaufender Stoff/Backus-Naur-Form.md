Wird genutzt, um die [[Syntax]] einer [[Programmiersprache]] zu beschreiben

Verwendet Ersetzungsregeln die eine linke und eine rechte Seite besitzen und in denen [[Terminalsymbol|Terminal]]- und [[Nichtterminalsymbol|Nichtterminalsymbole]] vorkommen

[[Nichtterminalsymbol|Nichtterminalsymbole]] werden in spitzen Klammern `<` und `>` eingeschlossen und stehen auf der linken Seite einer Regel
Auf der rechten Seite steht der Regel zur Bildung des [[Nichtterminalsymbol|Nichtterminalsymbols]] 
Die rechte und die linke Seite einer Regel wird durch `::=` getrennt
Gibt es für die rechte Seite Alternativen, werden sie durch einen senkrechten Strich `|` getrennt
Beispiel: Bildung eines Bezeichners

```
<Bezeichner> ::=<Zeichenkette>
<Zeichenkette> ::=<Zeichen>|<Zeichen><Zeichenkette>
<Zeichen> ::=<Buchstabe>|<Sonderzeichen>|<Ziffer>
<Buchstabe> ::=A|B|...|Z|a|b|...|z
<Ziffer> ::=1|2|3|4|5|6|7|8|9|0
<Sonderzeichen> ::=!|"|§|%|*|#|?|...
```

Symbole und Symbolfolgen, die weggelassen werden können, werden in eckige Klammern eingeschlossen

```
<Zeichenkette> ::=<Zeichen>[<Zeichenkette>]
```

Alternativen, aus denen eine ausgewählt und an der entsprechenden Stelle eingesetzt werden muss, werden in geschweifte Klammern eingeschlossen

```
<Ausdruck> ::=<Operand>{+|-|*|/}<Operand>
```

# Syntaxdiagramme

Kann auch leicht als Diagramm dargestellt werden

[[Terminalsymbol|Terminalsymbole]] werden in Kreise oder Ovale eingeschlossen
[[Nichtterminalsymbol|Nichtterminalsymbole]] werden in Rechtecke eingeschlossen
Ersetzungswege werden durch Pfeile dargestellt, mit Verzweigungen bei Alternativen
Beispiel:

![[Backus-Naur-Form.drawio.svg]]

