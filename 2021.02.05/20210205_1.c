/* Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг '\0'. На всяка итерация принтирайте всеки
един елемент на стринга с printf(“%с”, с). */
#include <stdio.h>
void printStr(char *s);

int main(void){
    printStr("Hot chocolate");
    return 0;
}

void printStr(char *s){
    char c;
    for ( ; (c = *s) != '\0'; s++)
        printf("%c", c);
}
