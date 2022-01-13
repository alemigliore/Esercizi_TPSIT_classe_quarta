//ESERCIZIO 1 MIGLIORE ALESSANDRO

#include <stdio.h>
#include <stdlib.h>
#define DIM 7
#define MAX 50

// Prelievo dati dallo stack
char pop(char data) {
    if(!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Impossibile prelevare dato, Stack vuoto.\n");
    }
}

// Inserimento dati nello stack
void push(char data) {
    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Impossibile inserire dati, Stack Pieno.\n");
    }
}


void inserisciDatiVet(int vet[]) {
    int k=0,elemento;

    for(k=0; k<DIM; k++) {
        printf("inserisci l'elemento %d :",k);
        scanf("%d",&elemento);

        vet[k]=elemento;
    }
}

void ordinaPila(int vet[]) {
    int k=0;

    for(k=0; k<DIM; k++) {
        if(vet[k]%2==0) {
            push(vet[k]);
        }
    }
    for(k=0; k<DIM; k++) {
        if(vet[k]%2!=0) {
            push(vet[k]);
        }
    }
}


void stampaPila() {
    int elemento;
    while(top>=0) {
        elemento = pop(stack[top]);
        printf(" %d \n",elemento);
    }
}

void main() {
    int stack[50];
    int top = -1;
    int vet[DIM];

    inserisciDatiVet(vet);
    ordinaPila(vet);
    stampaPila();

    return 0;
}
