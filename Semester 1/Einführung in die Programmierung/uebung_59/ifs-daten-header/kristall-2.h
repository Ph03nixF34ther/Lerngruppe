// Anzahl der Gleichungen
#define GL_ANZ 2

// Anzahl der Punkte
#define ANZAHL 1000000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 100

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 75, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0.69697, 0.4, 0.9, 0.01 },
    { -0.481061, -0.7, -0.2, 0.01 },
    { 2.147, 1.5, 3, 0.02 },
    { -0.393939, -0.6, -0.2, 0.012 },
    { -0.662879, -0.8, -0.5, 0.011 },
    { 10.3103, 8, 12, 0.02 }
  },
  {
    { 0.090909, 0.05, 0.2, 0.008 },
    { -0.443182, -0.7, -0.2, 0.008 },
    { 4.28656, 3, 5, 0.03 },
    { 0.515152, 0.3, 0.8, 0.0011 },
    { -0.094697, -0.2, -0.05, 0.012 },
    { 2.92576, 2, 4, 0.015 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 0
#define GRUEN 255
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 110, 100, 0, -40, 90, 0 },
  { 110, 100, 0, 130, -50, 0 }
};
