#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *c ;
    char tmp;
    int n;
    c = malloc (30*sizeof(char));
    if (c == NULL)
        printf ("Erreur pendant l'allocation");
    printf ("Entrer la chaine de caractere : ");
    gets(c);
    n = strlen(c);
    char *ptr = c ;
    char *p = c + n - 1;
    while (ptr < p){
        tmp = *ptr;
        *ptr = *p ;
        *p = tmp ;
        ptr ++ ;
        p -- ;
    }
    puts(c);

    return 0;
}
