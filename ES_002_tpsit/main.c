/*alessandro migliore*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define DIM 3

/*
Definire una struttura per memorizzare  i dati degli studenti
di una classe e dei voti nelle varie materie: Italiano, Matematica e Informatica.
Si scriva una funzione in c, che a partire da un vettore di studenti fornito come argomento,
determini la disciplina con la media più alta.
*/

typedef struct{
    char nome[MAX];
    char cognome[MAX];
    float ita;
    float mate;
    float info;
}voti;

float media(voti studente[]){
    int k;
    float medIta, medMate, medInfo;
    float somIta = 0;
    float somMate = 0;
    float somInfo = 0;

    for(k = 0; k < DIM; k++){
        somIta = somIta + studente[k].ita;
        somMate = somMate + studente[k].mate;
        somInfo = somInfo + studente[k].info;
    }
}

int main()
{
    voti studente[DIM];
    int k, i;
    float med;

    for(k=0; k<DIM; k++){
       printf("inserisci il nome: ");
       scanf("%s", &studente[k].nome);
       printf("inserisci il cognome: ");
       scanf("%s", &studente[k].cognome);
       printf("inserisci un voto di italiano: ");
       scanf("%d", &studente[k].ita);
       printf("inserisci un voto di matematica: ");
       scanf("%d", &studente[k].mate);
       printf("inserisci un voto di informatica: ");
       scanf("%d", &studente[k].info);

    med = media(studente);
    printf("%f", somIta);

    }
    for(k=0; k<DIM; k++){
        //printf("nome: %s, cognome: %s, media maggiore: %d \n", classe[k].nome, classe[k].cognome, classe[k].matricola);
    }

    return 0;
}

