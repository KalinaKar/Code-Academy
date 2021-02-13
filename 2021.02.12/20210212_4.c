/* Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int getElements(int n);

int main(void){
    int n;
    printf("Number of elements (integers): ");
    scanf("%i", &n);
    getElements(n);
}

int getElements(int n){
    int *ip = malloc(n * sizeof(int));
    int *ipCopy = ip;
    int i;
    for (i = 0; i < n; i++){
        printf("\nEnter element %d: ", i);
        scanf("%d", ipCopy);
        printf("Address of element %d is: %i\n", i, ipCopy++);
    }

    free(ip);
}