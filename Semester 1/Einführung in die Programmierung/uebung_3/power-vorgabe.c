// Potenz zweier ganzer Zahlen (a hoch n)
// Programm-Skelett zur Angabe
//
// Aufruf: power a n
//
// Klaus Kusche, 2010

#include <stdio.h>
#include <stdlib.h>
// Was steht in der Angabe zu atoi, was an dieser Stelle zu beachten ist?

int main(int argc, const char *argv[])
{
  // hat der Aufrufer �berhaupt genau zwei Zahlen angegeben?
  // (damit argv[1] und argv[2] nicht "ins Leere greift")
  if (!(argc == 3)) {
    // Wenn nein: Fehlermeldung ausgeben, mit Fehlercode aufh�ren
    printf("Fehlerhafte Eingabesyntax");
    return 1;
  }

  // argv[1] und argv[2] in Zahlen verwandeln
  // und in zwei daf�r angelegten Variablen speichern
  int basis = atoi(argv[1]);
  int expon = atoi(argv[2]);

  // jetzt sollten wir noch pr�fen,
  // ob wir es mit mathematisch sinnvollen Eingaben zu tun haben:
  // Bei ganzzahliger Rechnung k�nnen wir nur Exponenten >= 0 berechnen
  // Sonst: Fehlermeldung, aufh�ren!
  // (und "0 hoch 0" sollte auch ausgeschlossen werden, aber das sparen wir uns)
  if (expon < 0 || (expon == 0 && basis == 0)) {
    printf("Fehlerhafte Eingabesemantik");
    return 1;
  }

  // Wir brauchen eine Variable f�r das Ergebnis
  // im Ergebnis speichern wir als Anfangswert einmal 1,
  // damit wir weiter unten etwas dazumultiplizieren k�nnen
  int ergebnis = 1;

  // und dann kommt eine Schleife,
  // die von 1 bis zur zweiten Eingabe (einschlie�lich) z�hlt
  for (int i = 0; i < expon; i++) {
    // in der Schleife multiplizieren wir jedesmal
    // die erste Eingabe zum Ergebnis dazu
    // und speichern das wieder im Ergebnis
    ergebnis *= basis;
  }

  // nach der Schleife kommt noch die Ausgabe ...

  printf("%i**%i = %i", basis, expon, ergebnis);

  // ... und das Programm-Ende
  return 0;

}
