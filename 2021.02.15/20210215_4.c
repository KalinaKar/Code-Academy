/* Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира? */
#include <stdio.h>

int main(void){
    int a = 1;
    int *p = &a;
    printf("%p\n", p);

    /* в този случай  

    int a = 1;
    int *p = &a;
    printf("%p\n", *p);

    се принтира 0000000000000001 */
    
    return 0;
}