/*  Напишете функцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако елемента
в който се различават s[i] е по-малък от t[i] връща стойност по-малка от
нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от нула > 0 */
#include <stdio.h>
int our_strcmp(char *s, char *t);

int main(void){
    char s1[] = "snort";
    char s2[] = "short"; 
    printf("%d\n", our_strcmp(s1,s2));
    return 0;
}

int our_strcmp(char *s, char *t){
    for ( ; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}