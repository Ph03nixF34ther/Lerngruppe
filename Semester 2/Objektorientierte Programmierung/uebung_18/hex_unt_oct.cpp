#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <sstream>

#define LINE_WIDTH 80

using namespace std;

int main (int argc, char *argv[]) {
        if (argc != 2) {
                cerr << "Aufruf: " << argv[0] << " fehlerhaft. 1 Argument erwartet, " << argc-1 << " bekommen!" << endl;
                exit(EXIT_FAILURE);
        }

        ifstream file(argv[1]);

        if (!file){
                cerr << "Aufruf: " << argv[0] << " die Datei " << argv[1] << " konnte nicht geöffnen werden!" << endl;
                exit(EXIT_FAILURE);
        }

        char line[LINE_WIDTH + 1];

        char *last_char_index;
        int zahl;
       
        while (file.getline(line, LINE_WIDTH+1)) {
                last_char_index = line + strlen(line)-1;

                stringstream sstr(line);

                if (tolower(*last_char_index) == 'o') sstr >> oct >> zahl;
                if (tolower(*last_char_index) == 'h') sstr >> hex >> zahl;
        }

        if (!file.eof()) {
                cerr << "Aufruf: " << argv[0] << " fehlerhaftes Lesen des Files " << argv[1] << endl;
                exit(EXIT_FAILURE);
        }
}
