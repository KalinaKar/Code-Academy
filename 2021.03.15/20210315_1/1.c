#include "1.h"

void addHead(int a){
    node_t *new = head;
    head = (node_t *)malloc(sizeof(node_t));
    if (!head){
        exit(1);
    }
    head->data = a;
    head->next = new;
}

int pop(int *n){
    if (head)    {
        *n = head->data;
        node_t *p = head;
        head = head->next;
        free(p);
        return 1;
    }else{
        return 0;
    }
}

node_t *head;