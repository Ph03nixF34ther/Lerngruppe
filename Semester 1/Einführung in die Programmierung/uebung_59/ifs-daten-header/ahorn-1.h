// Anzahl der Gleichungen
#define GL_ANZ 5

// Anzahl der Punkte
#define ANZAHL 200000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 1

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 2, 38, 59, 80, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0.55, 0.45, 0.65, 0.011 },
    { 0, 0, 0, 0 }
  },
  {
    { 0.5, 0.4, 0.6, 0.011 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0.5, 0.4, 0.6, 0.015 },
    { 0.7, 0.6, 0.8, 0.021 }
  },
  {
    { 0.353, 0.3, 0.4, 0.007 },
    { 0.353, 0.3, 0.4, 0.008 },
    { 0.3, 0.1, 0.5, 0.017 },
    { -0.353, -0.4, -0.3, 0.0045 },
    { 0.353, 0.3, 0.4, 0.013 },
    { 0.3, 0.1, 0.5, 0.013 }
  },
  {
    { 0.353, 0.3, 0.4, 0.005 },
    { -0.353, -0.4, -0.3, 0.006 },
    { -0.3, -0.5, 0.1, 0.019 },
    { 0.353, 0.3, 0.4, 0.0075 },
    { 0.353, 0.3, 0.4, 0.01 },
    { 0.3, 0.1, 0.5, 0.015 }
  },
  {
    { 0.7, 0.5, 0.9, 0.017 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0.7, 0.6, 0.8, 0.009 },
    { 0, 0, 0, 0 }
  }
};


// Farbwerte des ersten Punktes:
#define ROT 0
#define GRUEN 255
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 110, 110, 110, 0, 0, 0 },
  { 70, 70, 70, -50, 150, -50 },
  { 70, 70, 70, 150, -50, -50 },
  { 70, 70, 70, -50, -50, 150 },
  { 100, 100, 100, 80, 80, 0 }
};
