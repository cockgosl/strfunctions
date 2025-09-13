

#include "myatoi.h"

int myatoi (const char* str) {
    assert (str != NULL);
    int sign = 1;
    int index = 0;
    int counter = 0;
    for (int i = 0; isspace(str[i]); i++) {
        index += 1;
    }
    if (str[index] == '+') {
        sign = 1;
        index += 1;
    }
    if (str[index] == '-') {
        sign = -1;
        index += 1;
    }
    printf ("Index: %d\n", index);
    for (int j = index; !isspace(str[j]); j++) {
        if (isdigit(str[j])) {
            counter = counter * 10 + (str[j] - '0');
        }
        else {
            printf ("the error of reading");
        }
    }
    return sign * counter;
}

