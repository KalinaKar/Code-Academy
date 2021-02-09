/* Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */
#include <stdio.h>

int main(){
    int numbers[5][5];
    int i, j;
    printf("Enter the values of an array[5][5].\n");
     for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &numbers[i][j]);
    
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
            printf("%d ", numbers[i][j]);
        printf("\n");
    }
    return 0;
}