/* Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length()); */
#include <stdio.h>
char length(char *cp);

int main(void){
    char c;
    char string[] = "How long is this string of mine?"; /* change text here */
    char *p = string;
    printf("String length: %d visible characters\n", length(p));
    
    return 0;
}

char length(char *cp){    
    int counter = 0;
    while (*cp++ != '\0')
        counter++;
    return counter; 
}