#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,nbt = 0 , somme = 0 , min = __INT_MAX__ ,sommep = 0 , minp = __INT_MAX__  ;
    while (1){
        printf ("Entrer un nombre : ");
        scanf("%d",&n);
        if (n==999)
            break ;
        nbt ++ ;
        somme = somme + n ;
        if (n < min)
            min = n ;
        if (n >= 0 ){
           sommep = sommep + n;
           if (n < minp)
                minp = n;
        }
    }
    if (nbt == 0)
        printf ("Liste vide !!");
    else {
        printf ("Le nombre total de valeurs de la suite est : %d \n",nbt);
        printf ("La somme des valeurs lues est  : %d \n",somme);
        printf ("Le minimum est : %d \n",min);
        printf ("La somme des valeurs strictement positives est : %d \n",sommep);
        printf ("Le minimum des valeurs strictement positives est : %d ",minp);
    }
    return 0;
}
