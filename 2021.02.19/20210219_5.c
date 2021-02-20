/* а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @ */
#include <stdio.h>
struct point {
    int x;
    int y;
};

struct rect {
    struct point a;
    struct point b;
};

int main(void){
    char screen[15][15];
    int i, j;
    for (i = 0; i < 15; i++)
        for (j = 0; j <15; j++)
            screen[i][j] = '-';

    struct rect r = {{3, 4}, {7, 10}};

    for (i = r.a.x; i <= r.b.x; i++)
        for (j = r.a.y; j <= r.b.y; j++)
            screen[i][j] = '@';

    for (i = 0; i < 15; i++){
        printf("\n");
        for (j = 0; j <15; j++)
            printf("%3c", screen[i][j]);
    }
    return 0;
}