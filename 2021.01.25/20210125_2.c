/*Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar();*/
#include <stdio.h>

int main(){
    int c;
    int counter = 0;
    while ((c = getchar()) != EOF){
        if(c == '\n'){
        counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}
