/* Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void password();

int main(){
    srand((unsigned)time(0));
    char approve;
    while (1)
    {
        password();
        printf("Do you like this password?\nPress Y for yes\nPress N for new password\n");
        approve = getchar();

        if(approve == '\n'){
            approve = getchar();
        }

        if (approve == 'Y' || approve == 'y')
            break;
    } 
    
    return 0;
}

void password(){

    char *pwd = malloc(6 * sizeof(char));

    /* generate random password */
    int i, is_capital;
    for (i = 0; i < 6; i++, pwd++){
        if ((is_capital = rand() % 2) == 1)
            *pwd = (rand() % 26) + 65; /* capital letters */
        else 
            *pwd = (rand() % 26) + 97; /* small letters */
    }
    printf("Password:");
    for(i = 0; i < 7; i++, pwd--)
        printf("%c", *pwd);
    printf("\n");
}