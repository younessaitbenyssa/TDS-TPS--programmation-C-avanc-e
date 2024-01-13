#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addition (int a , int b){
    printf ("%d + %d = %d",a,b,a+b);
}
void soustraction (int a , int b){
    printf ("%d - %d =  %d",a,b,a-b);
}
void modulo (int a , int b){
    printf ("%d modulo %d =  %d",a,b,a%b);
}
void multiplication (int a , int b){
    printf ("%d * %d = %d",a,b,a*b);
}
void devision(int a , int b){
    if (b != 0)
    printf ("%d / %d = %.2f",a,b,(float)a/b);
    else
        printf ("Impossible d'effectuer une devision sur 0 ");
}

int main()
{
    int a ,b ;
    char c ;
    char ling[4];
    char o ;
    while(1) {
    do {
    	printf ("Entrer l'operation a effectue (ex : 2+5) : ");
        scanf("%s",ling);
        a = ling[0] - '0';
        b = ling[2] - '0';
        c = ling [1];
    } while ((c == '/' && b == 0) || (c != '+' && c != '-' && c != '*' && c != '/' && c != '%') || strlen(ling) != 3);

    switch (c) {
    case '+':
        addition (a,b);
        break ;
    case '-':
        soustraction (a,b);
        break ;
    case '%':
        modulo (a,b);
        break ;
    case '*':
        multiplication (a,b);
        break ;
    case '/':
        devision (a,b);
        break ;
    }
    printf ("\nVoulez vous recommencer 'O' ou 'N' : ");
    scanf (" %c",&o);
    if (o != 'O' && o != 'o')
        break ;
   }
    return 0;
}
