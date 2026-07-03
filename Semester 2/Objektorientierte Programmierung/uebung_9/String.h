
#ifndef _String
#define _String

#include <iostream>

using namespace std;

class String {

        friend ostream &operator<<(ostream &outStream, const String &String);

        private:
                char *text;

        public:
                String(int laenge=0);
                String(const String &origin);
                String(char *origin);

                ~String();

                String operator+(const String &string)const ;
                bool operator==(const String &string)const ;
                bool operator<(const String &string)const ;
                bool operator!()const ;
                String &operator+=(const String &string) ;
                String &operator=(const String &string) ;
                String &operator=(const char *string) ;
                char &operator[](int i);
                operator string() const;
};

#endif