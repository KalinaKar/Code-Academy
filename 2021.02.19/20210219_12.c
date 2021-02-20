/* Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати. */
#include <stdio.h>
#include <math.h>
struct TPoint {
    int x;
    int y;
};
float distance (struct TPoint pt1, struct TPoint pt2);

int main(void){
    struct TPoint a = {50, 60};
    struct TPoint b = {35, 40};
    printf("Distance between struct TPoint a and struct TPoint b: %f\n", distance(a, b));
    return 0;
}

float distance(struct TPoint a, struct TPoint b){
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(a.y - a.y));
}