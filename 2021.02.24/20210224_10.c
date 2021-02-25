/* Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0)); */
#include <stdio.h>
#include <math.h>
#define AVG(x, y) (x+y) / 2.0; /* 1. */

#define AVD(x, y, result) {\
                        for(i = x; i <= y; i++)\
                            {result += i;}\
                            result/=(i-x);\
                            } /* 2. */

#define POW(x, y) for(i = x, j = 1; j < y; j++)\
                    {x *= i;} /* 3. */

#define TOUPPER(a) a -= 32; /* 4. */

#define DISP(f, x) printf("sqrt(%g) = %g\n", x, f(x));

int main(void){
    float fRes = AVG(10, 19);
    printf("fRes = %f\n", fRes);

    int i;
    float result = 0;
    AVD(10, 19, result);
    printf("result = %f\n", result);

    int j;
    int x = 2;
    int y = 10;
    POW(x, y);
    printf("x = %d\n", x);

    char ca = 'a';
    TOUPPER(ca);
    printf("char a = %c\n", ca);

    double n = 9;
    DISP(sqrt, n);
    return 0;
}
