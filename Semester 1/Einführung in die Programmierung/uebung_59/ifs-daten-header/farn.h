// Anzahl der Gleichungen
#define GL_ANZ 4

// Anzahl der Punkte
#define ANZAHL 1000000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 1

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 85, 92, 99, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0.85, 0.72, 0.92, 0.004 },
    { 0.04, -0.045, 0.1, 0.002 },
    { 0, 0, 0, 0 },
    { -0.04, -0.1, 0.06, 0.004 },
    { 0.85, 0.8, 0.9, 0.003 },
    { 1.6, 1.3, 1.9, 0.009 }
  },
  {
    { -0.15, -0.4, -0.03, 0.005 },
    { 0.28, 0.2, 0.5, 0.003 },
    { 0, 0, 0, 0 },
    { 0.26, 0.1, 0.5, 0.005 },
    { 0.24, 0.1, 0.5, 0.004 },
    { 0.44, 0.1, 2, 0.008 }
  },
  {
    { 0.2, 0.03, 0.4, 0.004 },
    { -0.26, -0.5, 0.015, 0.005 },
    { 0, 0, 0, 0 },
    { 0.23, 0.1, 0.5, 0.0035 },
    { 0.22, 0.1, 0.5, 0.0055 },
    { 1.6, 0.1, 2, 0.011 }
  },
  {
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0.16, 1.3, 1.9, 0.007 },
    { 0, 0, 0, 0 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 0
#define GRUEN 255
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  // Gleichung 0: Ein bisschen grün weg, dafür rot und blau stärker machen
  { 110, 90, 110, 0, 0, 0 },
  // Gleichung 1 und 2: Ein bisschen vom rot und blau des vorigen Punktes...
  { 50, 0, 35, 64, 255, -16 },   // Gleichung 1: ... plus bräunlich grün
  { 35, 0, 50, -16, 255, 64 },   // Gleichung 2: ... plus bläulich grün
  // Gleichung 3: Fixe Farbe rein grün, unabhängig vom vorigen Punkt
  { 0, 0, 0, 0, 255, 0 }
};
