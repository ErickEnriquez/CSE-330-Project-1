#include <stdio.h>
#include <stdlib.h>
#include "q.h"

struct Node* NewItem();
struct Queue* InitQueue(struct Queue*);
void AddQueue(struct Queue* , struct Node*);
struct Node* DelQueue(struct Queue*);
void RotateQ(struct Node*);

int main(){
    printf("hello world");


}

//returns a pointer to a new q-element
struct Node* NewItem(){
    struct Node* item = (struct Node*)malloc(sizeof(struct Node));
    return item;
}

struct Queue* InitQueue(struct Queue*  head){
    struct Queue* front = (struct Queue*)malloc(sizeof(struct Queue));
    front = NULL;
    return front;
};

void AddQueue(struct Queue* head , struct Node* item){
    
}

struct Node* DelQueue(struct Queue* head){
    if(head == NULL){
        return NULL;
    }
        struct Node* temp = head->head;
        head = head->;
        return temp;
    
)


