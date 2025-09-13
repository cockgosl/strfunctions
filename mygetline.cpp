#include <mygetline.h>

size_t mygetline (char** line, size_t* size, FILE* stream) {
    *line = malloc (*size + 1);
    printf ("print the string: ");
    fgets (*line, size, stream);
    return (strlen(*line));
}