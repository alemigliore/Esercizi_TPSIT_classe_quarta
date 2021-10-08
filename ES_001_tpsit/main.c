#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define DIM 10

/*
_Definisci un tipo di dato studente e caratterizzato da un nome, un cognome, e una matricola.
_Acquista i dati di 10 studenti e, per ogni studente inserito, proceda ad un inserimento ordinato (lo scopo dell' esercizio è ordinare
gli studenti durante il processo di inserimento degli stessi e non dopo averli inseriti tutti con un algoritmo di ordinamento).
_Stampi i dati degli studenti.
*/

typedef struct{
    char nome[MAX];
    char cognome[MAX];
    int matricola;
}Studente;

int main()
{
    Studente classe[DIM];
    int k;

    for(k=0; k<DIM; k++){
       printf("inserisci il nome: ");
       //gets(classe[k].nome);
       scanf("%s", &classe[k].nome);
       printf("inserisci il cognome: ");
       //gets(classe[k].cognome);
       scanf("%s", &classe[k].cognome);
       printf("inserisci il numero di matricola: ");
       scanf("%d", &classe[k].matricola);
    }
    for(k=0; k<DIM; k++){
        printf("nome: %s, cognome: %s, matricola: %d \n", classe[k].nome, classe[k].cognome, classe[k].matricola);
    }

    return 0;
}
