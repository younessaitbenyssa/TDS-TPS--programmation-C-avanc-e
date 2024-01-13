#include <stdio.h>
#include <stdlib.h>
int recherch (float *t ,int taille ,float valch){
    int i ;
    for ( i=0 ; i<taille ;i++){
        if (t[i] == valch){
            return i ;
        }
    }
    return -1;
}
int main()
{
    float t[300];
    int n ,i,ver;
    float val ;
    printf ("entrer la taille de votre tableau : ");
    scanf("%d",&n);
    for (i = 0 ; i< n ;  i++){
        printf ("t[%d]  =  ",i+1);
        scanf("%f",&t[i]);
    }
    printf ("veuiller entrer la valeur a chercher : ");
    scanf("%f",&val);
    ver = recherch(t,n,val);
    if (ver == -1)
        printf ("%.f n'existe pas dans le tableau !",val);
    else
        printf ("la position de %.2f dans les tableau est : %d",val,ver);

    return 0;
}
