/*  Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. */
#include <stdio.h>
extern int myArray[][12];
int date(int year, int month, int day);
void checkDate();

int main(){
    checkDate();
    return 0;
}

void checkDate(){
    int year, month, day;
    int is_leap = 0;
    /* year check */
    printf("Enter an year:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("This is a leap year.\n");
        is_leap = 1;
    }
    else 
        printf("This is not a leap year.\n");
    /* month check */
    do {
        printf("Enter a valid month:\n");
        scanf("%d", &month);
    } while (month < 1 || month > 12);
    /* day check */
    if (is_leap == 0){
        do {
            printf("Enter a valid day:\n");            
            scanf("%d", &day);
        } while (day < 0 || day > 28);
    } else {
        do {
            printf("Enter a valid day:\n");
            scanf("%d", &day);
        } while (day < 0 || day > 29);
    }
    printf("Day number: %d\n", date(year, month, day));
}
int date(int year, int month, int day){
    int numDays = 0, i;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        for (i = 0; i < month - 1; i++)
            numDays += myArray[1][i];
        numDays += day;
        return numDays;
    } else{
        for (i = 0; i < month - 1; i++)
            numDays += myArray[0][i];
        numDays += day;
        return numDays;
    }
}
int myArray[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };