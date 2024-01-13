#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct etudiant {
    char prenom [15];
    int CNE ;
    float notes[4],moyenne ;
}etudiant;

int main()
{
    int i,j ;
    float tab [2];
    float Max;
    float tmp ;
    char tmpp [15];
    int tmpcne ;
    etudiant T[2] ;
    for (i = 0 ; i<2 ; i++){
        printf ("Entrer le prenom d etudiant %d : ",i+1);
        scanf("%s",T[i].prenom);
        printf ("Entrer le CNE d etudiant %d : ",i+1);
        scanf("%d",&T[i].CNE);
        printf ("Entrer le notes d etudiant %d : \n",i+1);
        for (j=0 ; j<4 ; j++){
            printf ("La note de matieres %d : ",j+1);
            scanf("%f",&T[i].notes[j]);
        }
    }

    for (i=0 ; i<2 ; i++){
        printf ("Prenom : %s \n",T[i].prenom);
        printf ("CNE : %d \n",T[i].CNE);
        for (j=0 ; j<4 ; j++){
            printf ("La note de la matiere %d : %f\n",j+1,T[i].notes[j]);
        }
    }
    for (i=0 ; i<2 ; i++){
        T[i].moyenne = ((T[i].notes[0]+T[i].notes[1]+T[i].notes[2]+T[i].notes[3])/4) ;
    }
    Max = 0;
    int pos;
    for (i = 0 ; i<2 ; i++){
        if (T[i].moyenne > Max){
            Max = T[i].moyenne ;
            pos = i ;
        }
    }
    printf ("L etudiant qu est a la plus grande moyenne est : %s \n",T[pos].prenom);
    printf ("son CNE est : %d \n ",T[pos].CNE);
    printf ("son moyenne est : %.2f \n",T[pos].moyenne);
    for (i = 0 ; i<2 ; i++ ){
        for (j = i+1 ; j<2 ; j++){
            if (T[i].moyenne < T[j].moyenne){
                tmp = T[i].moyenne ;
                T[i].moyenne = T[j].moyenne ;
                T[j].moyenne = tmp;
                strcpy(tmpp, T[i].prenom);
                strcpy(T[i].prenom, T[j].prenom);
                strcpy(T[j].prenom, tmpp);
                tmpcne = T[i].CNE;
                T[i].CNE = T[j].CNE ;
                T[j].CNE = tmpcne ;

            }
        }
    }
    printf ("Les etudiants tries selon La moyenne : \n");
    for (i =  0 ; i<2 ; i++){
        printf ("------------------------------ Etudiant %d----------------------------------------------------------------------- \n",i+1);
        printf ("Prenom : %s \n",T[i].prenom);
        printf ("CNE : %d \n",T[i].CNE);
        printf ("moyenne : %.2f \n",T[i].moyenne);
    }
    return 0;
}
