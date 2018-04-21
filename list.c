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

void push(List *l, int data){
    Node *novo = (Node*)malloc(sizeof(Node));
    
    if(l->head == NULL){
        novo->next = NULL;
        novo->prev = NULL;
        l->tail = novo;
        l->head = novo;
    }
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
            printf("\nNada a remover");
            return;
        }else{
            if(l->head == l->tail){//apenas um elemento na lista
                l->head = NULL;
                l->tail = NULL;
            }
            else if(temp == l->head){//pimeiroelemento
                l->head = l->head->next;
                l->head->prev = NULL;
                
            }
            else if(temp == l->tail){//ultimo elemento
                l->tail = l->tail->prev;
                l->tail->next = NULL;
            }
            else{//no meio
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
            }
        free(temp);
        }
}


int main(){
    List *l1 = createList();

    push(l1, 95);
    search(l1, 95);
}