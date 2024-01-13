#include <stdio.h>
#include <stdlib.h>
void crypt (char message[]){
    int i ;
    for (i = 0 ; message [i] != '\0';i++ ){
        if ((message[i] >= 'A' && message[i]<='U')  || ((message[i] >= 'a' && message[i]<='u'))){
            message [i] = message[i] + 5 ;
        }else {
            message[i] =  message[i] - 21;
        }
    }
}
int main()
{
    char cMessage [50];
    printf ("Entrer le Message : ");
    gets(cMessage);
    crypt(cMessage);
    puts(cMessage);
    return 0;
}
