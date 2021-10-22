#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 30
#define MAX 40

/*
La videoteca "Ciak film" necessita di un programma che carichi la lista film in un array di struttura e
che stampi a video i 5 campi : numero, titolo film, genere, anno di uscita, disponibilità film
*/

typedef struct {
    char numero[MAX];
    char titoloFilm[MAX];
    char genere[MAX];
    char annoUscita[MAX];
    char dispo[MAX];
} Cinema;

void leggiFile(Cinema v[], int n, char nomeFilm[]) {

    FILE *fp;
    int conta=0;
    char line[100];
    char *pezzo;
    int i = 0;

    fp = fopen(nomeFilm, "r");

    while(fgets(line, 100, fp)){

        pezzo = strtok(line, ",");
        strcpy((v + i)->numero, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->titoloFilm, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->genere, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->annoUscita, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->dispo, pezzo);

        i++;
    }
    conta++;
    fclose(fp);

}

void stampaVettore(Cinema v[], int n){

    printf("LISTA FILM:");
    printf("\n");

    for(int k=0;k<n;k++){
        printf("%s      %s      %s      %s      %s", (v + k)->numero, (v + k)->titoloFilm, (v + k)->genere, (v + k)->annoUscita, (v + k)->dispo);
        printf("\n");
    }
}

void stampaNumRighe(Cinema v[], int n){
    int k;

    for(k = 0; k < n; k++){

    }
}
int main() {

    Cinema film[DIM];
    leggiFile(film,DIM, "film.txt");
    stampaVettore(film, DIM);
    stampaNumRighe(film, DIM);
    return 0;
}
