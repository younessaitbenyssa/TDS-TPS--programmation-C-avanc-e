#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nb_occurence (char *T, int n , char c){
    int i,x = 0;
    int k [n];
    for ( i = 0 ; T[i] != '\0';i++){
        if (T[i] == c){
        k[x] = i ;
        x++;
        }
    }
    printf ("Le premier occurence est dans l indice : %d\n",k[0]);
    printf ("Le dernier occurence est dans l indice : %d\n",k[x-1]);
    return x;
}
int main()
{
    char *T;
    char c ;
    int n ;
    T = malloc (100*sizeof(char));
    printf ("Entrer votre chaine de caractere : ");
    gets(T);
    printf ("tapper une caractere : ");
    scanf("%c",&c);
    n = nb_occurence (T,strlen(T),c);
    printf ("'%c' occure %d fois ",c,n);
    return 0;
}
