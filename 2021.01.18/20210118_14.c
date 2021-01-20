#include <stdio.h>

int main(){
    int nX = 1, nY = 2;
    printf("\nInt values: X= %d, Y= %d\n", nX, nY);
    nX = 1 + 2, 2 * 3, 3 + 4; //от дясно на ляво -> х=1+2;
    nY = (7 * 8, 8 + 9, 9 - 4); //от ляво на дясно заради скобите -> у=9-4;
    printf("\nX= %d, Y= %d\n", nX, nY);

    return 0;
}
