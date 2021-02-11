/* Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането. */
#include <stdio.h> 
int sumEvens(int *pointerToArr, int numberOfElements);

int main(void){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *ip = arr;
    printf("Sum of even elements: %d\n", sumEvens(ip, 10));
    return 0;
}

int sumEvens(int *pointerToArr, int numberOfElements){
    int i, sum = 0;
    for (i = 0; i < numberOfElements; i += 2){
        sum += *(pointerToArr + i);
        printf("%d\n", sum);
    }
    return sum;
}
