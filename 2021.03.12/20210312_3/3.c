#include "3.h"
void addHead(int a){
    t_node *new = head;
    head = (t_node *)malloc(sizeof(t_node));
    if(!head){
        exit(1);
    }
    head->data = a;
    head->next = new;
}

void printAfter(t_node *curr){
    t_node *temp = curr;
    while (temp != NULL){
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

t_node *findElement(int pos){
    t_node *run = head;
    t_node *searched = head;
    int count = 1;
    while(run->next != NULL){
        if(count < pos){
            count++;            
        }else{
            searched = searched->next;
        }
        run = run->next;
    }
    return searched;
}

void printElement(t_node *p){
    printf("%d\n", p->data);
}

t_node *head;