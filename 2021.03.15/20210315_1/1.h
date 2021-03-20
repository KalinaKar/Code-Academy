#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node_t;

extern node_t *head;

void addHead(int a);
int pop(int *n);