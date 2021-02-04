/* Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */
#include <stdio.h>
#include <string.h>

void reverse(char *s);

int main(void){
    char s[] = "987654321"; /* change text here */
    reverse(s);
    return 0;
}

void reverse(char *s){
    int i, j;
    char c;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s", s);
}