/*Напишете функция, която връща резултат (а+в)*4.*/
#include <stdio.h>

double calculate(double a, double b);

int main(){
    double a, b;
    printf("Enter a value for a:\n");
    scanf("%lf", &a);
    printf("Enter a value for b:\n");
    scanf("%lf", &b);
    printf("(a + b) * 4 = %lf\n", calculate(a,b));
    return 0;
}

double calculate(double a, double b){
    return (a + b) * 4;
}