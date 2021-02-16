/* Направете същото, както в задача 17, но използвайки
готовата функция strcpy. */
#include <stdio.h>
#include <string.h>

int main(void){
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";

    char string2[23];
    char string4[34];

    strcpy(string2, string1);
    printf("%s\n", string2);
    strcpy(string4, string3);
    printf("%s\n", string4);
    return 0;
}