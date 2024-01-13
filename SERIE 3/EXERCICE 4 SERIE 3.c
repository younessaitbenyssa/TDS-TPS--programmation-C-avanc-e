#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int frequence (char*phrase, char*mot){
    int occ = 0 ;
    int n = strlen(mot);
    char *p;
    p = phrase;
    while ((p = strstr(p,mot)) != NULL){
        occ++;
        p = p + n ;
    }
    return occ;
}

int main()
{
    char *phrase = malloc(300*sizeof(char));
    char *mot = malloc(300*sizeof(char));
    if (phrase == NULL || mot == NULL){
        printf ("Error d allocation !!");
        return 1 ;
    }
    printf ("Entrer votre phrase : ");
    gets(phrase);
    printf("Entrer le mot a chercher la frequence : ");
    gets(mot);
    printf ("La frequence est : %d",frequence(phrase, mot));
    return 0;
}
