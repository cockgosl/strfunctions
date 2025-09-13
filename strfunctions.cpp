#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t mystrlen (const char* str);
const char* mystrchr (const char* pointer , int symbol);
int myputs (const char* pointer);
char* mystrcat (char* base, const char* additional);
char* mystrncat (char* base, const char* additional, size_t number);
int myatoi (const char* str);
char* myfgets (char* string, int num, FILE* filestream);

int main ()
{
    //initialization for strchr
    const char* p1 = NULL;
    const char* p2 = NULL;

    //initialization for strlen
    size_t l1 = 0;
    size_t l2 = 0;

    //initialization for strcat
    char* pcat = NULL;
    char str[100] = "MEOW";
    char strad[100] = "MEOW";

    //initialization for strncat
    char str1 [100] = "MEOW";
    char strad1 [100] = "MEOWMEOWMEOWMEOW";
    char* pcat1 = NULL;
    
    //initialization for atoi
    char str2 [] = "    12345 a;slfkjncv";

    //initialization for fgets
     FILE *f = fopen("C:\\Users\\User\\OneDrive\\Workspace\\laboratory work\\1.1.4\\1.1.4inf.txt", "r");
     char strforwri1[200] = {};
     char strforwri2[200] = {};
     int limit = 10;

    printf ("standart puts:\n");
    puts (str); 
    printf ("my puts:\n");
    myputs (str);
    printf ("\n\n");

    p1 = strchr (str , 'E');
    printf ("strchr From the standart library:%p\n", p1);
    p2 = mystrchr (str, 'E'); 
    printf ("From my function: %p\n\n", p2);
    
    l1 = strlen (str);
    printf ("Standart strlen: %d\n", l1);
    l2 = mystrlen (str);
    printf ("My strlen: %d\n\n", l2);

    pcat = mystrcat (str, strad);
    printf ("My strcat: %p\n", pcat);
    printf ("my string: ");
    for (size_t i = 0; i < strlen (pcat) + 1; i++) {
        printf ("%c", pcat [i]);
    }
    printf ("\n\n");

    pcat1 = mystrncat (str1, strad1, 12);
     for (size_t i = 0; i < strlen (pcat1) + 1; i++) {
        printf ("%c", pcat1 [i]);
    }
    printf("\n\n");

    int a1 = atoi (str2);
    printf ("Standart atoi: %d\n", a1);
    int a2 = myatoi (str2);
    printf ("My atoi: %d\n\n", a2);

    fgets (strforwri1, limit, f );
    printf ("standart fgets: ");
    puts (strforwri1);
    myfgets (strforwri2, limit, f);
    printf ("\n myfgets: ");
    myputs (strforwri2);

}