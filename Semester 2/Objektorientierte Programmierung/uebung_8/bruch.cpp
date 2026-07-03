#include <cstring>
#include <cstdlib>
#include "bruch.h"
#include <math.h>

int ggT(int a, int b);

Bruch::Bruch (const char *reference) { 
        const char *split_position = strchr(reference, '/');
        zaehler = atoi(reference);
        if (split_position) {
                nenner = atoi(split_position+1);
        } else {
                nenner = 1;
        }
        kuerzen();
}

void Bruch::kuerzen () {
        int ggt = ggT(zaehler, nenner);
        zaehler /= ggt;
        nenner /= ggt;
}

int ggT (int a, int b) {
        if (a == b) {
                return b;
        }
        while (b != 0) {
                if ( a > b ) {
                        a -= b;
                } else {
                        b -= a;
                }
        }
        return a;
}

ostream &operator<<(ostream &outFile, const Bruch &bruch) {
        if (bruch.nenner == 1) {
                outFile << bruch.zaehler;
        } else {
                outFile << bruch.zaehler << "/" << bruch.nenner;
        }
        return outFile;
}