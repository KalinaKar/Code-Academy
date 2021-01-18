#include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int true, false;
    true = x == y; /*условието на оператора е вярно, съответно true = 1*/
    false = x != y; /*условието на оператора не е вярно, значи false = 0*/
    printf("true = %d\nfalse = %d\n", true, false);

    return 0;
}