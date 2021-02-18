/* Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ...."; */
#include <stdio.h>
#include <string.h>


int main(void){
    char str[] = "It was a bright cold day in April, and the clocks were striking thirteen.";
    char *cp_str = str;
    int counter = 0;
    for ( ; *cp_str; cp_str++){
        if (*cp_str == 'a' || *cp_str == 'A')
        counter++;
    }
    printf("letter A/a is written %d times.\n", counter);
    return 0;
}
