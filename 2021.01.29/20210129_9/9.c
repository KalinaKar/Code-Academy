/* Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл.*/
#include <stdio.h>
#include "nine.h"

int main(void){
    int a, b;
    printf("Enter a decimal number:\n");
    scanf("%d", &a);
    printf("Its absolute value is: %d\n", a = absVal(a));
    printf("%d to the second power equals %d\n", a, power(a));
    return 0;
}

int incr(int c){ /*increases a number by one*/
    return ++c;
}

int absVal(int num){ /*returns absolute value of the number*/
    if (num < 0){
        num = ~num;
        num = incr(num);
    }
    return num;
}

int power(int a){ /*returns absolute value of 'a' to the second power*/
    a = absVal(a);
    return a * a;
}