/*  Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците */
#include <stdio.h>
char *month_name(int n);

int main(void){
    int a;
    printf("Enter month number: ");
    scanf("%i", &a);
    printf("This is the month %s. What a great month!\n", month_name(a));
    return 0;
}

char *month_name(int n){    
    static char *name[] = {
        "Illegal month",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    return (n < 1 || n > 12) ? name[0] : name[n];
}
