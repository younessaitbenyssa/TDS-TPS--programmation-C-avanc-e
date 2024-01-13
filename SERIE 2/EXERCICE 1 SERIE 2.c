#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int n ;
int* saisie() {
    printf("Entrer le nombre des elements à saisir : ");
    scanf("%d", &n);

    int *p = (int*)malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &p[i]);
    }

    return p;
}

void affichage (int *p){
    printf("Les éléments saisis sont : ");
    for (int i = 0; i < n; i++) {
        printf("%d \t", p[i]);
    }

}
void moyenne (int *m){
    float somme = 0  ;
    int i ;
    float moy ;
    for (i=0 ; i < n ; i++){
        somme = somme + m[i] ;
    }
    moy = somme/n ;
    printf ("\n");
    printf("La Moyenne = %.2f \n", moy);
}
int Max_elem (int *Max){
    int max = 0  ;
    int pos ;
    int i ;
    for (i=0 ; i<n ; i++){
       if (Max[i] > max){
        max = Max[i];
        pos = i ;
       }
    }
    return pos ;
}
void supprimermax (int *ptr){
    int position = Max_elem (ptr);
    int i ;
    for (i = position ; i < n ; i++)
        ptr[i] = ptr [i+1];
    afficherafterdeltemax (ptr);
}
void afficherafterdeltemax (int *ptr){
    int i ;
    n = n - 1 ;
    printf ("The table after deleting tha Max : ");
    for (i=0 ; i<n ; i++)
        printf("%d\t",ptr[i]);

}

int Min_ele(int *Min){
    int min = Min[0]  ;
    int pos ;
    int i ;
    for (i=0 ; i<n ; i++){
       if (Min[i] <= min){
        min = Min[i];
        pos = i ;
       }
    }
    return pos ;
}
void afficherafterdeltemin(int *ptr){
    int i ;
    printf (" \nThe Table after deleting The Min : ");
    for (i = 0 ; i<n ; i++){
        printf("%d \t",ptr[i]);
    }
}
void supprimermin (int *ptr){
    int position = Min_ele(ptr);
    int i ;
    n = n-1;
    for (i = position ; i < n ; i++)
        ptr[i] = ptr [i+1];
    afficherafterdeltemin (ptr);
}
void ajout (int *ptr){
    int ne, po,i,tmp,next ;
    printf (" \n ----------------------------------------------------------------------------------------------------------------------- \n");
    printf ("Entrer Le nombre a insirer :");
    scanf("%d",&ne);
    printf("Entrer La position (entre 0 et %d) :",ne);
    scanf("%d",&po);
    n = n + 1 ;
    tmp = ne ;
    for (i = po ; i<n ; i++){
        next = ptr[i];
        ptr [i] = tmp;
        tmp = next ;
    }
    affichageafteradding (ptr);
}
void affichageafteradding (int *ptr){
    int j ;
    printf("The Table after The adding : ");
    for (j = 0 ; j<n ; j++)
        printf ("%d \t",ptr[j]);
}

int main() {
    int *ptr ;
    ptr = NULL;
    char c ;
    do {
        printf ("A-saisie et affichage \n");
        printf ("B-Moyenne \n");
        printf ("C- Suppression du Max et affichage \n");
        printf ("D-Suppression du Min et affichage \n");
        printf ("E-Ajout d un entier a une position donnee \n");
        scanf(" %c",&c);
        switch (c){
        case 'A' :
            ptr = saisie();
            affichage(ptr);
            break ;
        case 'B' :
            if (ptr == NULL){
                printf ("Le tableau est vide veuiller le remplir dabord");
            }else{
             moyenne(ptr);
            }
            break ;
        case 'C' :
            supprimermax(ptr);
            break ;
        case 'D' :
            supprimermin(ptr);
            break ;
        case 'E' :
             ajout(ptr);
            break ;
        case 'Q' :
            exit (0);
            break ;
        }
        printf ("\nTaper enter pour reviens au menu\n");
        getch();
    } while (c != 'Q');
    return 0;
}
