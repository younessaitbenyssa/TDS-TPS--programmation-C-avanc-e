#include <stdio.h>
#include <stdlib.h>
int longeurchain1(char chaine[]){
    int i,l ;
    for (i = 0 ; chaine[i] != '\0'; i++)
       l++ ;
    return l ;
}
int main()
{
    char cTab1[30];
    char cTab2[30];
    printf("Entrer La premiere chaine de caractere : ");
    gets(cTab1);
    printf("Le longeur de cette chaine est : %d \n",longeurchain1(cTab1));
    printf("Entrer La deuxieme chaine de caractere : ");
    gets(cTab2);
    printf("Le longeur de cette chaine est : %d",longeurchain1(cTab2));

    return 0;
}
