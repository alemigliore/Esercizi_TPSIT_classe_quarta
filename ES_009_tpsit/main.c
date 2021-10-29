#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define L1 20
#define L2 40

/*
Si scriva un programma che chieda all’utente 2 stringhe e concateni la
seconda alla fine della prima, NON si usi la funzione strcat della libreria
standard, si usino i puntatori e non la notazione vettoriale. Attenzione a
terminarla con il carattere ‘\0’.
*/

void cat(char * s1, char *s2)
{
    int n1=strlen(s1);
    int n2=strlen(s2);
    for(int k=0; k< n2; k++)
    {
        *(s1+n1+k)= *(s2+k);
    }
    *(s1+n1+n2)='\0';
}

int main()
{

    char * s1= (char *) malloc(L2 * sizeof(char));
    char * s2= (char *) malloc(L1 * sizeof(char));
    printf("Stringa 1: ");
    scanf("%s", s1);
    printf("Stringa 2: ");
    scanf("%s", s2);
    cat(s1, s2);
    printf("Nuova stringa: %s", s1);

    return 0;
}
