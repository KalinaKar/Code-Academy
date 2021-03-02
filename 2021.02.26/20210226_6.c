/* Напишете структура с потребителски тип key_t, която
съдържа символен низ и число. */
#include <stdio.h>
typedef struct key {
    char *str;
    int num;
} key_t;

int main(void){
    key_t var = {"Awesome", 5};
    printf("var: %s, %d\n", var.str, var.num);
    return 0;
}