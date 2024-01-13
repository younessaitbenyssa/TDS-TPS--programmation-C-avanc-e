#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *c,*pal ;
    char tmp;
    int n = 0, i=0,j=0;
    c = malloc (30*sizeof(char));
    pal =  malloc (30*sizeof(char));
    if (c == NULL)
        printf ("Erreur pendant l'allocation");
    printf ("Entrer la chaine de caractere : ");
    gets(c);

     while (c[i] != '\0'){
        pal[i] = c [i];
        n++ ;
        i++;
     }
    char *ptr = c ;
    char *p = c + n - 1;
    while (ptr < p){
        tmp = *ptr;
        *ptr = *p ;
        *p = tmp ;
        ptr ++ ;
        p-- ;
    }
    printf ("Le mot reverse est : ");
    puts(c);
    printf ("************************************************************************************************************************");
    while (*c != '\0'){
        if (*c != *pal){
            j=1;
            break ;
        }
        c++;
        pal++;
    }
    if (j == 0)
        printf ("\nLe mot est palindrome !");
    else
        printf ("\nLe mot n est pas palindrome !");
    return 0;
}
