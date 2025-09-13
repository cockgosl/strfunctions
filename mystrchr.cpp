

#include "mystrchr.h"

const char* mystrchr (const char* pointer , int symbol) {
    assert (pointer != 0);
    int index = 0;
    const char* adress = NULL;
    while (pointer[index] != '\0') { 
        if (pointer [index] == symbol)
        {
            adress =  pointer + (size_t)index;
            return adress;
        }
        index++;
    }
    return adress;
}

