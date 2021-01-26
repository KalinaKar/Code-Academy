/*Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]);
int main(){
    int c;
    int i = 0;
    char s[100];    /*set number of chars in the array to be reversed*/
    while ((c = getchar()) != EOF){
        s[i] = c;
        s[i+1] = '\0';
        i++;
        if (c == '\n'){
            i = 0;
            reverse(s);            
        }
    }
        return 0;
}

void reverse(char s[]){
    char r[strlen(s)];
    int i, j;
    for (i = 0, j = strlen(s) - 1; i < strlen(s); i++, j--){
        r[i]=s[j];
        printf("%c", r[i]);
    }
    printf("\n");
}