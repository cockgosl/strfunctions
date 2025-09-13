#include "myfgets.h"

char* myfgets (char* string, int num, FILE* filestream) {
    assert (filestream);
    assert (string);
    int counter = 0;
    for (; counter < num; counter++) {
        int c = fgetc (filestream);
        string[counter] = (char) c;
        if (c == EOF ||  c =='\n')
            break;
    }
    string[counter] = '\0';
    return string;
}
