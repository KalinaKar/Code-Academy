/* Направете два триъгълника с отместване. */
#include <stdio.h>
#define W 30
#define H 15
struct point{
    int x;
    int y;
};
struct point add(struct point *pt1, struct point *pt2);
void printTriangle(int n, char screen[][n]);

int main(void)
{
    char screen[H][W];
    int i, j;
    for (i = 0; i < H; i++)
        for (j = 0; j < W; j++)
            screen[i][j] = '_';

    struct point a = {3, 7};
    struct point b = {10, 0};
    struct point c = {10, 14};
    screen[3][7] = '&';
    for (i = c.x; i > a.x; i--){
        for (j = b.y; j <= c.y; j++){
            screen[i][j] = '&';
        }
        b.y++;
        c.y--;
    }
    b.y = 0;
    c.y = 14;

    printTriangle(W, screen);
    struct point plus = {0, H};

    a = add(&a, &plus);
    b = add(&b, &plus);
    c = add(&c, &plus);

    screen[3][22] = '&';
    for (i = c.x; i > a.x; i--){
        for (j = b.y; j <= c.y; j++){
            screen[i][j] = '&';
        }
        b.y++;
        c.y--;
    }
    printTriangle(W, screen);
    return 0;
}

struct point add(struct point *pt1, struct point *pt2){
    pt1->x += pt2->x;
    pt1->y += pt2->y;
    return *pt1;
}

void printTriangle(int n, char screen[][n]){
    int i, j;
    for (i = 0; i < H; i++){
        printf("\n");
        for (j = 0; j < W; j++){
            printf("%3c", screen[i][j]);
        }
    }
    printf("\n");
}