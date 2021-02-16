/* Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf. */
#include <stdio.h> 

int main(void){
    int a = 11;
    int *ip = &a;
    printf("int *ip address: %p\n", ip);

    return 0;
}