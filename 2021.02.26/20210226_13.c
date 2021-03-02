/* Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef. */
#include <stdio.h>
#include <stdlib.h>
#define M_IN_H 60
#define S_IN_M 60
#define S_IN_H 3600
typedef struct tagTMyTime {
    int hours;
    int minutes;
    int seconds;
} t_time __attribute__((packed));

t_time *addSeconds(t_time *time, int sec);
t_time *addMinutes(t_time *time, int min);
t_time *addHours(t_time *time, int hour);
unsigned calcSeconds(t_time *time);
t_time *calcTime(unsigned seconds);
t_time *sumTime(t_time *a, t_time *b);
t_time *substractTime(t_time *a, t_time *b);
void printTime(t_time *time);

int main(void){
    t_time time1 = {1, 59, 59};  /* change these values to test functions */
    t_time time2 = {0, 59, 45};  /* change these values to test functions */
    int seconds = 122;           /* change these values to test functions */
    int minutes = 10;            /* change these values to test functions */
    int hours = 3;               /* change these values to test functions */

    t_time *ptr1 = NULL;
    t_time *ptr2 = NULL;
    ptr1 = &time1;
    ptr2 = &time2;

    printf("time1:\n");
    printTime(ptr1);

    ptr1 = addSeconds(ptr1, seconds);
    printf("\ntime1 + %d seconds:\n", seconds);
    printTime(ptr1);

    ptr1 = addMinutes(ptr1, minutes);
    printf("\ntime1 + %d minutes:\n", minutes);
    printTime(ptr1);

    ptr1 = addHours(ptr1, hours);
    printf("\ntime1 + %d hours:\n", hours);
    printTime(ptr1);

    printf("\nNumber of seconds in time1: %d\n", calcSeconds(ptr1));
    t_time *time3 = calcTime(seconds); /* test with random integer input instead of "seconds" */
    printf("\nTime from %d seconds:\n", seconds);
    printTime(time3);

    ptr1 = sumTime(ptr1, ptr2);
    printf("\ntime1 + time2:\n");
    printTime(ptr1);

    ptr1 = substractTime(ptr1, ptr2);
    printf("\ntime1 - time2:\n");
    printTime(ptr1);

    substractTime(ptr2, ptr1);

    free(ptr1);
    return 0;
}

/* adds seconds to given time structure then returns a pointer to the structure */
t_time *addSeconds(t_time *time, int sec){
    return calcTime(calcSeconds(time) + sec);    
}

/* adds minutes to given time structure then returns a pointer to the structure */
t_time *addMinutes(t_time *time, int min){
    return calcTime(calcSeconds(time) + min * S_IN_M);
}

/* adds hours to given time structure then returns a pointer to the structure */
t_time *addHours(t_time *time, int hour){
    time->hours += hour;
    return time;
}

/* returns number of seconds in given time structure */
unsigned calcSeconds(t_time *time){    
    return  time->hours * S_IN_H + time->minutes * S_IN_M + time->seconds;
}

/* returns pointer to time structure from a given number of seconds */
t_time *calcTime(unsigned seconds){

    t_time *time = malloc(sizeof(t_time));
    time->hours = seconds / S_IN_H;
    time->minutes = (seconds - (time->hours * S_IN_H)) / M_IN_H;
    time->seconds = seconds % S_IN_M;
    return time;
}

/* returns a pointer to a time structure of two time structures combined */
t_time *sumTime(t_time *a, t_time *b){
    return calcTime(calcSeconds(a) + calcSeconds(b));
}

/* substracts two time structures and returns a pointer to the new structure or returns error if result is negative */
t_time *substractTime(t_time *a, t_time *b){
    int r, s;
    if ((r = calcSeconds(a)) < (s = calcSeconds(b))){
        printf("\nError! Can't go back in time...yet.\n");
        return a;
    } else 
        return calcTime(r - s);
}

/* prints time structure */
void printTime(t_time *time){
    printf("%s%d:%s%d:%s%d\tHH:MM:SS\n",time->hours > 9 ? "" : "0", time->hours,
            time->minutes > 9 ? "" : "0", time->minutes, time->seconds > 9 ? "" : "0", time->seconds);
}