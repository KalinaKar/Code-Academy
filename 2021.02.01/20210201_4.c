/* Направете функцията: void copy(char *to, char *from), която копира една
последователност от символи в друга. */
#include <stdio.h>
void copy (char *to, char *from);

int main(void){
    char *from = "Hello world"; /* enter text here */
    char to[16]; /* extend the string if necessary */
    copy(to, from);
    return 0;
}

void copy(char *to, char *from){
    /* this function copies one sting into another and prints the copy */
    int i = 0; 
    while (from[i])
        to[i] = from[i++];
    printf("Copy:  %s", to);    
}