#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf ("Entrer le nombre des photocopies a effectue : ");
    scanf("%d",&n);
    if (n <= 10)
        printf ("Le prix total est : %d DH",n * 1);
    else if (n > 10 && n <= 20)
        printf ("Le prix total est : %.2f Dh",n * 0.6);
    else
        printf ("Le prix total est : %.2f Dh",n * 0.4);
    return 0;
}
