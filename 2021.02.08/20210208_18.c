/*  Напишете програма за умножение на два тримерни
масива, елемент по елемент */
#include <stdio.h>
void multiply();

int main(void){
    multiply();
    return 0;
}

void multiply(){
    int arr1[2][3][4] = 
        {
            {{2, 4, 6, 8}, {10, 12, 14, 16}, {18, 20, 22, 24}},
            {{2, 4, 6, 8}, {10, 12, 14, 16}, {18, 20, 22, 24}}
        };
    int arr2[2][3][4] = 
        {
            {{1, 3, 5, 7}, {9, 11, 13, 15}, {17, 19, 21, 23}},
            {{1, 3, 5, 7}, {9, 11, 13, 15}, {17, 19, 21, 23}}
        };
    int arr3[2][3][4];
    int i, j, k;
    printf("The new three dimentional array is:\n");
    for(i = 0; i < 2; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("| ");
            for(k = 0; k < 4; k++){
            arr3[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
            printf("%d ", arr3[i][j][k]); 
            }
        }
    printf("\n");
    }
}