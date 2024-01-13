#include <stdio.h>
#include <stdlib.h>
typedef struct produit {
    int ref ;
    int type ;
    float prix ;
    int qnt ;
} produit ;

void saisie (produit *prd, int n){
    int i ;
    printf ("Entrer les produits : \n");
    for (i=0; i<n ; i++){
        printf ("----------------------------------------------------- PRODUIT %d ---------------------------------------------------\n",i+1);
        printf  ("Entrer le reference de produit : ");
        scanf ("%d",&prd[i].ref);
        printf ("Entrer le Type (1 pour carte mere , 2 pour processeur , 3 pour barette memoire et 4 pour carte graphique) : ");
        scanf("%d",&prd[i].type);
        printf ("Entrer le prix : ");
        scanf ("%f",&prd[i].prix);
        printf ("Quantite disponible : ");
        scanf("%d",&prd[i].qnt);
    }
}

void saisiecommande (produit *prd, int n){
    int t,i,q ;
    printf ("Entrer le type de produit a commande (1 pour carte mere , 2 pour processeur , 3 pour barette memoire et 4 pour carte graphique): ");
    scanf ("%d",&t);
    for (i=0 ; i<n ; i++){
        if (t==prd[i].type)
            break;
    }
    printf ("Entrer la Quantite a commande : ");
    scanf ("%d",&q);
    printf ("\n--------------------------------------------------------------------------------------------------------------------\n");
    if (q>prd[i].qnt){
        printf ("Quantite commande non disponible (out of stock) !!");
    }else{
        printf("Type de produit :");
        if (prd[i].type == 1)
        printf ("Carte mere \n");
      else if (prd[i].type == 2)
        printf ("Processeur \n");
      else if (prd[i].type == 3)
        printf ("Barette memoire\n");
      else
        printf ("Carte Graphique \n");
      printf ("Reference : %d \n",prd[i].ref);
      printf ("prix unitaire : %.2f DH \n",prd[i].prix);
      printf ("Qunatite commande : %d \n",q);
      printf ("\n ----------------------------------------------------------------------------------------------------------------\n");
      printf ("Prix Totale : %.2f DH",q*prd[i].prix);

    }

}
void affichage (produit *prd,int n){
    int i ;
    printf ("\n----------------------------------------------- AFFICHAGE-----------------------------------------------------------\n");
    for (i=0 ; i<n ; i++){
      printf ("............................................... PRODUIT %d............................................................\n",i+1);
      printf ("Type : ");
      if (prd[i].type == 1)
        printf ("Carte mere \n");
      else if (prd[i].type == 2)
        printf ("Processeur \n");
      else if (prd[i].type == 3)
        printf ("Barette memoire\n");
      else
        printf ("Carte Graphique\n");
      printf ("Reference : %d \n",prd[i].ref);
      printf ("Quantite : %d \n",prd[i].qnt);
      printf ("Prix : %.2f DH\n",prd[i].prix);

    }
}
int main()
{
    int n ;
    printf ("Entrer le nombre des produits : ");
    scanf ("%d",&n);
    produit *prd = malloc (n*sizeof(produit));
    if (prd == NULL){
        printf ("Allocation memoire echoue !!");
        return 1 ;
    }
    saisie (prd , n);
    affichage(prd, n);
    saisiecommande(prd,n);
    return 0;
}
