#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b ;
    char c ;
    char o ;
    printf("Entrer le premier entier : ");
    scanf("%d",&a);
    printf("Entrer le deuxieme entier : ");
    scanf("%d",&b);
    do {
        printf("Entrez l'operation a effectuer : ");
        scanf(" %c", &c);
    } while ((c == '/' && b == 0) || (c != '+' && c != '-' && c != '*' && c != '/' && c != '%'));
    switch (c) {
    case '+':
        printf ("%d + %d = %d",a,b,a+b);
        break ;
    case '-':
        printf ("%d - %d = %d",a,b,a-b);
        break ;
    case '%':
        printf ("%d modulo %d = %d",a,b,a%b);
        break ;
    case '*':
        printf ("%d * %d = %d",a,b,a*b);
        break ;
    case '/':
        printf ("%d / %d = %.2f",a,b,(float)a/b);
        break ;
    }



    return 0;
}
