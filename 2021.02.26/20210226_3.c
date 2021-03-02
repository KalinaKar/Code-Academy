/* Дефинирайте потребителски тип към
указател. Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип. */
#include <stdio.h> 
typedef int* t_iptr;

int main(void){
    int a = 11;
    printf("a = %d\n", a);
    t_iptr b = &a;
    *b = 15;
    printf("a = %d\n", a);

    return 0;
}