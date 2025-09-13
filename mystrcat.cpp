#include "mystrcat.h"

char* mystrcat (char* base, const char* additional) {
    assert (base != NULL);
    assert (additional != NULL);
    size_t length1 = mystrlen (base);
    size_t length2 = mystrlen (additional);
    for (size_t i = 0; i < (length2); i++) {          
        * (char*) ((size_t) base + length1 + i) = additional [i];
    }
    return base;
}
char* mystrncat (char* base, const char* additional, size_t number) {
    assert (base != NULL);
    assert (additional != NULL);
    size_t length = mystrlen (base);
    for (size_t i = 0; i < (number); i++) {          
        * (char*) ((size_t) base + length + i) = additional [i];
    }
    return base;
}
