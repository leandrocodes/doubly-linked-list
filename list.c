#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int data;
	struct node *next;
    struct node *previous;
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
        while (tempI != tempF &&  tempI->next != tempF){
            
        }
    }

}