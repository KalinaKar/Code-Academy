/* Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата. */
#include <stdio.h>
typedef int t_iArr[];

int main(void){
    t_iArr keys = {5, 15, 25, 35, 45, 55};
    int i;
    for (i = 0; i < 6; i++)
        printf("Element %d = %d\n", i, keys[i]);
    return 0;
}