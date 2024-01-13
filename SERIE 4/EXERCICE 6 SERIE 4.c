#include <stdio.h>
#include <stdlib.h>
typedef struct panneau {
    float largeur ;
    float longeur ;
    float episseur ;
    int type ;
} panneau;

void affichage (float lon , float larg , float ep , int ty ,int i){

    printf ("----------------------------------------------- panneau %d ------------------------------------------------------- \n",i+1);
    printf ("Longeur : %.2f \n",lon);
    printf ("Largeur : %.2f\n",larg);
    printf ("episseur : %.2f\n",ep);
    if (ty == 0)
        printf ("Type : Pin \n");
    else if (ty == 1)
        printf ("Type : chene \n");
    else
        printf ("Type : hetre \n");
}
void volume (float lon , float larg , float ep ,int i){
    printf ("Volume = %.2f m3 \n",lon*larg*ep);

}
int main()
{
    int n,i ;
    printf ("Entrer le nombre des elements : ");
    scanf("%d",&n);
    panneau pan[n];
    printf ("Entrer les infos : \n");
    for (i=0 ; i<n ; i++){
        printf ("panneau %d \n",i+1);
        printf ("largeur : ");
        scanf("%f",&pan[i].largeur);
        printf ("longeur : ");
        scanf("%f",&pan[i].longeur);
        printf ("episseur : ");
        scanf("%f",&pan[i].episseur);
        printf ("Entrer Le type de bois (tapper 0 pour pin 1 pour chene et 2 pour hetre) : ");
        scanf("%d",&pan[i].type);
    }
    for (i = 0 ; i<n ; i++){
        affichage(pan[i].largeur,pan[i].longeur,pan[i].episseur,pan[i].type,i);
        volume(pan[i].largeur,pan[i].longeur,pan[i].episseur,i);
    }
    return 0;
}
