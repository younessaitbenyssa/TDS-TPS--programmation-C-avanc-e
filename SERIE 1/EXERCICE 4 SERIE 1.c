#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ;
    printf ("Entrer le prix de produit : ");
    scanf("%f",&n);
    if (n <= 100){
        printf ("Le prix initial : %.2f DH \n",n);
        printf ("Remise : %.2f DH \n",30*n/100);
        printf ("Le prix final: %.2f DH \n",n - 30*n/100);
    } else if (n>100 && n<=200){
        printf ("Le prix initial : %.2f DH \n",n);
        printf ("Remise : %.2f DH \n",40*n/100);
        printf ("Le prix final: %.2f DH \n",n - 40*n/100);
    } else {
        printf ("Le prix initial : %.2f DH \n",n);
        printf ("Remise : %.2f DH \n",50*n/100);
        printf ("Le prix final: %.2f DH \n",n - 50*n/100);
    }
    return 0;
}
