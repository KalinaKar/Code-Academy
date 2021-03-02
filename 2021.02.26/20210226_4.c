/* Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност. */
#include <stdio.h>
typedef int t_i;

t_i add(t_i *a, t_i *b){
    return *a + *b;
}

int main(void){
    t_i a = 5;
    t_i b = 8;
    t_i c = add(&a, &b);
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}