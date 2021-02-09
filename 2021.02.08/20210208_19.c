/* Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана. */
#include <stdio.h>
#include <stdlib.h>
void multiply();

int main(void){
    multiply();
    return 0;
}

void multiply(){
    int A[10];
    int B[10];
    int C[10];
    int i;
    /* Generating random numbers between 0 and 20, then multiplying them*/
    time_t t;
    srand((unsigned) time(&t));
    for (i = 0; i < 10; i++){
        A[i] = rand() % 20;
        B[i] = rand() % 20;
    }

    printf("Array A: \n");
    for (i = 0; i < 10; i++)
        printf("%d ", A[i]);
    printf("\nArray B: \n");
    for (i = 0; i < 10; i++)
        printf("%d ", B[i]);
    printf("\nMultiplying element by element:\n");
    for (i = 0; i < 10; i++){
        C[i] =  A[i] * B[i];
        printf("%d * %d = %d\n",A[i], B[i], C[i]);
    }
    printf("\n");
}