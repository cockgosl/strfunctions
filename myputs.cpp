

#include "myputs.h"

int myputs (const char* pointer)
{
    assert (pointer != NULL);
    int number = 0;
    while (pointer[number] != '\0') { 
        printf("%c", pointer[number]); 
        number++;
    }
    return number;
}