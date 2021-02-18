/* Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция. */
#include <stdio.h> 
#include <stdlib.h>
int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnMulti(int nA, int nB) {return (nA * nB); }
int fnDivide(int nA, int nB) {return (nA / nB); }
int calc();

int main(void){
    calc();
    return 0;
}

int calc(){
    int (*func_ptr[4])() = {fnPlus, fnMinus, fnMulti, fnDivide};
    int operation, nA, nB;
    char c;
    while(1){
        printf("\nPress:\n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for Division\n");
        scanf("%i", &operation);
        if (operation < 1 || operation > 4){
            calc();
        }
        printf("Enter two integers:\n");
        scanf("%d %d", &nA, &nB);
        if (operation == 4 && nB == 0){
            printf("Cannot divide by zero!\0");
            calc();
        }
        printf("Result: %d\n", func_ptr[operation - 1](nA, nB));
    }
}