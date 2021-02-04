#include <stdio.h>

int main(void){
    char arrChar[] = {'k', 'l', 'n', '\0'};
    int arrInt[] = {1, 2, 3};
    double arrDouble[] = {1.2, 3.4, 4.5};
    printf("%c\n", arrChar[1]);
    printf("%d\n", arrInt[2]);
    printf("%lf\n", arrDouble[2]);

    
    return 0;
}