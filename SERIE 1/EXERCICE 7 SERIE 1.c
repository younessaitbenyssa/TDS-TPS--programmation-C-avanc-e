#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    // partie 1 : 
    int i, T[20];
    printf ("Entrer les 20 nombres : \n");
    for (i=0 ; i<20;i++){
        printf ("nb %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf ("Le carre des nombres pairs : ");
    for (i=0 ; i<20 ; i++){
        if (T[i]%2 == 0){
            printf ("%d \t",T[i]*T[i]);
        }
    }*/
    // partie 2 : 
    int n,t = 0 , p = 0  ;
    while (1){
        printf ("Entrer un nombre : ");
        scanf("%d",&n);
        if (n == 100)
            break ;
        t++;
        if (n%2 == 0){
          p++;
          printf ("Le nombre est paire son carre est : %d \n",n*n)  ;
        }

    }
    printf ("Tu as taper 100 ! \n");
    printf ("Le nombre total des entrees est : %d \n",t);
    printf ("Le nombre d entrees pairs est : %d",p);
    return 0;
}
