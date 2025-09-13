#include "mygetline.h"

size_t mygetline (char** line, size_t* size, FILE* stream) {
    *line = (char*)malloc (*size + 1);
    for (int i = 0; (*line)[i] != '\0' && (*line)[i] != EOF && i < *size ; i++) {
        printf ("%c", (*line)[i]);
        (*line)[i] = fgetc (stream);
        if (i == *size) {
            *(line)[i] = '\0';
            return strlen(*line);
        }
    }
    return strlen (*line);
}