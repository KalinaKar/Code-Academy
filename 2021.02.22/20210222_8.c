/* Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число. */
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

void printUnion(union tagUnion *pUnion, enum tagEnum *pEnum);

int main(void){
    union tagUnion test;    
    strcpy(test.string, "Hello Hello");
    enum tagEnum tEnum = VAL_INT;
    printUnion(&test, &tEnum);
    return 0;
}

void printUnion(union tagUnion *pUnion, enum tagEnum *pEnum){
    switch (*pEnum){
    case VAL_INT:
        printf("%d\n", pUnion->iValue);
        break;
    case VAL_CHAR:
        printf("%s\n", pUnion->string);    
    default:
        break;
    }
}
