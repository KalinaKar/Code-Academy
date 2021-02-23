/* Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата. */
#include <stdio.h>
struct aStruct {
    unsigned int day : 8;
    unsigned int month : 8;
    unsigned int year : 32;
};

void printDate(struct aStruct *ptrStruct);
int validate(struct aStruct *ptrStruct);

int main(void){
    struct aStruct date1 = {13, 12, 2018};
    if(validate(&date1))
        printDate(&date1);
    else
        printf("Invalid date\n");

    struct aStruct date2 = {31, 1, 1};
    if (validate(&date2))
        printDate(&date2);
    else
        printf("Invalid date\n");
    return 0;
}

int validate(struct aStruct *ptrStruct){
    if (ptrStruct->day < 1 || ptrStruct->day > 31){
        return 0;
    } else if (ptrStruct->month < 1 || ptrStruct->month > 12){
        return 0;
    }else if (ptrStruct->year < 1){
        return 0;
    }
    switch (ptrStruct->month)
    {
    case 2:
        if (ptrStruct->day > 29)
            return 0;
        break;
    case 4 || 6 || 9 || 11:
        if (ptrStruct->day > 30)
            return 0;
    default:
        break;
    }
    return 1;
}

void printDate(struct aStruct *ptrStruct){
    printf("Date(DD/MM/YY): %d/%d/%d\n", ptrStruct->day, ptrStruct->month, ptrStruct->year);
}