/* Направете по подобен начин триъгълник: */
#include <stdio.h>
struct point {
    int x;
    int y;
};

int main(void){
    char screen[15][15];
    int i, j;
    for (i = 0; i < 15; i++)
        for (j = 0; j <15; j++)
            screen[i][j] = '-';
    struct point a = {3, 7};
    struct point b = {10, 0};
    struct point c = {10, 14};
    
    screen[3][7] = '&';
    for(i = b.x; i > a.x; i--){
        for(j = b.y; j <= c.y; j++){
            screen[i][j] = '&';
        }
        b.y++;
        c.y--;
    }

    for (i = 0; i < 15; i++){
            printf("\n");
            for (j = 0; j <15; j++)
                printf("%3c", screen[i][j]);
    }
    printf("\n");

    return 0;
}