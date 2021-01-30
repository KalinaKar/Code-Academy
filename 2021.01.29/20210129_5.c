/*Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/
#include <stdio.h>

int isEven(int a);

int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    isEven(a);
    return 0;
}

int isEven(int a){
    if (a % 2 == 0)
        printf("The number is even.");
    else
        printf("The number is odd.");
    
}