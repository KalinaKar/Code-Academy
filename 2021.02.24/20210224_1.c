/* Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода. */
#include <stdio.h>
#define PI 3.14
#define E 2.718281
#define K 10

int circle(int *rad);

int main(void){
    int r = 10;
    printf("Area of a circle with radious %d is %d.\n", r, circle(&r));

    printf("E = %lf\n", E);

    printf("%d\n", r > K ? r : K);

    return 0;
}

int circle(int *rad){
    return PI*(*rad)*(*rad);
}
