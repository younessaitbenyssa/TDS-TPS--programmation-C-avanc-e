#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * ch;
    ch = malloc(300*sizeof(char));
    if (ch == NULL){
        printf ("Error en allocation !!");
        return 1;
    }
    printf ("Entrer votre phrase : ");
    gets(ch);
    while (*ch != '\0'){
        if (*ch == ' ' || *ch == '\t')
            *ch = *(ch + 1) ;
        else
            break ;
        ch ++ ;
    }
    puts (ch);
    return 0;
}
