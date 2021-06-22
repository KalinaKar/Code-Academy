/* Имаме 2 сортирани масива А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUM 1500
#define N 88
int fillArray(int *arr, int n);
int sortArray(int *arr, int n);
void mergeArrays(int a[], int m, int b[], int n, int sorted[]);
void printArray(int *arr, int n);
int isSorted(int *arr, int n);

int main(void){

    int i;

    int arr1[N];
    fillArray(arr1, N);
    sortArray(arr1, N);
    if(!isSorted(arr1, N)){
        exit(1);
    }
    int arr2[N];
;
    fillArray(arr2, N);    
    sortArray(arr2, N);
    if(!isSorted(arr2, N)){
        exit(2);
    }

    int arr3[N + N] = {0};
    mergeArrays(arr1, N, arr2, N, arr3);
    if(!isSorted(arr3, N+N)){
        exit(3);
    }
    printf("\n");

    return 0;
}

int isSorted(int *arr, int n){
    int i;
    for(i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
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