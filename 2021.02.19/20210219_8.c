/* Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета. */
#include <stdio.h>
struct point {
    int x;
    int y;
};
struct rect {
    struct point a;
    struct point b;
};
struct point makepoint(int x, int y);

int main(void){
    struct point pt1 = makepoint(0, 0);
    struct point pt2 = makepoint(15, 15);
    struct rect screen = {pt1, pt2};
    
    int i, j;
    for (i = pt1.x; i < pt2.y; i++){
        printf("\n");
        for (j = pt1.y; j < pt2.x; j++){
            printf("%3c", '-');
        }
    }
    printf("\n");
    return 0;
}

struct point makepoint(int x, int y){
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}