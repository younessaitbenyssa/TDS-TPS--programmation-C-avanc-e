#include <stdio.h>
#include <stdlib.h>

void affichermatrice(int M[5][5]){
    int i , j;
    for (i = 0; i<5 ; i++ ){
        for (j = 0; j<5 ; j++){
            printf("%d \t",M[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int i,j ;
    int M[5][5];
    printf ("Remplir les champs de la matrice : \n");
    for (i = 0 ; i< 5 ; i++){
        for (j = 0; j<5 ; j++){
        printf("M[%d][%d] = ", i , j);
        scanf("%d",&M[i][j]);
        }
    }
     affichermatrice (M);
    return 0;
}
