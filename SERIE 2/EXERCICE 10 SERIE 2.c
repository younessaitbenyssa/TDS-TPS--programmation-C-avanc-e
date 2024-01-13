#include <stdio.h>
#include <stdlib.h>

void distance (char *ch1 , char *ch2){
	int x ;
	while (*ch1 != '\0' && *ch2 != '\0'){
		if (*ch1 != *ch2)
		x++;
		ch1 ++;
		ch2 ++;
	}
	printf ("La distance de Hamming Entre %s et %s est : %d",ch1,ch2,x);
}

int main() {
	char *ch1,*ch2;
	ch1 = malloc(20*sizeof(char));
	ch2 = malloc(20*sizeof(char));
	if (ch1 == NULL || ch2 == NULL)
	printf ("Allocation echoue ");
	printf ("Entrer la premiere chaine :  ");
	gets(ch1);
	printf ("Entrer la deuxime chaine : ");
	gets(ch2);
	distance (ch1,ch2);
	return 0;
}
