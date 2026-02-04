// Anzahl der Gleichungen
#define GL_ANZ 3

// Anzahl der Punkte
#define ANZAHL 1000000

// Nummer des ersten anzuzeigenden Punktes
#define ERSTER 100

// Wahrscheinlichkeit der Gleichungssysteme: Sei x zufällig 0...99:
// Nimm die Gleichung i mit prozent[i-1] <= x < prozent[i]
int prozent[GL_ANZ] = { 40, 55, 100 };

// GL_ANZ mal 6 Koeffizienten
koeff c[GL_ANZ][6] =
{
  {
    { 0.307692, 0.2, 0.4, 0.008 },
    { -0.531469, -0.7, -0.4, 0.013 },
    { 5.40195, 4, 7, 0.021 },
    { -0.461538, -0.6, -0.3, 0.01 },
    { -0.293706, -0.4, -0.2, 0.011 },
    { 8.65517, 7, 10, 0.029 }
  },
  {
    { 0.307692, 0.2, 0.4, 0.009 },
    { -0.076923, -0.2, -0.02, 0.003 },
    { -1.29525, -1.5, -0.5, 0.017 },
    { 0.153846, 0.1, 0.2, 0.005 },
    { -0.447552, -0.6, -0.3, 0.017 },
    { 4.15299, 3, 5, 0.019 }
  },
  {
    { 0, 0, 0, 0 },
    { 0.545455, 0.4, 0.7, 0.011 },
    { -4.89364, -6, -4, 0.015 },
    { 0.692308, 0.55, 0.85, 0.007 },
    { -0.195804, -0.3, -0.1, 0.006 },
    { 7.26979, 6, 8, 0.025 }
  }
};

// Farbwerte des ersten Punktes:
#define ROT 255
#define GRUEN 0
#define BLAU 0

// Farbänderungstabelle
farbinfo farbe[GL_ANZ] = {
  { 100, 90, 90, -40, 120, -55 },
  { 100, 90, 90, 140, -50, -55 },
  { 100, 90, 90, -40, -50, 100 }
};
