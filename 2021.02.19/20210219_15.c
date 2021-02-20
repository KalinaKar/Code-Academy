/* Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. */
#include <stdio.h>
#define M_IN_H 60
#define S_IN_M 60
#define S_IN_H 3600
struct tagTMyTime {
    int hours;
    int minutes;
    int seconds;
};

struct tagTMyTime addSeconds(struct tagTMyTime time, int sec);
struct tagTMyTime addMinutes(struct tagTMyTime time, int min);
struct tagTMyTime addHours(struct tagTMyTime time, int hour);
unsigned calcSeconds(struct tagTMyTime time);
struct tagTMyTime calcTime(unsigned seconds);
struct tagTMyTime sumTime(struct tagTMyTime a, struct tagTMyTime b);
struct tagTMyTime substractTime(struct tagTMyTime a, struct tagTMyTime b);
void printTime(struct tagTMyTime time);

int main(void){
    struct tagTMyTime time1 = {1, 59, 59};  /* change these values to test functions */
    struct tagTMyTime time2 = {0, 59, 45};  /* change these values to test functions */
    int seconds = 122;                      /* change these values to test functions */
    int minutes = 10;                       /* change these values to test functions */
    int hours = 3;                          /* change these values to test functions */

    printf("time1:\n");
    printTime(time1);
    time1 = addSeconds(time1, seconds);
    printf("\ntime1 + %d seconds:\n", seconds);
    printTime(time1);
    time1 = addMinutes(time1, minutes);
    printf("\ntime1 + %d minutes:\n", minutes);
    printTime(time1);
    time1 = addHours(time1, hours);
    printf("\ntime1 + %d hours:\n", hours);
    printTime(time1);
    printf("\nNumber of seconds in time1: %d\n", calcSeconds(time1));
    struct tagTMyTime time3 = calcTime(seconds); /* test with random integer input instead of "seconds" */
    printf("\nTime from %d seconds:\n", seconds);
    printTime(time3);
    time1 = sumTime(time1, time2);
    printf("\ntime1 + time2:\n");
    printTime(time1);
    time1 = substractTime(time1, time2);
    printf("\ntime1 - time2:\n");
    printTime(time1);
    substractTime(time2, time1);

    return 0;
}

/* adds seconds to given time structure then returns the structure */
struct tagTMyTime addSeconds(struct tagTMyTime time, int sec){
    return calcTime(calcSeconds(time) + sec);    
}

/* adds minutes to given time structure then returns the structure */
struct tagTMyTime addMinutes(struct tagTMyTime time, int min){
    return calcTime(calcSeconds(time) + min * S_IN_M);
}

/* adds hours to given time structure then returns the structure */
struct tagTMyTime addHours(struct tagTMyTime time, int hour){
    time.hours += hour;
    return time;
}

/* returns number of seconds in given time structure */
unsigned calcSeconds(struct tagTMyTime time){    
    return  time.hours * S_IN_H + time.minutes * S_IN_M + time.seconds;
}

/* returns a time structure from a given number of seconds */
struct tagTMyTime calcTime(unsigned seconds){
    struct tagTMyTime time;
    time.hours = seconds / S_IN_H;
    time.minutes = (seconds - (time.hours * S_IN_H)) / M_IN_H;
    time.seconds = seconds % S_IN_M;
    return time;
}

/* returns the time in two time structures combined */
struct tagTMyTime sumTime(struct tagTMyTime a, struct tagTMyTime b){
    return calcTime(calcSeconds(a) + calcSeconds(b));
}

/* substracts two time structures or returns error if result is negative */
struct tagTMyTime substractTime(struct tagTMyTime a, struct tagTMyTime b){
    int r, s;
    if ((r = calcSeconds(a)) < (s = calcSeconds(b))){
        printf("\nError! Can't go back in time...yet.\n");
        return a;
    } else 
        return calcTime(r - s);
}

/* prints time structure */
void printTime(struct tagTMyTime time){
    printf("%s%d:%s%d:%s%d\tHH:MM:SS\n",time.hours > 9 ? "" : "0", time.hours,
            time.minutes > 9 ? "" : "0", time.minutes,time.seconds > 9 ? "" : "0", time.seconds);
}
