/* Направете по подобен начин триъгълник: */
#include <stdio.h>
#define N 15
struct point {
    int x;
    int y;
};
void printScreen(int n, char screen[][n]);

int main(void){
    /* creates a screen and prints it*/
    char screen[15][15];
    int i, j;
    for (i = 0; i < 15; i++)
        for (j = 0; j <15; j++)
            screen[i][j] = '-';

    printScreen(N, screen);

    /* creates two points and prints them */
    struct point a = {3, 7};
    struct point b = {10, 0};
    struct point c = {10, 14};
    screen[a.x][a.y] = 'a';
    screen[b.x][b.y] = 'b';
    screen[c.x][c.y] = 'c';

    printScreen(N, screen);
    
    /* connects the points and prints the screen */
    for(i = b.x; i >= a.x; i--){
        for(j = b.y; j <= c.y; j++){
            screen[i][j] = '&';
        }
        b.y++;
        c.y--;
    }

    printScreen(N, screen);

    return 0;
}

void printScreen(int n, char screen[][n]){
    int i, j;
    for (i = 0; i < N; i++){
        printf("\n");
        for (j = 0; j < N; j++){
            printf("%3c", screen[i][j]);
        }
    }
    printf("\n");
}