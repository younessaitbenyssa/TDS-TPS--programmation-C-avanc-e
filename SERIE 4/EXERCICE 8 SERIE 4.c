#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int nb_elem;
	int *tab;
}TypeTableau;
TypeTableau CreationTableau (int n){
	TypeTableau TAb ;
	TAb.nb_elem = n ;
	TAb.tab = (int*)malloc (n*sizeof(int));
	if (TAb.tab == NULL)
		printf ("Allocation echoue !!");
	return TAb ;
}
void DestructionTbleau(TypeTableau T){
	free(T.tab);
}
void SimpleLectureTableau (TypeTableau T){
	int i ;
	for (i=0 ; i<T.nb_elem; i++){
		printf("tab[%d] = ",i+1);
		scanf("%d",&T.tab[i]);
	}
}
void Affichage (TypeTableau T){
	int i ;
	for (i=0 ; i<T.nb_elem ; i++){
		printf ("%d \t",T.tab[i]);
	}
}
TypeTableau DoubleTableau(TypeTableau T){
	TypeTableau newtab ;
	int i ;
	newtab.nb_elem = T.nb_elem ;
	newtab.tab = (int*)malloc(newtab.nb_elem*sizeof(int));
	if (newtab.tab == NULL){
		printf ("Alloction echoue");
	}
	for (i=0 ; i<newtab.nb_elem ; i++){
		newtab.tab[i] = 2*T.tab[i];
	}
	return newtab;
}
int main() {
	int n ; 
	printf ("Entrer la taille du tabeleau : ");
	scanf("%d",&n); 
	TypeTableau tableau = CreationTableau(n);
	DestructionTbleau(tableau);
	SimpleLectureTableau (tableau);
	printf ("\n------------------------------------ Tableau initial --------------------------------------------\n");
	Affichage (tableau);
	TypeTableau tableau2 = DoubleTableau (tableau);
	printf ("\n------------------------------------ Tableau apres le calcul de double ---------------------------\n");
	Affichage(tableau2);
	return 0;
}
