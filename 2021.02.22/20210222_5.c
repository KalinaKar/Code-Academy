/* Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор. */
#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};

int main(void){
    /* 4 differents ways to define and initialize an array of structures */
    
    /* struct date arrDate[10];
    arrDate[1].day = 11;
    arrDate[1].month = 5;
    arrDate[1].year = 1995; */

    struct date arrDate[10] = {{1, 4, 2007}, {15, 11, 2025}, {18, 12, 1885}, {31, 7, 681}, {27, 10, 3001},
                                {20, 9, 2020}, {21, 6, 2018}, {19, 3, 2005}, {13, 1, 1654}, {3, 2, 1634}};

    /* struct date arrDay[10] = {[1] = {15, 12, 2016}, [2] = {13, 20, 1551}}; */
     /* struct date arrDay[10] = {[1].day = 13, [1].year = 1996, [1].month = 9}; */


    return 0;
}