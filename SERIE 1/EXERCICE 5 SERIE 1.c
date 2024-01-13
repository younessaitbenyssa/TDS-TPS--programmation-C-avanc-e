#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n, x = 0  ;
    printf ("Entrer un nombre : ");
    scanf("%d",&n);
    for (i = 2 ; i< n ; i++){
        if (n%i == 0){
            x = 1;
            break ;
        }
    }
    if (x == 0)
        printf ("%d est un nombre premier !",n);
    else
        printf ("%d nombre non premier !",n);
    return 0;
}
