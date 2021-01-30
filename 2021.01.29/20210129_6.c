/* Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/
#include <stdio.h>

long decToBin(int n);

int main(void){
    int a;
    printf("Enter a decimal number:\n");
    scanf("%u", &a);
    printf("Your number in binary: %d\n", decToBin(a));
    return 0;
}

long decToBin(int n)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        binarynum = binarynum + rem * temp;
        temp = temp * 10;
    }
    return binarynum;
}