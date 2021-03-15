#include "1.h"

void init(){
    start = NULL;
}

int add(int data){
    t_node *p = start;
    start = (t_node *)malloc(sizeof(t_node));
    if (!start)
        return -1;
    start->data = data;
    start->next = p;
    return 0;
}

int addAfter(int n, int k){
    t_node *q;
    t_node *p = start;
    while (p->data != k)
        p = p->next;
    q = (t_node *)malloc(sizeof(t_node));
    q->data = n;
    q->next = p->next;
    p->next = q;
    return 0;
}

void dellEnd(int *n){
    t_node *q;
    t_node *p = start;
    while (p->next != NULL){
        q = p;
        p = p->next;
    }
    *n = p->data;
    q->next = NULL;
    free(p);
}

void printAfter(t_node *curr){
    t_node *p = curr;
    while (p != NULL){
        printf("%d, ", p->data);
        p = p->next;
    }
    printf("\n");
}

t_node *start;