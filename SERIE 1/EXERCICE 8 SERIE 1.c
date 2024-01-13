#include <stdio.h>
#include <stdlib.h>

int main()
{
	// premier partie 
    int i , j , esp = 1 , z;
    for (i = 6 ; i>0 ; i--){
       for (j = i ; j>0 ; j--){
        printf ("%d",j);
       }
       printf ("\n");
    }
    // deuxieme partie 
    for (i = 0 ; i < 10 ; i++){
        for (j = i ;j<10 ; j++ ){
            printf ("%d",i);
        }
        printf ("\n");
        for (z = 0; z<esp ; z++)
            printf (" ");
        esp++;
    }
    return 0;
}
