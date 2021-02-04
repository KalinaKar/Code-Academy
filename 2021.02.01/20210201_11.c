/* напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */
#include <stdio.h>
#include <string.h>
void squeeze(char s[], char c);

int main(void){
    char s[] = "Sweet Home Alabama";
    char c = 'a';
    squeeze(s, c);
    return 0;
}

void squeeze(char s[], char c){
    int i, j = 0;
    for (i = 0; i < strlen(s); i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
    printf("%s", s);
}