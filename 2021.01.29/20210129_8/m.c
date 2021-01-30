/*Напишете прототипите на разгледаните досега функции int add(int a, int b) и
int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.*/
#include <stdio.h>
#include "f.h"

int main(void){
    int a,b;
    printf("Sum of two numbers\nEnter number a:\n");
    scanf("%d", &a);
    printf("Enter number b:\n");
    scanf("%d", &b);
    printf("a + b = %d\n", add(a, b));
    printf("If you increment that by 1, you get %d\n", incr(add(a,b)));

    return 0;
}