#include <stdio.h>
#include <stdlib.h>

/*Usa una pila per l'inserimento dei dati e stampa solamente i numeri pari e li sommi stampando il risultato
*/

typedef struct nodo
{
    int num;
    struct nodo* next;
} Nodo;

Nodo* push(Nodo * l, int num)
{
    Nodo* t=(Nodo*)malloc(sizeof(Nodo));
    if(l!=NULL)
    {
        t->num=num;
        t->next=l;
    }
    else
    {
        t->num=num;
        t->next=NULL;
    }
    return t;
}

Nodo* pop(Nodo * l)
{
    if(l!=NULL)
    {
        l=l->next;
    }
    return l;
}

void stampaLista(Nodo * h, int*somma)
{
    if(h!=NULL)
    {
        if(h->num%2==0)
        {
            *somma+=h->num;
            printf("%d",h->num);
        }
        stampaLista(h->next, somma);
    }
}

int main()
{
    Nodo * head=NULL;
    head=push(head, 5);
    head=push(head, 7);
    int somma=0;
    stampaLista(head,&somma);
    head=pop(head);
    printf("%d", somma);
    return 0;
}
