/* Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob(n, s[], 16) представя числото n като шестнадесетично число в
стринга s[]. */
#include <stdio.h>
#include <string.h>
void itob(int n, char s[], int b);
void reverse(char *s);

int main(void){
    char string[1000] = {0};
    int number = 123456789; /* enter decimal number here */
    int base = 8; /* enter base here */
    itob(number, string, base); 
    return 0;
}

void itob(int n, char s[], int b){
    /* turns integer to a string */
    int i = 0;
    do{
        if (n % b > 9) /* in case for hexadecimal numbers */
            s[i++] = (n % b) + '7';
        else 
            s[i++] = (n % b) + '0';
        n /= b;
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
