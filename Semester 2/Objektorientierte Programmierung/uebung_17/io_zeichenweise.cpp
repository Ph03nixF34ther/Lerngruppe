#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>


using namespace std;

int main (int argc, char *argv[]) {
        // Test auf korrekte Argumentzahl
        if (argc != 3) {
                cerr << "Aufruf: " << argv[0] << "inkorrekte Anzahl an Argumenten. 2 erwartet, " << argc-1 << " erhalten!" << endl;
                exit(EXIT_FAILURE);
        }

        // Festlegen des Inputfiles
        ifstream input_file(argv[1]);

        if (!input_file){
                cerr << "Aufruf: " << argv[0] << " die Datei " << argv[1] << " konnte nicht geöffnen werden!" << endl;
                exit(EXIT_FAILURE);
        }


        // Festlegen des Outputfiles
        ofstream output_file(argv[2]);

        if (!output_file){
                cerr << "Aufruf: " << argv[0] << " die Datei " << argv[2] << " konnte nicht geöffnen werden!" << endl;
                exit(EXIT_FAILURE);
        }

        char gelesenes_zeichen;
        char korrigiertes_zeichen;

        while (input_file.get(gelesenes_zeichen)) {
                korrigiertes_zeichen = tolower(gelesenes_zeichen);

                if (!(output_file.put(korrigiertes_zeichen))) {
                        cerr << "Aufruf: " << argv[0] << " es gab einen Fehler beim schreiben der Datei " << argv[2] << " du Pipikack!" << endl;
                        exit(EXIT_FAILURE);
                }
        }

        output_file.put('\n');

        if (!(input_file.eof())) {
                cerr << "Aufruf: " << argv[0] << " es gab einen Fehler beim lesen der Datei " << argv[1] << "" << endl;
                exit(EXIT_FAILURE);
        }

        input_file.close();
        output_file.close();

        return 0;
}