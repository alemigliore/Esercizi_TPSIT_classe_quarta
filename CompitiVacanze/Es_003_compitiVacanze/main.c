//ESERCIZIO 3 MIGLIORE ALESSANDRO

#include <stdio.h>
#include <stdlib.h>
#define DIM 20
#define MAX_CHAR 256
#define N_PRESS 2
#define N_TEMP 3

typedef struct
{
    char nome[MAX_CHAR];
    char cognome[MAX_CHAR] ;
    int matricola;
    int pressione[N_PRESS];
    int temperature[N_TEMP];
    float parcella;
} Paziente;

void addPaziente(Paziente v[], int k)
{
    if(k< DIM){
        printf("Dammi il nome: ");
        scanf("%s", v[k].nome);
        printf("Dammi il cognome: ");
        scanf("%s", v[k].cognome);
        printf("Dammi la matricola: ");
        scanf("%d", &v[k].matricola);
        printf("Dammi le pressioni(2): ");
        scanf("%d %d", &v[k].pressione[0],&v[k].pressione[1]);
        printf("Dammi le temperature(3): ");
        scanf("%d %d %d", &v[k].temperature[0],&v[k].temperature[1],&v[k].temperature[2]);
        printf("Dammi la parcella: ");
        scanf("%f", &v[k].parcella);
    }else{
        printf("Non ci sono posti disponibili nella clinica\n");
    }
}

float getSomma(Paziente v[], int n)
{
    float somma=0;
    for(int k=0; k< n; k++)
    {
        somma+=v[k].parcella;
    }
}

int main()
{
    Paziente rossi;
    Paziente clinica[DIM];
    int nPaz=0;
    addPaziente(clinica, nPaz);
    nPaz++;
    printf("Saldo totale: %.2f", getSomma(clinica, nPaz));

    return 0;
}
