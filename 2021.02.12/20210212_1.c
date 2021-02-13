/* Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива. */
#include <stdio.h>
#include <stdlib.h>
void dynArr();

int main(){
    dynArr();
    return 0;

}

void dynArr(){
    int num, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int *ip = NULL;
    ip = malloc(num * sizeof(int));
    if (NULL == ip)
    {
        printf("Allocation memory error!\n");
        exit;
    }
    int *ipCopy = ip;
    for (i = 0; i < num; i++){
    printf("Enter element %d: ", i);
    scanf("%d", ipCopy);
    sum += *ipCopy;
    ipCopy++;
    }

    printf("\nSum of elements: %d\n", sum);

    free(ip);
}
