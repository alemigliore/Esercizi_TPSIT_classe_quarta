/*
Alessandro Migliore

Scrivere un programma per leggere e stampare array bidimensionale di float. Il
programma richiede all’utente il numero di righe e di colonne dopo di che richiede ad
uno ad uno gli elementi da inserire nell' array.  Il programma inserisce in un secondo
array unidimensionale i numeri più grandi di ogni riga. Allocare e deallocare l’array
restituito.
*/

#include <stdio.h>
#include <stdlib.h>
#define LUNG 20

int main()
{
    float **mat;
    int nc, nr;

    printf("Inserisci il numero di righe:"); //chiedo in input il numero delle righe della matrice
    scanf("%d", &nr);

    printf("Inserisci il numero di colonne:"); //chiedo in input il numero delle colonne della matrice
    scanf("%d", &nc);

    mat = (float **) malloc(nr * sizeof(float*)); //usando la malloc alloco dinamicamente uno spazio di memoria alla matrice
    for(int k = 0; k < nr; k++){
        mat[k] = (float **)malloc(nc * sizeof(float*));
    }

    for(int r = 0; r < nr; r++){
        for(int c = 0; c < nc; c++){
            printf("Inserisci l'elemento della matrice: ", r, c); //inserisco in input i numeri della matrice
            scanf("%d", &mat[r][c]);
        }
    }

    free(mat); //disalloco l' area di memoria allocata in precedenza

    float *v = (int *) malloc(LUNG * sizeof(int)); //usando la malloc alloco dinamicamente un' area di memoria al vettore
    float max = 0;

    for(int r = 0; r < nr; r++){
        for(int c = 0; c < nc; c++){
            if(mat[r][c] > max){    //inserisco il valore massimo di ogni riga nel vettore
                mat[r][c] = max;
                max = *(v + r);
            }
        }
        printf("%.2f ", *(v + r)); //stampo il vettore
    }

    free(v);

    return 0;
}
