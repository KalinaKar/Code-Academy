/* Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). */
#include <stdio.h>
#include <string.h>
void itoa(int n, char s[]);
void reverse(char *s);

int main(void){
    char s[1000] = {0};
    itoa(123456789, s); /* enter decimal number here */
    return 0;
}

void itoa(int n, char s[]){
    /* turns integer to a string */
    int i = 0;
    do{
        s[i++] = (n % 10) + '0';
        n /= 10;
    } while (n != 0);
    reverse(s);
}

void reverse(char *s){
    /* reverses string */
    int i, j;
    char c;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s", s);
}