/* Напишете функция, която прави същото, както в задача
6, но е рекурсивна. */
#include <stdio.h>
unsigned factorial(unsigned num);

int main(void){
    printf("%d\n", factorial(30)); /* change number here */
    return 0;
}

unsigned factorial(unsigned num){
    if (num < 2)
        return 1;
    else
        return num * factorial(num - 1);
}