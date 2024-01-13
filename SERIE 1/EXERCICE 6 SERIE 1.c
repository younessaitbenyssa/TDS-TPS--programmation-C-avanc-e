#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,i ;
    printf ("veuillez entrer un nombre : ");
    scanf("%d",&n);
    if (n%2 == 0){
        printf ("Les nombres paires inferieur a %d sont : ",n);
        for (i = 1 ; i<n ;i++){
            if (i%2 == 0)
                printf ("%d \t",i);
        }

    }
    return 0;
}
