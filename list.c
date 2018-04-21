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

Node *search(List *l, int data){
    Node *tempI = l->head;
    Node *tempF = l->tail;

    if(l->head == NULL){
        printf("\nLista vazia");
        return NULL;
    } 
        do {
            if (tempI->data == data){
                printf("\nEncontrou");
                return tempI;
            }
            if (tempF->data == data){
                printf("\nEncontrou");
                return tempF;
            }
            tempI = tempI->next;
            tempF = tempF->prev;
        } while (tempI != tempF &&  tempI->next != tempF);
}

void delete(List *l, int data){
    Node *temp = search(l, data);

        if(temp == NULL){
            printf("Nada a remover\n");
            return
        }else{
            if(l->head == l->tail){//apenas um elemento na lista
                l->head = NULL;
                l->tail = NULL;
                free(temp);
            }
            if(temp == l->head){//pimeiroelemento
                l->head = l->head->next;
                l->head->prev = NULL;
                free(temp);
            }
            if(temp == l->tail){//ultimo elemento
                l->tail = l->tail->prev;
                l->tail->prov = NULL;
                free(temp);
            }
            else{//no meio
                
            }
        }
}