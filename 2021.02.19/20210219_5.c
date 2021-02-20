/* а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @ */
#include <stdio.h>
#define N 15
struct point {
    int x;
    int y;
};
void printRect(int n, char screen[][n]);

int main(void){
    /* creates a screen and prints it*/
    char screen[N][N];
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j <N; j++)
            screen[i][j] = '-';

    printRect(N, screen);    

    /* creates two points and prints them */
    struct point a = {3, 4};
    struct point b = {7, 10};
    screen[a.x][a.y] = 'a';
    screen[b.x][b.y] = 'b';
    printRect(N, screen);

    for (i = a.x; i <= b.x; i++)
        for (j = a.y; j <= b.y; j++)
            screen[i][j] = '@';

    /* prints the sreen */
    printRect(N, screen);
    return 0;
}

void printRect(int n, char screen[][n]){
    int i, j;
    for (i = 0; i < N; i++){
        printf("\n");
        for (j = 0; j < N; j++){
            printf("%3c", screen[i][j]);
        }
    }
    printf("\n");
}