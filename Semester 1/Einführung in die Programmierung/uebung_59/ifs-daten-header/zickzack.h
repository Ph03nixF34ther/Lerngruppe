// Anzahl der Gleichungen
#define GL_ANZ 2

// Anzahl der Punkte
#define ANZAHL 300000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 100

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 89, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { -0.632407, -0.7, -0.57, 0.003 },
    { -0.614815, -0.7, -0.51, 0.007 },
    { 3.84082, 3.5, 4.2, 0.027 },
    { -0.54537, -0.6, -0.47, 0.008 },
    { 0.659259, 0.57, 0.73, 0.011 },
    { 1.28232, 1, 1.6, 0.015 }
  },
  {
    { -0.036111, -0.05, -0.02, 0.002 },
    { 0.444444, 0.35, 0.54, 0.009 },
    { 2.07108, 1.7, 2.5, 0.019 },
    { 0.210185, 0.15, 0.28, 0.004 },
    { 0.037037, 0.02, 0.05, 0.0009 },
    { 8.33055, 7.5, 9.2, 0.031 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 0
#define GRUEN 255
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 95, 105, 95, 0, 5, 0 },
  { 0, 60, 0, 0, 0, 255 }
};
