#include <stdio.h>
#include <stdlib.h>
void formalismepointeur (){
    float **t;
    float somme ;
    int i , j ;
    printf ("\n++++++++++++++++++++++++++++++++++++ AVEC POINTEUR++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    t = (float**)malloc(3*sizeof(float*));
     for (i=0 ; i<3 ; i++){
        t[i]=(float*)malloc(4*sizeof(float));
    }
    printf ("Veuillez remplir les champs de la matrice : \n");
    for (i=0 ; i<3 ; i++){
        for (j=0 ;j<4 ; j++){
            printf("t[%d][%d] = ",i+1 , j+1);
            scanf("%f",*(t+i)+j);
        }
    }
    for (i=0 ; i<3 ; i++){
        for (j=0 ; j<4 ; j++){
            somme = somme + *(*(t+i)+j);
        }
    }
    printf ("La somme est : %.2f",somme);
}

int main()
{
    // avec les tableau
    float t[3][4];
    float  somme = 0;
    int i , j  ;
    for (i=0 ; i<3 ; i++){
        for (j=0 ; j<4 ; j++){
            printf ("t[%d][%d] = ",i+1 , j+1);
            scanf("%f",&t[i][j]);
        }
    }
    for (i = 0 ; i<3 ; i++){
        for (j=0 ; j<4 ; j++){
          somme = somme + t[i][j];
        }
    }
    printf ("%.2f",somme);
    // avec les pointeurs
    formalismepointeur();
    return 0;
}
