/*
Sia data una struttura dati dinamica di tipo Node semplicemente concatenata.
Ogni nodo della Node contiene un numero intero come valore.  Si scriva la funzione che, dato un vettore di
N numeri interi, restituisce la Node contenente gli N elementi del vettore;
l’elemento di indice 0 va in testa alla Node, ecc.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
} Node;

Node *createNode(int val, Node *nodo){
    Node *succ = (Node*)malloc(sizeof(Node));

    if(nodo != NULL){
        nodo->next = succ;
    }
    succ->num = val;
    succ->next = NULL;
    return succ;

}

int main() {

    int array[] = {1,2,3,4,5,6};

    Node *head = NULL;
    Node *cur = NULL;

    for(int k = 0; k < 6; k++){
        cur = createNode(array[k], cur);
        if(head == NULL){
            head = cur;
        }
    }

    cur = head;
    printf("ARREY: ");
    while(cur != NULL){
        printf("%d ", cur->num);
        cur = cur->next;
    }
    printf("\n");
    return 0;
}
