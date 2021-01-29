/*Пребройте символите, подавани на конзолата, с
функцията getchar();*/
#include <stdio.h>

int main(){
    char c;
    int counter = 0;
    while ((c = getchar()) != EOF){
        ++counter;       
    }  
    printf("Number of chars: %d\n", counter);
    return 0;
}
