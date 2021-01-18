#include <stdio.h> 

int isLetter(char c);

int main(){
    printf("Write a letter from the ASCII table  here:");
    char c;
    scanf("%c", &c);
    isLetter(c);

    return 0;
}

int isLetter(char c){
    int inDecimal = (int) c; //Каствам символа в съответната цифра от ASCII таблицата.
    if ((inDecimal >= 65 && inDecimal <= 90) || (inDecimal >= 97 && inDecimal <= 122)){
        printf("Yes, it is a letter.");
        return 1;
    }
    printf("No, it is not a letter.");
    return 0;
}
