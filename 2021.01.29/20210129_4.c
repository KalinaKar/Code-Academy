/*Напишете функция, която връща резултат a*2 + b*c.*/
#include <stdio.h>

double calculate(double a, double b, double c);

int main(){
    double a, b, c;
    printf("Enter a value for a:\n");
    scanf("%lf", &a);
    printf("Enter a value for b:\n");
    scanf("%lf", &b);
    printf("Enter a value for c:\n");
    scanf("%lf", &c);
    printf("a * 2 + b * c = %lf\n", calculate(a, b, c));
    return 0;
}

double calculate(double a, double b, double c){
    return  a * 2 + b * c;
}