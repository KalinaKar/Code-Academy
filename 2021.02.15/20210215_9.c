/* Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“? */
#include <stdio.h>

int main(void){
    int a;
    int *pa;
    pa = &a;
    int **ppa;
    ppa = &pa;
    **ppa = 15;

    printf("a address =\t%p\ta value = %i\n", &a, a);
    printf("pa address =\t%p\tpa value = %i\n", &pa, *pa);
    printf("ppa address =\t%p\tppa value = %i\n", &ppa, **ppa);

    return 0;
}