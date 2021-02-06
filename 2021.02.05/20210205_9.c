/* Напишете функцията strncpy(s, t, n), която копира
най-много n символа от t в s . */
#include <stdio.h>
void strncpy(char *s, char *t, int n);

int main(void){

    char s1[50];
    char s2[]="In the last tutorial we discussed";
    strncpy(s1, s2, 12);
    printf("%s", s1);

    return 0;
}

void strncpy(char *s, char *t, int n){
    while(n>0){
        *s=*t;
        *s++,*t++,n--;
    }
}