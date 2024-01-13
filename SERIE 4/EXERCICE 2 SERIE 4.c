#include <stdio.h>
#include <stdlib.h>
struct date {
int jour;
char mois[10];
int annee;
};
struct employe {
char nom[15], prenom[15];
struct date date_naissance, date_embauche;
};
int main()
{
   int i ;
   struct employe name[4] ,prenom [4], date_n[4] , date_em[4] ;
   //struct date day , month , year ;
   for (i=0 ; i<4 ; i++){
    printf ("Entrer le nom d employe %d : ",i+1);
    scanf("%s",name[i].nom);
    printf ("Entrer le prenom d employe %d : ",i+1);
    scanf("%s",prenom[i].prenom);
    printf ("La date de naissance de personne %d \n",i+1);
    printf ("Entrer le jour : ");
    scanf("%d",&date_n[i].date_naissance.jour);
    printf ("Entrer le mois : ");
    scanf("%s",date_n[i].date_naissance.mois);
    printf ("Entrer l annee de naissance : ");
    scanf("%d",&date_n[i].date_naissance.annee);
    printf ("La date d Embauche de personne %d : \n",i+1);
    printf ("Entrer le jour : ");
    scanf("%d",&date_em[i].date_embauche.jour);
    printf ("Entrer le mois : ");
    scanf("%s",date_em[i].date_embauche.mois);
    printf ("Entrer l annee de naissance : ");
    scanf("%d",&date_em[i].date_embauche.annee);

   }
   for (i=0 ; i<4 ; i++){
    printf ("NOM de personne %d : %s \n",i+1,name[i].nom);
    printf ("PRENOM de personne %d : %s \n",i+1,prenom[i].prenom);
    printf ("Date de naissance de personne  %d : %d %s %d \n",i+1,date_n[i].date_naissance.jour,date_n[i].date_naissance.mois,
            date_n[i].date_naissance.annee);
    printf ("Date d embauche de personne %d:  %d %s %d \n",i+1,date_em[i].date_embauche.jour,date_em[i].date_embauche.mois,
            date_em[i].date_embauche.annee);
   }
    return 0;
}
