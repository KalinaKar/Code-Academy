/* Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи. */
#include <stdio.h>
int sortArray(int *arr, int n);
void printArray(int *arr, int n);

int main(void){
    int arr[] = {23, 34, 56, 78, 90, 32, 65, 87, 34,12, 1, 6, 9, 22, 98};
    sortArray(arr, 15);
    printf("Buuble sorted array:\n");
    printArray(arr, 15);
    printf("\n");
    return 0;
}

int sortArray(int *arr, int n){
    int i, j, temp;
    int maxNum = 0;
    for (i = 0; i < n; ++i)  
        for (j = i + 1; j < n; ++j) 
            if (arr[i] > arr[j]){ 
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void printArray(int *arr, int n){
    int i;
    for (i = 0; i < n; i++)
        printf("%d, ", arr[i]);
}
