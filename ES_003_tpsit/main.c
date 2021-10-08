#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 30

/*
La videoteca "Ciak film" necessita di un programma che carichi la lista film in un array di struttura e
che stampi a video i 5 campi : numero, titolo film, genere, anno di uscita, disponibilità film
*/

typedef struct {
    char numero[DIM];
    char titoloFilm[DIM];
    char genere[DIM];
    char annoUscita[DIM];
    char dispo[DIM];
} Cinema;

void caricaVettore(Cinema v[], int n, char nomeFilm[]) {
    FILE *fp;
    int conta=0;
    char line[100];
    fp = fopen(nomeFilm, "r");
    for(int i=0;i<n;i++){
        fgets(line, 100, fp);
        char *pezzo = strtok(line, ",");
        while(pezzo != NULL){
            switch(conta){
            case 0:
                strcpy(v[i].numero, pezzo);
                break;
            case 1:
                strcpy(v[i].titoloFilm, pezzo);
                break;
            case 2:
                strcpy(v[i].genere, pezzo);
                break;
            case 3:
                strcpy(v[i].annoUscita, pezzo);
                break;
            case 4:
                strcpy(v[i].dispo, pezzo);
                break;
            }
            conta++;
            pezzo = strtok(NULL, ",");
        }
        conta=0;
    }
}

void stampaVettore(Cinema v[], int n){
    for(int k=0;k<n;k++){
        printf("%s      %s      %s      %s      %s", v[k].numero, v[k].titoloFilm, v[k].genere, v[k].annoUscita, v[k].dispo);
        printf("\n");
    }
}

int main() {
    Cinema film[DIM];
    caricaVettore(film,DIM, "film.txt");
    stampaVettore(film, DIM);
    return 0;
}
