/* Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено. */
#include <stdio.h>
#include <string.h>
int strend(char *s, char *t);
int mystrlen(char *t);

int main(void){
    char s1[] = "happy bithday"; /* change text here */
    char s2[] = "day"; /* change text here */
    printf("%d\n", strend(s1, s2));

    return 0;
}

int strend(char *s, char *t){
    int len;
    len=mystrlen(t);
    while(*s!='\0')
        ++s;
    --s;

    while(*t!='\0')
        ++t;
            
    --t;
    while(len > 0)    {
        if(*t==*s)        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
}

int mystrlen(char *t){
    char *p;
    p=t;

    while(*p!='\0')
        ++p;

    return p-t;
}