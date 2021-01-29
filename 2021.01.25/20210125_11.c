/*Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(void){
    reverse("Hello world"); /*enter your text here*/
    return 0;
}

void reverse(char s[]){
    char r[strlen(s)];
    int i, j;
    /*Променям "i < j" с "i < strlen(s)" иначе
     стрингът вместо обърнат, става огледален.*/
    for (i = 0, j = strlen(s) - 1; i < strlen(s); i++, j--){
        r[i]=s[j];
        printf("%c", r[i]);
    }
    printf("\n");
}
