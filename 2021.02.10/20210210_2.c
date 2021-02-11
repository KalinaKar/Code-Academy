/* Напишете програма, която чете съобщение, след което го
принтира в обратен ред. */
#include <stdio.h>
#define max 1000
char getString();
char reverseString(char *p, int len);

int main(){
    getString();
    return 0;
}

/* gets string char by char then calls reverseString */
char getString(){
    char c, *cp, myString[max];
    int j, i = 0;
    printf("Enter your text:\n");
    while ((c = getchar()) != '\n')
    {
        myString[i] = c;
        myString[++i] = '\0';
    }
    cp = &myString[--i];
    printf("String: %s\n", myString);
    reverseString(cp, i);
}
/*reverses the string and prints it char by char*/
char reverseString(char *p, int len){
    int j;
    printf("Reverse:");
    for (j = 0; j <= len; j++)
    {
        printf("%c", *p);
        p--;
    }
    printf("\n");
}