/*Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */
#include <stdio.h>
#define c_fPI 3.14

double areaCircle(double r);
double area();

int main(){
    area();
    return 0;
}

double area(){
    double r;
    printf("Enter radius:\n");
    scanf("%lf", &r);
    printf("Area: %lf\n", areaCircle(r));
}
double areaCircle(double r){
    return r * r * c_fPI;
}