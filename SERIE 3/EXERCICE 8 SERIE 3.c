#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab [300];
    int tab2 [300];
    int n , i,j=1,z=0;
    printf ("donner la taille de tableau : ");
    scanf("%d",&n);

    for (i=0 ; i<n; i++){
        printf ("tab[%d] = ",i+1);
        scanf("%d",&tab[i]);
    }
    int k = tab [0];
    for (i=0 ; i<n ; i++){
        if (k == tab[i+1]){
            j++ ;
        } else {
            tab2[z] = j;
            tab2[z+1] = k;
            z = z+2;
            k = tab[i+1];
            j = 1 ;
        }
    }
    for ( i = 0 ;i <z ; i++ )
        printf ("%d",tab2[i]);
    return 0;
}
