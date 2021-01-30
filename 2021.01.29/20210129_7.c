/*Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/
#include <stdio.h>

double areaTria(double a, double b);
double areaRect(double c, double d);

int main(){
    double a, b;
    printf("You have a right triangle and a rectangle!\nEnter a value for side a:\n");
    scanf("%lf", &a);
    printf("Enter a value for side b:\n");
    scanf("%lf", &b);
    printf("Area of a triangle: %lf\n", areaTria(a,b));
    printf("Area of a rectangle: %lf\n", areaRect(a,b));
    return 0;
}

double areaTria(double a, double b){
    return (a * b) / 2;
}

double areaRect(double c, double d){
    return areaTria(c, d) * 2;
}