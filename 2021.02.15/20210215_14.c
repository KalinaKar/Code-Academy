#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *genPass(char *arg);

int main(void){
    srand((unsigned)time(0));
    
    while(1){
    char password[7] = "......";
    char *cpPass = password;
    genPass(cpPass);
    printf("Do you like this password(y/n): %s\n", cpPass);
    char approve = getchar();
    if(approve == '\n')
        approve = getchar();
    if (approve == 'Y' || approve == 'y')
        break; 
    }

    return 0;
}

char *genPass(char *arg){
    int is_capital;
    char *copy = arg;
    for ( ; *arg; arg++){
        if ((is_capital = rand() % 2) == 1)
            *arg = (rand() % 26) + 'A'; /* capital letters */
        else 
            *arg = (rand() % 26) + 'a'; /* small letters */
    }
    return copy;
}
