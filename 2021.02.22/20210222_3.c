/* Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана. */
#include <stdio.h>
#include <string.h>
struct name {
    char name[128];
    int amount;
    float price;
};

int main(void){
    struct name iceCream;
    strcpy(iceCream.name, "chocolate");
    iceCream.amount = 50;
    iceCream.price = 2.50;
    printf("name: %s\namount: %d\nprice: %.2f\n", iceCream.name, iceCream.amount, iceCream.price);
    return 0;
}
