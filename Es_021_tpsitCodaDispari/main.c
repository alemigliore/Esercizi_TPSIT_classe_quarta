#include <stdio.h>
#include <stdlib.h>

/*Usa una coda per l'inserimento dei dati e stampa solamente i numeri dispari e li sommi stampando il risultato*/

typedef struct nodo
{
    int num;
    struct nodo *next;
}
Nodo;

void enqueue(Nodo ** tail,Nodo** head, int num)
{
    Nodo * h= *head;
    Nodo * t= *tail;
    if(t!=NULL && h!=NULL)
    {
        t->next=(Nodo*)malloc(sizeof(Nodo));
        t=t->next;
        t->num=num;
        t->next=NULL;
    }
    else
    {
        t=(Nodo*)malloc(sizeof(Nodo));
        h=t;
        t->num=num;
        t->next=NULL;
    }
    *head=h;
    *tail=t;
}

void dequeue(Nodo ** head)
{
    Nodo * h=*head;
    if(h!=NULL)
    {
        h=h->next;
    }
    *head=h;
}

void stampaLista(Nodo * h, int*somma)
{
    if(h!=NULL)
    {
        if(h->num%2!=0)
        {
            *somma+=h->num;
            printf("%d",h->num);
        }
        stampaLista(h->next, somma);
    }
}

int main()
{
    Nodo * tail=NULL;
    Nodo* head=NULL;

    enqueue(&tail,&head,5);
    enqueue(&tail,&head,5);
    enqueue(&tail,&head,5);
    dequeue(&head);
    dequeue(&head);
    int somma=0;
    stampaLista(head, &somma);
    printf("\n%d", somma);

    return 0;
}
