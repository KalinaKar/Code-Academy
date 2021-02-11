/* Решете задачата за генериране на 6 буквена парола с
пойнтери. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void password();

int main(){
    srand((unsigned)time(0));
    char approve = 'n';
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
    char pass[5];
    int i, is_capital;
    for (i = 0; i < 6; i++){
        if ((is_capital = rand() % 2) == 1)
            pass[i] = (rand() % 26) + 65; /* capital letters */
        else 
            pass[i] = (rand() % 26) + 97; /* small letters */
    }
    printf("Password: %s\n", pass);
}