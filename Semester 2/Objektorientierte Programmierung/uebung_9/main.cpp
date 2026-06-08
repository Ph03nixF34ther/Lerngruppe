// String-Klasse, Hauptprogramm zum Testen
//
// Aufruf: strings
//
// Klaus Kusche, 2012

#include <iostream>
#include "String.h"
// hier fehlen noch zwei Header

using namespace std;

// hier fehlt die Klasse "String" und der Ausgabe-Operator dafür

int main()
{
  String nix;
  String a = "Äpfel";
  String aa = a;
  String b = "Birnen";
  String bb;
  String k = "Kompott";
  String ab = "ÄpfelBirnen";
  String res;

  bb = b;
  res = aa + String("") + bb;

  cout << "Ist 'nix' leer? " << (!nix ? "Ja!" : "Nein???") << endl;
  cout << "'" << bb << "' sind " << (!bb ? "auch" : "nicht") << " leer." << endl;
  cout << "'" << a << "' und '" << b << "' sind " <<
      ((a == b) ? "gleich" : "verschieden") << "." << endl;
  cout << "'" << bb << "' sind " << (bb < k ? "kleiner" : "größer") <<
      " als '" << k << "'" << endl;
  cout << "'" << k << "' ist " << (k < b ? "kleiner" : "größer") <<
      " als '" << b << "'" << endl;
  cout << "'" << aa << "' plus '" << bb << "' sind '" << res << "'." << endl;
  cout << "Sind es wirklich 'ÄpfelBirnen'? " <<
      ((ab == res) ? "Ja!" : "Nein???") << endl;

  // ab hier auskommentieren, solange du noch kein += hast
  a += bb;
  a += k;
  cout << "Und jetzt gibt es '" << a << "'." << endl;

  // ab hier auskommentieren, solange Index- und Typumwandlungsoperator fehlen
  cout << "'" << res << "[5]' ist ein '" << res[5] << "'." << endl;
  res[5] = 'H';
  cout << "Und jetzt machen wir ein 'H' daraus: '" << res << "'." << endl;
  cout << "Ausgabe als C++ string: '" << string(res) << "'." << endl;
  cout << "Wird '" << b << "[6]' richtig abgefangen? ";
  b[6] = 'x';
  cout << ((b == bb) ?  "Ja!" : "Nein???") << endl;
  

  return 0;
}
