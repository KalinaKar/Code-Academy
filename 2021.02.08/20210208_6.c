/* Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях */
#include <stdio.h>
int maxNum(int *arr, int len);
int call(void);

int main(void){
    call();
    return 0;
}

int call(void){
    int n, i;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int myArray[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &myArray[i]);
    int *p = myArray;
    printf("Largest number is %d\n", maxNum(p, n));
}

int maxNum(int *arr, int len){
    int i;
    int largest = arr[0];
    for (i = 0; i < len; i++){
        if (largest < arr[i])
            largest = arr[i];
    }
    return largest;
}