/* Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char getSmallLetter();
char getCapitalLetter();
char getSymbol();
char getNumber();

int main(void){
    srand((unsigned)time(0));
    char (*funcPtr[4])() = {getSmallLetter, getCapitalLetter, getSymbol, getNumber};
    int length, nSmall, nCapital, nNumbers, nSymbols, chance;
    
    printf("Enter password length:\n");
    scanf("%d", &length);
    printf("How many small letters?\n");
    scanf("%d", &nSmall);
    printf("How many capital letters?\n");
    scanf("%d", &nCapital);
    printf("How many numbers?\n");
    scanf("%d", &nNumbers);
    printf("How many symbols?\n");
    scanf("%d", &nSymbols);

    char *password;
    password = (char *) malloc((length + 1)* sizeof(char));
    char *passwordStart = password;

    while (nSmall != 0 || nCapital != 0 || nNumbers != 0 || nSymbols != 0){
        chance = rand() % 4;
        if (chance == 0 && nSmall > 0){
            *password++ = (*funcPtr[0])();
            nSmall--;
        } else if (chance == 1 && nCapital > 0){
            *password++ = (*funcPtr[1])();
            nCapital--;
        } else if (chance == 2 && nSymbols > 0){
            *password++ = (*funcPtr[2])();
            nSymbols--;
        } else if (chance == 3 && nNumbers > 0){
            *password++ = (*funcPtr[3])();
            nNumbers--;
        }
    }
    *password = '\0';
    printf("Your password is: %s\n", passwordStart);
    free(passwordStart);
    return 0;
}

char getSmallLetter(){
    char a = (rand() % 26) + 'a';
    return a;
}

char getCapitalLetter(){
    char a = (rand() % 26) + 'A';
    return a;
}

char getSymbol(){
    int n = rand() % 8;
    char a;
    switch (n){
    case 0:
        a = '@';
        break;
    case 1:
        a = '#';
        break;
    case 2:
        a = '$';
        break;
    case 3:
        a = '%';
        break;
    case 4:
        a = '!';
        break;
    case 5:
        a = '^';
        break;
    case 6:
        a = '&';
        break;
    case 7:
        a = '*';
        break;                
    } 
    return a;
}

char getNumber(){
    char a = (rand() % 9) + '0';
    return a;
}