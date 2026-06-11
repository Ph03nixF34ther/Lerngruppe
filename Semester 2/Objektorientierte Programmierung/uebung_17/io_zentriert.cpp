#include <cctype>
#include <fstream>
#include <iostream>

#define LINE_WIDTH 80

using namespace std;

int main (int argc, char *argv[]) {
        if (argc < 2) {
                cerr << "Aufruf: " << argv[0] << " fehlerhaft. 1 Argument erwartet, " << argc-1 << " bekommen!" << endl;
                exit(EXIT_FAILURE);
        }

        for (int file_index = 1; file_index < argc; file_index++) {
                ifstream input_file(argv[file_index]);

                char line[LINE_WIDTH + 1];

                
                while (input_file.getline(line, LINE_WIDTH+1)) {
                        int abstand = (LINE_WIDTH - strlen(line))/2;
                        for (int i = 0; i < abstand; i++){
                                cout << " ";
                        }

                        cout << line << "\n";
                }

                if (!input_file.eof()) {
                        cerr << "Aufruf: " << argv[0] << " fehlerhaftes Lesen des Files " << argv[1] << endl;
                        exit(EXIT_FAILURE);
                }

                cout << endl;
                cout << endl;

                input_file.close();
        }
        
        return 0;
}