/*  Направете същото, както в задача 16., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. */
#include <stdio.h>
#include <string.h>

int main(void){
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";

    char string2[23];
    char string4[34];
    memset(string2, '\0', sizeof(string1));
    strcpy(string2, string1);
    printf("%s\n", string2);
    memset(string4, '\0', sizeof(string3));
    strcpy(string4, string3);
    printf("%s\n", string4);
    return 0;
}