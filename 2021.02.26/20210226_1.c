/* Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте. */
#include <stdio.h>
typedef struct birthday{
    int day;
    int month;
    int year;
} t_birthday;

int main(void){
    t_birthday ivan = {12, 6, 1994};
    printf("Ivan's birthday is: %d.%d.%d\n", ivan.day, ivan.month, ivan.year);
    return 0;
}
