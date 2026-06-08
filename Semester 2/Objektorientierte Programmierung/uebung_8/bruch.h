#include <iostream>
#include <cstdlib>

using namespace std;

#ifndef _BRUCH
#define _BRUCH

class Bruch {
        friend ostream &operator<<(ostream &outFile, const Bruch &bruch);

private:
        int zaehler;
        int nenner;

        void kuerzen();

public:
        Bruch(const char *reference);
        Bruch(int z, int n) : zaehler(z), nenner(n) {
                kuerzen();
        }

        int get_zaehler () {return zaehler;}
        int get_nenner () {return nenner;}

        void set_zaehler (int new_zaehler) {zaehler = new_zaehler;}
        void set_nenner (int new_nenner) {nenner = new_nenner;}

        Bruch operator+(Bruch &bruch) {return Bruch(zaehler*bruch.nenner + nenner*bruch.zaehler, nenner * bruch.nenner);} 
        Bruch operator-(Bruch &bruch) {return Bruch(zaehler*bruch.nenner - nenner*bruch.zaehler, nenner * bruch.nenner);}
        Bruch operator*(Bruch &bruch) {return Bruch(zaehler*bruch.zaehler, nenner * bruch.nenner);}
        Bruch operator/(Bruch &bruch) {return Bruch(zaehler*bruch.nenner, nenner * bruch.zaehler);} 

        operator double() {
                return double(zaehler) / double(nenner);
        }
};

#endif