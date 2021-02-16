/* Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort. */
#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

int main(){
    char charArr[] = "Animal Farm";
    printf("Before sorting: %s\n", charArr);
    qsort(charArr, 11, sizeof(char), cmpfunc);
    printf("After sorting: %s\n", charArr);
    return 0;
}