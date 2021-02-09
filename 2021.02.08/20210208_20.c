/*  Проверете дали сумата от елементите на два тримерни
масива са еднакви. */
#include <stdio.h>
void compare();

int main(void){
    compare();
    return 0;
}

void compare(){
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
    int count1 = 0, count2 = 0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            for(k = 0; k < 4; k++){
                count1 += arr1[i][j][k];
                count2 += arr2[i][j][k];
            }
    if (count1 == count2)
        printf("Sum 1 = %d\nSum 2 = %d\nEqual sums.\n", count1, count2);
    else 
        printf("Sum 1 = %d\nSum 2 = %d\nUnequal sums.\n", count1, count2);
}