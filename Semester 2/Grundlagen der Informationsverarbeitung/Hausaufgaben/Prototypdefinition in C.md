# Überblick 

Es soll die Prototypdefinition in C mithilfe einer Chompsky-Grammatik in der Bakus Nauer Form definiert werden.

Ein Beispiel für die gesuchte Gramatik ist:

```C
int fac (int n);
````

# Aufbauanalyse

Das Startsymbol erscheint wie folgt:
```Gramatik
<Prototyp> ::= <Rückgabetyp> <Bezeichner> ( <Parameterreihe> ) ;
````

Die Rückgabetypen können sein:

```Gramatik
<Rückgabetyp> ::= void | <Datentyp>
<Datentyp> ::= int | double | char | ...
````

Für die Bezeichnung der Funktion gilt die Regel, sie muss mit einem Buchstaben beginnen. Es dürfen sonst zahlen, Buchstaben und Unterstriche genutzt werden:

```Gramatik
<Bezeichner> ::= <Buchstabe> | <Buchstabe><Zeichenkette> | _<Zeichenkette>
<Zeichenkette> ::= <Zeichen> | <Zeichen><Zeichenkette>
<Zeichen> ::= <Buchstabe> | _ | <Zahl>
<Buchstabe> ::= a | b | ... | z | A | B | ... | Z
<Zahl> ::= 1 | 2 | ... | 0
````

Die Parameterkette besteht aus keinen Parametern oder einer Menge Parameter, die durch ein Komma getrennt werden

```Gramatik
<Parameterreihe> ::= <> | <Parameterkette>
<Parameterkette> ::= <Parmeter> | <Parameter>, <Parameterkette>
<Parameter> ::= <Datentyp> <Bezeichner>
````

