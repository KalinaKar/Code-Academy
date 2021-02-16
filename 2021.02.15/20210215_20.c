/* Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great” */
#include <stdio.h>

int main(void){
    char str1[] = "I am a poor  programmer."; /* added extra space after "poor" (4 chars) */
    char str2[] = "great"; /* 5 chars */
    char *p1 = &str1[7];
    char *p2 = str2;
    while (*p2){
    *p1++ = *p2++;
    }

    printf("%s\n", str1);
    return 0;
}