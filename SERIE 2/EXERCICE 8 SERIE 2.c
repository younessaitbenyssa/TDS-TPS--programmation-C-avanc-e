#include <stdio.h>
#include <string.h>
void saisie(char name[])
{
    printf("Entrer un nom (sans utiliser les caracteres blancs): ");
    gets(name);
}
int check(char name[]){
    int i=0;
    while (name[i]!='\0')
    {
        i++;
    }

return i;
}


int main()
{

    char name[20];
    int count=0;
    while (1)
    {
        saisie(name);
        if (strcmp(name, "fin") == 0)
        {
            break;
        }
        if (check(name)>=10)
        {
            count++;
        }

        printf("\nLe nom est: %s \n", name);

    }
    printf("\nnumber of 10 characters words : %d",count);
}
