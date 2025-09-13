/*#ifndef STRCAT_H
#define STRCAT_H*/

#include <math.h>
#include <stdio.h>
#include <assert.h>

char* mystrcat (char* base, const char* additional);
char* mystrncat (char* base, const char* additional, size_t number);
size_t mystrlen (const char* str);

//#endif