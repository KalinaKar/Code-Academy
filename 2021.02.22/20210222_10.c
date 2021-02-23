/* Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура. */
#include <stdio.h>
#include <string.h>
union tagUnion{
    int iValue;
    char string[128];
};

enum tagEnum{
    VAL_INT,
    VAL_CHAR
};

struct tagStruct{
    union tagUnion mUnion;
    enum tagEnum mEnum;
};
void printStruct(struct tagStruct *pStruct);
    

int main(void){
    struct tagStruct value = {12131415, VAL_INT};
    printStruct(&value);
    value.mEnum = VAL_CHAR;
    strcpy(value.mUnion.string, "Unions and Enums\n");
    printStruct(&value);
    return 0;
}

void printStruct(struct tagStruct *pStruct){
    if (VAL_INT == pStruct->mEnum){
        printf("INT: %d\n", pStruct->mUnion.iValue);
    } else if (VAL_CHAR == pStruct->mEnum){
        printf("STR: %s\n", pStruct->mUnion.string);
    }
}