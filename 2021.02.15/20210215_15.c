/* Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4. */
#include <stdio.h>
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

    while (*a)
        *f++ = *a++; /* *++f = *++a; пропуска копирането на първия символ */
    *f = '\0';
}