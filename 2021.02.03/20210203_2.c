/* Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */
#include <stdio.h>
int printArr(int *a, int l);

int main(void){
    int array[] = {15, 28, 39, 49, 2, 7};
    printArr(array, 6);
    return 0;
}

int printArr(int *a, int l){
    int i = 0;
    while (i < l)
        printf("%d ", a[i++]);
}