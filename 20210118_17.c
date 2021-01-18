#include <stdio.h>

long long int generator();

int main(){
    printf("%d\n", generator());
    printf("%d\n", generator());
    printf("%d\n", generator());
    printf("%d\n", generator());
    return 0;
}

long long int generator(){
    static long long int x = 1;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;

	return x;
}
