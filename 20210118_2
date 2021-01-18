#include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int z = 30;
    /*Приоритет имат скобите (невярно сравнение -> 0).
    X и Y имат една и съща стойност (вярно сравнение),
    която се различава от 20 (отново вярно).
    Съответно true ще е равно на единица.*/
    int true = x == y + (z < y) != 20; /*true = 1*/
    printf("z < y -> %d\n", (z < y));
    printf("x == y + (z < y) -> %d\n", (x == y + (z < y)));
    printf("x == y + (z < y) != 20 -> %d\n", true);
    printf("true -> %d\n", true);

    return 0;
}
