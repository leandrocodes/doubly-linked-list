#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int data;
	struct node *next;
    struct node *prev;
}Node;

typedef struct list {
	Node *head;
    Node *tail;
}List;

List *createList(){
    List *list = (List*) malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void search(List *l, int data){
    Node *tempI = l->head;
    Node *tempF = l->tail;

    if(l->head == NULL){
        printf("\nLista vazia");
        return NULL;
    } else{
        do {
            if (tempI->data == data){
                printf("\nEncontrou");
                return tempI;
            }
            tempI = tempI->next;
            tempF = tempF->prev;
        } while (tempI != tempF &&  tempI->next != tempF);
    }

}