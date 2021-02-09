/* Напишете програма за умножение на два двумерни
масивa, елемент по елемент. */
#include <stdio.h>
void multiply();

int main(void){
    multiply();
    return 0;
}

void multiply(){
    int arr1[2][4] = {{2, 4, 6, 8}, {10, 12, 14, 16}};
    int arr2[2][4] = {{1, 3, 5, 7}, {9, 11, 13, 15}};
    int arr3[2][4];
    int i, j;
    printf("The new two dimentional array is:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            arr3[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d ", arr3[i][j]); 
        }
    printf("\n");
    }    
}