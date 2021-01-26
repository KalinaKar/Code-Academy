/*Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.*/
#include <stdio.h>

int main(void){
    int c;
    int i = 0; 
    char str[200];  /*change to input more chars*/
    while ((c = getchar()) != EOF){
        str[i] = c;
        str[i+1] = '\0';
        i++;
        if (c == '\n' && i > 80){
            printf("%s\n", str);
            i = 0;
            
        } else if (c == '\n'){
            i = 0;
        } 
    }
}