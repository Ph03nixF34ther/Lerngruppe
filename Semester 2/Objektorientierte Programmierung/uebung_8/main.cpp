#include "bruch.h"

int main(int argc, const char *argv[]) {
        // 1, 3, 5, ... Eingabeworte (+1 für den Programmnamen) sind ok
        // ==> argc muss gerade sein
        if (argc % 2 != 0) {
                cerr << argv[0] << ": Falsche Anzahl von Eingaben!\n" << endl;
                exit(EXIT_FAILURE);
        }

        // Bisheriges Ergebnis = linker Operand für die nächste Rechnung
        // Am Anfang: Erster Bruch
        Bruch result(argv[1]);
        // "Bruch result = argv[1];" geht genauso, ruft denselben Konstruktor auf

        // Schleife in Zweierschritten ab dem ersten Rechenzeichen
        // argv[i] ist das Rechenzeichen, argv[i + 1] ist der nächste Bruch
        for (int i = 2; i < argc; i += 2) { 
                Bruch input(argv[i + 1]);
                switch (argv[i][0]) {
                case '+':
                        // wir haben nur + usw. definiert, nicht += usw.
                        // daher müssen wir result += input auf result = result + input ändern.
                        result = result + input;
                        break;
                case '-':
                        result = result - input;
                        break;
                case 'x':
                        result = result * input;
                        break;
                case '/':
                        // Division durch 0 wird beim Kürzen des Ergebnisses erkannt,
                        // muss hier nicht extra geprüft werden
                        result = result / input;
                        break;
                default:
                        cerr << argv[0] << ": " << argv[i][0] << "Kein Rechenzeichen?" << endl;
                        exit(EXIT_FAILURE);
                }
        }

        cout << "Ergebnis: " << result << endl;
        cout << "Als Kommazahl: " << double(result) << endl;
        
        exit(EXIT_SUCCESS);
}