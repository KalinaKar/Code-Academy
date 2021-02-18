/* Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(0));
    int arr[5][5] = {0};
    int *ptr_arr = &arr[5][5];
    int (*pa)[25] = NULL;
    int i, j = 0;
    for(i = 0; i < 5 * 5; i++){
        *ptr_arr = rand() % 11;
        printf("%d ", ptr_arr);
        if (*ptr_arr < 6){
            (*pa)[j++] = *ptr_arr;
            printf("%p\n", ptr_arr++);
        }
    }
    return 0
}