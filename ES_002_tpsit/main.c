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
    float mediaIta;
    float mediaMate;
    float mediaInfo;
    float somma = 0;

    for(k = 0; k < DIM; k++){
        somma = somma + studente[k].ita;
    }
    mediaIta = somma / DIM;
    somma = 0;

    for(k = 0; k < DIM; k++){
        somma = somma + studente[k].mate;
    }
    mediaMate = somma / DIM;
    somma = 0;

    for(k = 0; k < DIM; k++){
        somma = somma + studente[k].info;
    }
    mediaInfo = somma / DIM;

    if(mediaIta > mediaMate && mediaIta > mediaInfo){
        printf("Italiano e' la disciplina con la media piu' alta \n");
    }

    if(mediaMate > mediaIta && mediaMate > mediaInfo){
        printf("Matematica e' la disciplina con la media piu' alta \n");
    }

    if(mediaInfo > mediaMate && mediaInfo > mediaIta){
        printf("Informatica e' la disciplina con la media piu' alta \n");
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
    }
    media(studente);

    return 0;
}

