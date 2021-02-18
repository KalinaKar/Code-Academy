/* Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
#include <stdio.h>
#define MAX_NUM 20

int main(void){
    unsigned fibonacci[MAX_NUM];
    unsigned *ptFibo = fibonacci;
    *ptFibo++ = 0;
    *ptFibo++ = 1;
    printf("Fibonacci sequence: %d %d ", fibonacci[0], fibonacci[1]);
    int i;
    for (i = 0; i < MAX_NUM; i++){
        *ptFibo = *(ptFibo - 1) + *(ptFibo - 2);
        printf("%d ", *ptFibo++);
    }
    printf("\n");
    return 0;
}
