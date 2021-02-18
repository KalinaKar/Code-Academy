/* Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто. */
#include <stdio.h> 
#define MAX_NUM 1000
int isPrime(int n);

int main(void){
    int primes[MAX_NUM];
    int *ipPrimes = primes;
    printf("Prime numbers: \n");
    int num;
    for (num = 0; num < MAX_NUM; num++){
        if(isPrime(num) == 1){
            *ipPrimes = num;
            printf("%d ", *ipPrimes++);
        }
    }
    printf("\n"); 
    return 0;
}

int isPrime(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}