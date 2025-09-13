

#include "mystrlen.h" 

size_t mystrlen (const char* str)
{
    assert (str != 0);
    size_t counter = 1;
    while (str[counter] != '\0')
    {
        counter += 1;
    }
    return counter;

}
