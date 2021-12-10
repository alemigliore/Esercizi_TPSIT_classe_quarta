/*
Alessandro Migliore

Scrivere un programma che legga da file verifica.dat:
- Numero di elementi dell’array di float (prima riga)
- Riempie un array con i valori float contenuti dalla seconda riga in poi
*/

#include <stdio.h>
#include <stdlib.h>
#define LUNG 20

void leggiFile(int v[], int n, char nomeFile[]) {

    FILE *fp;
    int k = 0;

    fp = fopen(nomeFile, "r");
    if(fp == NULL) {
        printf("IL FILE NON ESISTE\n");
    } else {
        k = 0;
        while(k < n && (fscanf(fp,"%.2f", (v + k)) != EOF)) {
            k++;
        }
        *n = k;
        fclose(fp);
    }

    fclose(fp);

}

void stampaVettore(Cinema v[], int n){ //stampo il vettore contenente i float presenti nel file

    for(int k=0;k < n;k++){
        printf("%.2f", *(v + k))
        printf("\n");
    }
}

int contaRighe(char nomeFie[]){ //conto le righe presenti nel file .dat
    FILE *fp;
    char line[100];
    int n = 0;

    fp = fopen(nomeFilm, "r");

    while(fscanf(fp, "%s", line) != EOF){
        n++;
    }
    return n;
}

int main()
{
    float *v = (int *) malloc(LUNG * sizeof(int)); //usando la malloc alloco dinamicamente un' area di memoria al vettore

    leggiFile(v, LUNG, "verifica.dat"); //richiamo la funzione leggiFile

    stampaVettore(v, LUNG);
    contaRighe("verifica.dat");


    return 0;
}
