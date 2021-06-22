/* Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(0));
    int arr[10][10][10];
    int i, j, k;
    unsigned int sum = 0;
    
    /* filling the elements with random numbers 0-100 using rand() function */    
    int *ip_arr = NULL;
    ip_arr = (int*)arr;
    for (i = 0; i < 10*10*10; i++){
        *ip_arr = rand() % 101;
        sum += *ip_arr++;
    }

    for(i = 0; i < 10*10*10; i++){
        if(*ip_arr == NULL){
            exit(1);
        }
        ip_arr++;
    }

    int average = sum / (10*10*10);
    printf("Average sum of elements: %i\n", average);
    
    return 0;
}