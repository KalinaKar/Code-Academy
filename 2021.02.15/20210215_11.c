/* Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери. */
#include <stdio.h> 

int main(void){
    int a = 100;
    int b = 7;
    int *ip_a = &a;
    int *ip_b = &b;
    int c = *ip_a * *ip_b;
    printf("%d * %d = %d\n",*ip_a, *ip_b, c);

    float d = 0.1;
    float *fp_d = &d;
    float e = *ip_a * *fp_d;
    printf("%d * %f = %f\n",*ip_a, *fp_d, e);

    return 0;
}