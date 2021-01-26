/*Ако на реда имаш отваряща скоба, която не е затворена,
програмата автоматично да я добавя на края на реда*/
#include <stdio.h>

int main(){
    char c;
    int flag = 0;
    while((c = getchar()) != EOF){        
        if (c == '('){            
            flag = 1;;
        } else if (c == ')'){
            flag = 0;
        } if (c == '\n' && flag == 1){
            putchar(41);
            flag = 0;
        }
        putchar(c);
    }
    return 0;
}