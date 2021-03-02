/* Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера. */
#include <stdio.h>
typedef long long int t_lli;

int main(void){
    t_lli max = 9223372036854775807;
    printf("How many hours does it take to make good programmer: %lld\n", max);
    return 0;
}