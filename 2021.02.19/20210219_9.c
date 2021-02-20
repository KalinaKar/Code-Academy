/* Направете функця add(), която събира две точки. */
#include <stdio.h>
struct point {
    int x;
    int y;
};
struct point add(struct point pt1, struct point pt2);

int main(void){
    struct point a = {12, 21}; /* change these values */
    struct point b = {23, 32}; /* change these values */
    struct point c = add(a, b);
    printf("c.x = %d\nc.y = %d\n", c.x, c.y);
    return 0;
}

struct point add(struct point pt1, struct point pt2){
    pt1.x += pt2.x;
    pt1.y += pt2.y;
    return pt1;
}