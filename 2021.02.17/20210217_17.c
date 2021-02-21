/* Имаме 2 сортирани масиви А и В с различна размерност k и l и
произволни int числа.
Образувайте масив С, образуван от смесването на А и В, така че С да
съдържа елементите на А и В, но да е подреден и да не се налага да го
сортираме отново. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUM 1500
#define N 88
#define M 50
int fillArray(int *arr, int n);
int sortArray(int *arr, int n);
void mergeArrays(int a[], int m, int b[], int n, int sorted[]);
void printArray(int *arr, int n);

int main(void){
    int i;

    int arr1[N];
    printf("Array 1:\n");
    fillArray(arr1, N);
    printArray(arr1, N);
    printf("\nArray 1 sorted:\n");
    sortArray(arr1, N);
    printArray(arr1, N);
    int arr2[N];

    printf("\nArray 2:\n");
    fillArray(arr2, M);    
    printArray(arr2, M);
    printf("\nArray 2 sorted:\n");
    sortArray(arr2, M);
    printArray(arr2, M);

    int arr3[N + M] = {0};
    printf("\nArray 3 merge sorted:\n");
    mergeArrays(arr1, N, arr2, M, arr3);
    printArray(arr3, N + M);
    printf("\n");
    return 0;
}

int fillArray(int *arr, int n){
    int i;
    for (i = 0; i < n; i++)
        arr[i] = rand() % MAX_NUM + 1;
    return *arr;
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

void mergeArrays(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;
  j = k = 0;
  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m) {
      for (; i < m + n;) {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;) {
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}

void printArray(int *arr, int n){
    int i;
    for (i = 0; i < n; i++)
        printf("%d, ", arr[i]);
}
