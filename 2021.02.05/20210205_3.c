/* Какво е грешното на този код?
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
} */
#include <stdio.h>
void my_strcpy(char *t, char *s);

int main(void){

    char t[]="Logitech";
    char s[9];
    my_strcpy(t,s);
    printf("%s",s);
    return 0;
}

void my_strcpy(char *t, char *s){
    for(; *t; *t++, *s++)
        *s = *t;
}