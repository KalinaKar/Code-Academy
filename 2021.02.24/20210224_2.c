/* Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t. */
#include <stdio.h>
#define SWAP(t, x, y) \
        t temp = x; \
        x = y; \
        y = temp; \

int main(void){
    
    int x = 5;
    int y = 6;
    printf("Before swap: int x = %d, int y = %d\n", x, y);
    SWAP(int, x, y);
    printf("After swap: int x = %d, int y = %d\n", x, y);
    
    return 0;
}