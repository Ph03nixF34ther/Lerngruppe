// Näherung der Quadratwurzel
//
// Aufruf: root x
//
// Klaus Kusche, 2010

#include <stdio.h>
#include <stdlib.h>
// für sqrt und fabs
#include <math.h>

int main(int argc, const char *argv[])
{
  if (argc != 2) {
    fprintf(stderr, "Aufruf: %s x\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  // Wir wollen argv[1] (die Zahl x, aus der wir die Wurzel ziehen)
  // nicht in einen int, sondern in einen double (Kommazahl) verwandeln,
  // also atof statt atoi ("ascii to float")
  double x = atof(argv[1]);

  // Prüfung auf unzulässige Eingabe
  if (x < 0) {
    fprintf(stderr, "%s: Eine negative Zahl hat keine Wurzel.\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  // w ist unser aktueller Näherungswert, auch eine Kommazahl
  double w = x;  // laut Angabe ist x unser erster Näherungswert für die Wurzel

  // 1.) w * w - x ergibt den Fehler,
  //     d.h. wie weit das Quadrat unseres Wurzel-Näherungswertes
  //     noch vom ursprünglichen Wert weg (drunter oder drüber) ist
  // 2.) fabs streicht das Vorzeichen davon weg
  // 3.) und solange der Fehler größer als ein Zehnmilliardstel
  //     des ursprünglichen Wertes ist, berechnen wir eine bessere Näherung
  // 1e-10 heißt "1 mal 10 hoch -10" (d.h. ein Zehnmilliardstel)
  while (fabs(w * w - x) > x * 1e-10) {
    // der neue Näherungswert ist laut Angabe
    // der Mittelwert vom alten Näherungswert und
    // "x durch den alten Näherungswert"
    // (der Mittelwert zweier Zahlen ist deren Summe durch 2)
    w = (w + x / w) / 2; 
  }

  // sqrt ist die eingebaute Funktion, die zu der Zahl, die man hineinsteckt,
  // die Wurzel als Ergebnis zurückliefert ("square root", Quadratwurzel)
  // %g heißt "je nach Größe der Zahl entweder %f oder %e, was besser passt"
  // %f ist die Ausgabe nur mit Kommapunkt (ohne e)
  // %e ist die wissenschaftliche Ausgabe mit e, d.h. "mal 10 hoch irgendwas"
  // %.15g heißt "gib 15 Nachkommastellen aus" (normalerweise nur 6)
  printf("Wurzel von %.15g: %.15g (laut sqrt: %.15g)\n", x, w, sqrt(x));

  exit(EXIT_SUCCESS);
}
