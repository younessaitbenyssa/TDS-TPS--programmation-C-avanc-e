#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ;
    char sexe ;
    printf ("Veuiller entrer votre sexe ('H' pour homme 'F' pour femme): ");
    scanf("%c",&sexe);
    printf ("Entrer votre age : ");
    scanf("%d",&age);
    if (age>= 20 && sexe == 'H')
        printf ("Imposable");
    else if (age >= 18 && age <= 35 && sexe == 'H')
       printf ("Imposable");
    else
        printf ("Non imposable");
    return 0;
}
