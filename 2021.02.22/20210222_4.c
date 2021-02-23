/* Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. */
#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};

int main(void){
    struct date contractdate= {11, 5, 1995};    
    printf("day: %d\nmonth: %d\nyear: %d\n", contractdate.day, contractdate.month, contractdate.year);
    contractdate.day = 24;
    contractdate.month = 12;
    contractdate.year = 1999;
    printf("\nday: %d\nmonth: %d\nyear: %d\n", contractdate.day, contractdate.month, contractdate.year);
    struct date newdate = {.month = 9, .year = 2002, .day = 15};
    printf("\nday: %d\nmonth: %d\nyear: %d\n", newdate.day, newdate.month, newdate.year);      
    return 0;
}