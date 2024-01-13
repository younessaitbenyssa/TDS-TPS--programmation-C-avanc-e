#include <stdio.h>
#include <stdlib.h>

void initialisation (int iNB_jours[]){
     int i ;
     for (i = 1 ; i <= 12 ; i++){
     if (i == 2){
        iNB_jours [i] = 28 ;
     } else if ((i%2 == 0 && i<=7) || (i%2 != 0 && i > 7)){
         iNB_jours [i] = 30 ;
     } else {
         iNB_jours [i] = 31 ;
       }
     }
}
void Imprimer (int iNB_jours[]){
    int i ;
    for (i = 1 ; i<= 12 ; i++){
        printf ("Mois %d : %d jours \n",i, iNB_jours[i]);
    }

}
int main()
{
    int iNB_jours [12];
    initialisation(iNB_jours);
    Imprimer(iNB_jours);
    return 0;
}
