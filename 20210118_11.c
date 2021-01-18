#include <stdio.h>

int main(){
    int iCounter = 0;
    while (++iCounter < 4){ 
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++iCounter);
        printf("-- Counter: %d\n", --iCounter);
        printf("Counter ++: %d\n", iCounter++);
        printf("Counter --: %d\n", iCounter--);
    }
    return 0;
}//Ако iCounter се препълни, цикълът спира да се изпълнява.
