/*Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.*/
#include <stdio.h>

int main(){
    char c;
    int i;
    int countNums = 0;
    int countLet = 0;
    char str[200];  /*change to input more chars*/
    while ((c = getchar()) != EOF){
        str[i] = c;
        str[i+1] = '\0';
        i++;
        if (c >= 48 && c <= 57){
            countNums++;
            continue;
        } else if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)){
            countLet++;
        }
        if (c == '\n'){
           printf("Numbers: %d, Letters: %d\n", countNums, countLet);
           countNums = 0;
           countLet = 0; 
        }
    }
    
    return 0;
}