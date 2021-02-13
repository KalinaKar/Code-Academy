/* Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това. */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size, i;
    printf("Enter memory size: ");
    scanf("%i", &size);
    int *iArray = NULL;
    iArray = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++){
        printf("\nEnter value for iArray[%d]: ", i);
        scanf("%i", &iArray[i]);
    }

    int newSize;
    printf("Enter more memory size: ");
    scanf("%i", &newSize);
    iArray = realloc(iArray, (size + newSize) * sizeof(int));
    for ( ; i < (size + newSize); i++){
        printf("\nEnter value for iArray[%d]:", i);
        scanf("%i", &iArray[i]);
    }

    for (i = 0; i < (size + newSize); i++){
        printf("iArray[%d] Value: %d, Address: %d\n", i, iArray[i], &iArray[i]);
    }
    free(iArray);
    return 0;
}
