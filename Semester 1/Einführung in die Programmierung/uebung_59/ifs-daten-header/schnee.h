// Anzahl der Gleichungen
#define GL_ANZ 4

// Anzahl der Punkte
#define ANZAHL 1000000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 1

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 8, 16, 24, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0.25, 0.2, 0.3, 0.007 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0.25, 0.2, 0.3, 0.009 },
    { 0, 0, 0, 0 }
  },
  {
    { 0.25, 0.2, 0.3, 0.005 },
    { 0, 0, 0, 0 },
    { 0.75, 0.7, 0.8, 0.0065 },
    { 0, 0, 0, 0 },
    { 0.25, 0.2, 0.3, 0.0075 },
    { 0, 0, 0, 0 }
  },
  {
    { 0.25, 0.2, 0.3, 0.0035 },
    { 0, 0, 0, 0 },
    { 0.375, 0.35, 0.4, 0.0009 },
    { 0, 0, 0, 0 },
    { 0.25, 0.2, 0.3, 0.008 },
    { 0.649519, 0.6, 0.7, 0.003 }
  },
  {
    { 0.375, 0.35, 0.4, 0.011 },
    { 0.649519, 0.6, 0.7, 0.0055 },
    { 0.125, 0.1, 0.15, 0.0003 },
    { -0.649519, -0.7, -0.6, 0.0075 },
    { 0.375, 0.35, 0.4, 0.013 },
    { 0.505181, 0.45, 0.55, 0.006 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 255
#define GRUEN 0
#define BLAU 255

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 80, 0, 80, -60, 255, -60 },
  { 0, 80, 80, 255, -60, -60 },
  { 80, 80, 0, -60, -60, 255 },
  { 100, 100, 100, 20, -20, 20 }
};
