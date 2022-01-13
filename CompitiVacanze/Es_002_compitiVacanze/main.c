//ESERCIZIO 2 MIGLIORE ALESSANDRO
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    char c;
    struct nodo * next;
}Nodo;

Nodo *formList() {
    int n;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);
    Nodo* head;
    if(n> 0) {
        head=(Nodo*)malloc(sizeof(Nodo));
    } else {
        head=NULL;
    }
    Nodo * r=head;
    Nodo * c;
    for(int k=0; k< n; k++) {
        printf("Dammi il %d car: ", k+1);
        fflush(stdin);
        scanf("%c", &r->c);
        c=NULL;
        if(k<n-1) {
            c= (Nodo*)malloc(sizeof(Nodo));
        }
        r->next=c;
        r=c;
    }
    return head;
}

void stampaLista(Nodo * l) {
    if(l!=NULL) {
        stampaLista(l->next);
        printf("%c\n", l->c);
    }
}

int main() {
    Nodo * head= formList();
    printf("Stampa Inversa: \n");
    stampaLista(head);
    return 0;
}
