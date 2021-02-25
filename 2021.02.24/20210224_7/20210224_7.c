/* Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти. */
#include <stdio.h>

#ifndef _MYHEADER_H_
#define _MYHEADER_H_
#include "20210224_7.h"/* header declarations */
#endif // _MYHEADER_H_

int main(void){
    printf("%d\n", add(3,5));
    printf("%d\n", substract(3,5));
    printf("%d\n", multiply(3, 5));
    printMyName("Kalina");
    return 0;
}

int add(int x, int y){
    return x + y;
}

int substract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}

void printMyName(char *s){
    printf("%s\n", s);
}
