// Autor: Elias Niebergall
// Datum: 12.12.'25
// Wuerfeln

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>


int main (int argc, char *argv[]) {

        if (argc < 4){
                printf("fehlerhafte eingabesyntax. eingabe erfordert mindestens 3 element des typen int oder ein chr element von {'+', '-', 'x', '/', '^'}\n");
                exit(EXIT_FAILURE);
        }
        
        int result = atof(argv[1]);

        for (int i = 2; i < argc; i+= 2){
                switch (argv[i][0])
                {
                case '+':
                        result += atof(argv[i+1]);
                        break;
                case '-':
                        result -= atof(argv[i+1]);
                        break;
                case 'x':
                        result *= atof(argv[i+1]);
                        break;
                case '/':
                        result /= atof(argv[i+1]);
                        break;
                case '^':
                        result = pow(result, atof(argv[i-1]));
                        break;
                
                default:
                        break;
                }
        }
        printf(" = %d\n", result);
}