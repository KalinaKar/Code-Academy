/* Случайна разходка */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int y, x, k, direction, letter;
    char c[10][10];
    srand((unsigned)time(0));

    /* set background */
    for (y = 0; y < 10; y++)
        for (x = 0; x < 10; x++)
            c[y][x] = '.';

    /* first step */
    y = rand() % 10;
    x = rand() % 10;

    /* next steps */
    for (k = 0, letter = 65; k < 26; k++, letter++){ /* 'A' = 65 in ASCII  */
        if (c[y][x] == '.')
            c[y][x] = letter;
            
        /* no free space */
        if ((c[y][x + 1] != '.' || x == 9) && (c[y + 1][x] != '.' || y == 9) 
            && (c[y - 1][x] != '.' || y == 0) && (c[y][x - 1] != '.' || x == 0)) 
            break;

        direction = rand() % 4;

        switch (direction){
        case 0:
            if (x < 9 && c[y][x + 1] == '.'){ /* step right */
                x++;
                break;
            } else {
                k--;
                letter--;
                break;
            }
        case 1:
            if (y < 9 && c[y + 1][x] == '.'){ /* step down */
                y++;
                break;
            } else {
                k--;
                letter--;
                break;
            }
        case 2:
            if (y > 0 && c[y - 1][x] == '.'){ /* step up */
                y--;
                break;
            } else {
                k--;
                letter--;
                break;
            }
        case 3:
            if (x > 0 && c[y][x - 1] == '.'){ /* step left */
                x--;
                break;
            } else {
                k--;
                letter--;
                break;
            }
        }
    }

    /* print matrix */
    for (y = 0; y < 10; y++){
        for (x = 0; x < 10; x++)
            printf("%2c ", c[y][x]);
        printf("\n");
    }

    return 0;
}