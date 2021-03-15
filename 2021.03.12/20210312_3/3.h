#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node t_node;
extern t_node *head;
void addHead(int data);
void printAfter(t_node *curr);
void printElement(t_node *p);
t_node *findElement(int pos);