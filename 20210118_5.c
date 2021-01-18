#include <stdio.h>

int main(){
    int x = 1, y = 0;
    int z = y || x; //z = 1;
    printf("Z = %d\n", z);

    printf("\nlnt values: X = %d, Y = %d\n", x, y);
    x = 1+2, 2*3, 3+4; //от дясно на ляво -> х=1+2;
    y = (7*8, 8+9, 9-4); //от ляво на дясно заради скобите -> у=9-4;
    printf("\nX = %d, Y = %d\n", x, y);
    return 0;
}
