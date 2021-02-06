/* Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. */
#include <stdio.h>
void our_strcat(char *s, char *t);

int main(void){
    char s1[] = "short ";
    char s2[] = "snort";
    our_strcat(s1, s2);
    printf("%s\n", s1);  
    return 0;
}

void our_strcat(char *s, char *t){
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
        ;
    while ((s[i++] = t[j++]) != '\0')
        ;
}
