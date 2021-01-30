/*Напишете програма, която да премахва всички
коментари в една С програма.*/
#include <stdio.h>

int main(){
    int c;
    int i = 0;
    int flag = 0;
    char s[30000]; /*this magic number can be changed to increase the length of the string*/
    while ((c = getchar()) != EOF){
        s[i] = c;
        s[i+1] = '\0';

        if (s[i] == '*' && s[i-1] == '/'){
            flag = 1;
            i++;
            continue;
        }else if (s[i] == '/' && s[i-1] == '*' && flag == 1){
            flag = 0;
            i++;
            continue;
        }
        if (flag == 0)
            putchar(c);
        i++;
    }
    return 0;
}
