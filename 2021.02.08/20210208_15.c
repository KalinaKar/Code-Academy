/* Сумирайте елементите на двумерен масив и намерете
средното по редове и колони */
#include <stdio.h>
void average();

int main(void){
    average();
    return 0;
}

void average(){
    int i, j;
    float averageRow = 0, averageCol = 0;
    int myArray[][4] = 
        {{2, 4, 6, 8},
        {12, 14, 16, 18}};
    for (i = 0; i < 2; i++){
        for (j = 0; j < 4; j++)
            averageRow += myArray[i][j];
        printf("The average of Row %d is: %f\n", i, averageRow/4);
        averageRow = 0;
    }
    for (j = 0; j < 4; j++){
        for (i = 0; i < 2; i++)
            averageCol += myArray[i][j];
    printf("The average of Column %d is: %f\n", j, averageCol/2);
    averageCol = 0;
    }
}