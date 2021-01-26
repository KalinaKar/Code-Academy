/*Напишете програма, която преброява шпациите, табулациите и
новите редове.*/
#include <stdio.h>

int main(){
    int c;
    int counter = 0;
    while ((c = getchar()) != EOF){
        if(c == '\n' || c == ' ' || c == '\t'){
        counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}
