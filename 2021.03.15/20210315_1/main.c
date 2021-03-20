#include "1.h"

/* Използвайте динамична реализация на стек за въвеждане на
поредица от цели положителни числа и нейното извеждане върху
екрана в обратен ред. За край на поредицата от клавиатурата се въвежда 0 */

int main(void){

    int i = 1;
    while (i){
        printf("Enter a positive integer: \n");
        scanf("%d", &i);
        addHead(i);
    }

    while(pop(&i)){
        printf("%d, ", i);
    }

    return 0;
}