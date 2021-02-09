/* Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана. */
#include <stdio.h>
void multiplyArr(int *arr1[], int *arr2[], int n);
void call();

int main(void){
    call();
    return 0;
}

void call(){
    int n, i;
    printf("Enter the number of elements in the arrays:\n");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter %d integers for array 1:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter %d integers for array 2:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    int *p1 = arr1, *p2 = arr2;
    multiplyArr(p1, p2, n);
}

void multiplyArr(int *arr1[], int *arr2[], int n){
    int arr3[n];
    int i;
    for(i = 0; i < n; i++)
        printf("%d * %d = %d\n", arr1[i], arr2[i], arr3[i] = arr1[i] * arr2[i]);
    printf("The new array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr3[i]);
    printf("\n");
}
