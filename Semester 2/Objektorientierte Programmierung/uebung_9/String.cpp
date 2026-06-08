#include "String.h"
#include <cstring>

String::String (int laenge) {
        text = new char[laenge+1];
        *text = '\0';
}

String::String (const String &origin) : text(new char[strlen(origin.text)+1]) {
        strcpy(text, origin.text);
}

String::String (char *origin) {
        text = new char[strlen(origin)+1];
        strcpy(text, origin);
}

String::~String() {
        delete [] text;
}

String String::operator+(const String &string) const {
        String new_string = String(strlen(text) + strlen(string.text));
        strcpy(new_string.text, text);
        strcat(new_string.text, string.text);
        return new_string;
}

String &String::operator+=(const String &string) {
        char *new_text = new char[strlen(string.text) + strlen(text)];
        strcpy(new_text, text);
        delete [] text;
        strcat(new_text, string.text);
        text = new_text;
        return *this;
}

bool String::operator!() const {
        return text[0] == '\0';
}

bool String::operator==(const String &string) const {
        return strcmp(text, string.text) == 0;
}

bool String::operator<(const String &string) const {
        return strcmp(text, string.text) < 0;
}

String &String::operator=(const String &string) {
        if (!(this == &string)) {
                char *new_text = new char[strlen(string.text)+1];
                strcpy(new_text, string.text);
                delete [] text;
                text = new_text;
        }
        return *this;
}

String &String::operator=(const char *string) {
        if (!strcmp(text, string)) {
                char *new_text = new char[strlen(string)+1];
                strcpy(new_text, string);
                delete [] text;
                text = new_text;
        }
        return *this;
}

ostream &operator<<(ostream &outStream, const String &String) {
        outStream << String.text;
        return outStream;
}

char &String::operator[](int i) {
        static char dummy;
        if ((i < 0) || (i >= strlen(text))) {
                dummy = '\0';
                return dummy;
        }

        return text[i];
}

String::operator string() const {
        return string(text);
}