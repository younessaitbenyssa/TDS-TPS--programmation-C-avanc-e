#include <stdio.h>
#include <stdlib.h>
typedef struct enregistrement {
    char nom [20];
    char prenom [20];
    int telephone ;
} enregistrement;
void affichage (char *name , char *firstname , int phone){
    printf("Nom : %s\n",name);
    printf("Prenom : %s\n",firstname);
    printf("Num de telephone: %d\n",phone);
}
int main()
{   int n ,i;
    printf ("Donner le nombre des enregistrement : ");
    scanf("%d",&n);
    enregistrement enr[n];
    for (i=0 ; i<n ; i++){
        printf ("-------------------------------Enregistrement %d -------------------------------------------------------------\n",i+1);
        printf ("Nom : ");
        scanf("%s",enr[i].nom);
        printf ("Prenom : ");
        scanf("%s",enr[i].prenom);
        printf ("Num de telephone : ");
        scanf("%d",&enr[i].telephone);
    }
    for (i=0 ; i<n ;i++){
    printf ("------------------------------- AFFICHAGE --------------------------------------------------------------------\n");
    printf ("-------------------------------Enregistrement %d -------------------------------------------------------------\n",i+1);
    affichage (enr[i].nom,enr[i].prenom, enr[i].telephone);
    }
    return 0;
}
