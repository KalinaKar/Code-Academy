/* Връщаме се на кода написан в задача 15. Нека сега
отпечатаме стринговете с декрементиране, започвайки отзад-напред.
*to-- = *from--; */
#include <stdio.h>
#include <string.h>
char *atof(char *a, char *f);

int main(void){
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";

    char string2[23];
    char string4[34];

    atof(string1, string2);
    printf("%s\n", string2);
    atof(string3, string4);
    printf("%s\n", string4);

    return 0;
}

char *atof(char *a, char *f){
    int len = strlen(a) + 1;
    a += len;
    f += len;
    while (len-- >= 0)
        *f-- = *a--; 
}