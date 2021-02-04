/* Напишете функцията int binarySearch(int a[], int n, int x),
която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. */
#include <stdio.h>
int binarySearch(int a[], int n, int x);

int main(void){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    printf("%d\n", binarySearch(array, 17, 15));
    return 0;
}

int binarySearch(int array[], int n, int x){
   int start = 0, end = n;

   while (start <= end){
      int middle = start + (end- start )/2;
      if (array[middle] == x)
         return middle;
      if (array[middle] < x)
         start = middle + 1;
      else
         end = middle - 1;
   }
   return -1;
}