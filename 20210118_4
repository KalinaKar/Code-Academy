#include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    /*първо шифтва <<, после побитово И(&) и накрая логическо И(&&)*/
    int true = x&&y&x<<1; //true = 0;
    printf("%d\n", true);
    /*първо <<, след това XOR и после логическо И*/
    true = x&&y^x<<1; //true = 1;
    printf("%d\n", true);

    return 0;
}
