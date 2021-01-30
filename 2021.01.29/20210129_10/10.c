/*Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него.*/
#include <stdio.h>
#include "ten.h"

int main(void){
    int a, b, d;
    float c;
    printf("Least common multiple of two numbers\nEnter two positive integers:\n");
    scanf("%d %d", &a, &b);
    printf("LCM = %u\n", lcm(a, b));
    printf("\nAbsolute value of an integer or a floating point number\nEnter a number:\n");
    scanf("%f", &c);
    printf("The absolute value of %f is %f\n", c, absValue(c));
    printf("\nSquare root\nEnter a number:\n");
    scanf("%d", &d);
    printf("Square root of %d = %f\n", d, sqroot(d));
    return 0;
}

int lcm(unsigned int a, unsigned int b){
    /*this function returns the least common multiple of two positive integers*/
    int gcd, lcm;
    /*first we determine the greatest common divisor*/  
    for(int i=1; i<=a && i<=b; i++){ 
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    /*then we determine the least common multiple by formula*/
    return lcm = (a*b)/gcd;
}

float absValue(float num){
    /*this function returns the absolute value of a number*/
    if (num < 0)
        num = -num;
    return num;    
}

float sqroot(int x){
    /*this function returns the square root of a given number*/
    if (x < 0)
        x = absValue(x);

    /*god bless google here*/
    int start = 0, end = x;
    int mid;
 
    /*To store the answer*/
    float ans;
 
    /*To find integral part of square root of number*/
    while (start <= end) {
 
        /*Find mid*/
        mid = (start + end) / 2;
 
        /*If number is perfect square then break*/
        if (mid * mid == x) {
            ans = mid;
            break;
        }
 
        /*Increment start if integral part lies on right side of the mid*/
        if (mid * mid < x) {
            start = mid + 1;
            ans = mid;
        }
 
        /*Decrement end if integral part lies on the left side of the mid*/
        else {
            end = mid - 1;
        }
    }
 
    /*To find the fractional part of square root upto 5 decimal*/
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= x) {
            ans += increment;
        }
 
        /*Loop terminates, when ans * ans > number*/
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}
