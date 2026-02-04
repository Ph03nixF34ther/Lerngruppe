// Anzahl der Gleichungen
#define GL_ANZ 3

// Anzahl der Punkte
#define ANZAHL 300000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 100

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 33, 66, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0, 0, 0, 0 },
    { -0.5, -0.6, -0.4, 0.007 },
    { -1.73237, -1.9, -1.6, 0.017 },
    { 0.5, 0.4, 0.6, 0.008 },
    { 0, 0, 0, 0 },
    { 3.36618, 3, 3.6, 0.025 }
  },
  {
    { 0.5, 0.4, 0.6, 0.009 },
    { 0, 0, 0, 0 },
    { -0.027891, -0.035, -0.025, 0.0003 },
    { 0, 0, 0, 0 },
    { 0.5, 0.4, 0.6, 0.0055 },
    { 5.01488, 4.6, 5.4, 0.031 }
  },
  {
    { 0, 0, 0, 0 },
    { 0.5, 0.4, 0.6, 0.005 },
    { 1.6208, 1.45, 1.65, 0.011 },
    { -0.5, -0.6, -0.4, 0.005 },
    { 0, 0, 0, 0 },
    { 3.3104, 3, 3.5, 0.021 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 255
#define GRUEN 0
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 100, 100, 100, -60, 120, -60 },
  { 100, 100, 100, 120, -60, -60 },
  { 100, 100, 100, -60, -60, 120 }
};
