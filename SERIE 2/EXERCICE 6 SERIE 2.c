#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *c = malloc(300);
    printf("Entrer votre message : ");
    gets(c);
    int chiffre = 0 ,ESp = 0 , Au = 0 ;
    while (*c !='\0'){
        if (*c >= '0' && *c <= '9')
            chiffre ++;
        else if (*c == ' ' || *c == '\t' || *c == '\n')
            ESp ++;
        else
            Au ++ ;
     c++ ;
    }
    printf("Le nombre des chiffres : %d \n",chiffre);
    printf("Le nombre des ESPACEMENT : %d \n",ESp);
    printf("AUTRES : %d",Au);
    return 0;
}
