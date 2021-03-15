#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node{
    int data;
    t_node *next;
} t_node;

extern t_node *start;

void init();
int add(int data);
int addAfter(int n, int k);
void dellEnd(int *n);
void printAfter(t_node *curr);