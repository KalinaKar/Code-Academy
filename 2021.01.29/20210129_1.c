/*Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.*/
#include <stdio.h>
#define c_fPI 3.14;

float areaCircle(int r);

int main(){
    int r;
    printf("Enter radius:\n");
    scanf("%d", &r);
    printf("Area: %f\n", areaCircle(r));
    return 0;
}

float areaCircle(int r){
    return r * r * c_fPI;
}