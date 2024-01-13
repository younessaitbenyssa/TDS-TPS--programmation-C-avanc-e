#include <stdio.h>
#include <stdlib.h>

int distance (char *ch1 , char *ch2){
	int x = 0 ;
	while (*ch1 != '\0' && *ch2 != '\0'){
		if (*ch1 != *ch2)
		x++;
		ch1 ++;
		ch2 ++;
	}
	printf ("La distance de Hamming Entre %s et %s est : %d \n",ch1,ch2,x);
	return x;
}
void distanceH_langage (char **langage){
	int n,i,j;
	int min = 7  ;
	printf ("Entrer la taille de tableau : ");
	scanf("%d",&n);
	langage = (char**)malloc(n*sizeof(char*));
	for (i=0 ; i<n ; i++){
		langage[i] =(char*)malloc(20*sizeof(char));
		printf ("Entrer la premiere chaine : ");
		scanf("%s",langage[i]);
	}
	printf ("Le contenue de tableau : \n");
	for (i=0 ; i<n ; i++){
		printf ("%s \n",langage[i]);
	}
	for (i=0 ; i<n ; i++){
		for (j=0 ; j<n ; j++){
			if (i==j)
			continue ;
			if (distance(langage[i],langage[j]) < min)
			min = distance(langage[i],langage[j]) ;
		}
	}
	printf ("La distance de Hamming de langage est : %d",min) ;
	for (i = 0; i < n; i++) {
        free(langage[i]);
    }
    free(langage);
}

int main() {
	char *ch1,*ch2;
	char **tabch;
	ch1 = malloc(20*sizeof(char));
	ch2 = malloc(20*sizeof(char));
	if (ch1 == NULL || ch2 == NULL)
	printf ("Allocation echoue ");
	printf ("Entrer la premiere chaine :  ");
	gets(ch1);
	printf ("Entrer la deuxime chaine : ");
	gets(ch2);
	distance (ch1,ch2);
	distanceH_langage (tabch);
	return 0;
}
