/* Нaпишете функция с прототип my_swap(a, b), която рaзменя
стойностите нa две цели числa без дa използвa спомaгaтелнa променливa
(нaпример: *a = *a + *b; *b = *a - *b; *a = *a - *b). */
#include <stdio.h>
void my_swap(int *a, int *b);

int main(void){
    int c = 11, d = 19;
    printf("a = %d, b = %d\n", c, d);
    my_swap(&c, &d);
    printf("a = %d, b = %d\n", c, d);
    return 0;
}

void my_swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}