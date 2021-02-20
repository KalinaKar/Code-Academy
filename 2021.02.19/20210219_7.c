/* Направете функция struct point makepoint(int x, int y), която
създава две точки. */
#include <stdio.h>
struct point {
    int x;
    int y;
};

struct point makepoint(int x, int y);

int main(void){
    int a = 10;
    int b = 7;
    struct point pt = makepoint(a, b);
    printf("pt.x = %d\npt.y = %d\n", pt.x, pt.y);
    return 0;
}

struct point makepoint(int x, int y){
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}