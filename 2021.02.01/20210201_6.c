/* Напишете функция, която изчислява произведението на
числата от 1 до 30. */
#include <stdio.h>
unsigned factLoop(unsigned num);

int main(void){
    printf("%d\n", factLoop(30)); /* change number here */
    return 0;
}

unsigned factLoop(unsigned num){
    unsigned result = 1;
    for ( ; num >= 2; num--)
        result *= num;
    return result;
}