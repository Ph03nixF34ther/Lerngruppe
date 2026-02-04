// Anzahl der Gleichungen
#define GL_ANZ 3

// Anzahl der Punkte
#define ANZAHL 300000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 300

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 90, 95, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0.7879, 0.7, 0.9, 0.007 },
    { -0.4242, -0.5, -0.3, 0.009 },
    { 1.7586, 1.5, 2, 0.021 },
    { 0.2424, 0.19, 0.3, 0.003 },
    { 0.8598, 0.7, 1, 0.011 },
    { 1.4081, 1.3, 1.5, 0.0075 }
  },
  {
    { -0.1212, -0.14, -0.1, 0.003 },
    { 0.2576, 0.18, 0.32, 0.004 },
    { -6.7217, -7, -6.4, 0.023 },
    { 0.1515, 0.13, 0.17, 0.002 },
    { 0.053, 0.04, 0.06, 0.0009 },
    { 1.3772, 1.25, 1.5, 0.0085 }
  },
  {
    { 0.1819, 0.1, 0.3, 0.008 },
    { -0.1364, -0.17, -0.1, 0.001 },
    { 6.0861, 5.75, 6.3, 0.027 },
    { 0.0909, 0.08, 0.1, 0.001 },
    { 0.1819, 0.16, 0.2, 0.0017 },
    { 1.568, 1.4, 1.7, 0.0105 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 255
#define GRUEN 0
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 100, 95, 95, 10, 0, 0 },
  { 50, 0, 50, 0, 255, -10 },
  { 50, 50, 0, 0, -10, 255 }
};
