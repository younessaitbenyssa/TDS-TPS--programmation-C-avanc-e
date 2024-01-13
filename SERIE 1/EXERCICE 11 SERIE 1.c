#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n , choise;
    printf ("Entrer un entier :");
    scanf("%d",&n);
    printf ("La valeur est : %d \n",n);
    do {
        printf ("1.Ajouter 2 \n");
        printf ("2.Multiplier par 3 \n");
        printf ("3.Soustraire 5 \n");
        printf ("4. Quitter \n");
        scanf("%d",&choise);
        switch (choise){
        case 1 :
            printf ("%d + 2 = %d \n",n,n+2);
            break ;
        case 2 :
            printf ("%d * 3 = %d \n",n,n*3);
            break ;
        case 3 :
            printf ("%d - 5 = %d \n",n,n-5);
            break ;
        case 4 :
            exit(0);
            break ;
        }
        printf ("Tapper un button pour afficher le menu ! \n");
        getch();
    }while(choise != 4);
    return 0;
}
