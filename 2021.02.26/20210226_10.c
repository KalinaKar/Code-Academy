/* Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С */
#include <stdio.h>

int main(){
    char cValue = '0';
    printf("%c\n", cValue);
    short sValue = -(cValue + cValue);
    printf("%d\n", sValue);
    unsigned short usValue = -(cValue + cValue);
    printf("%u\n", usValue);
    int iValue = sValue;
    printf("%d\n", iValue);
    unsigned int uiValue = sValue;
    printf("%u\n", uiValue);
    long lValue = iValue;
    printf("%ld\n", lValue);
    unsigned long ulValue = iValue;
    printf("%lu\n", cValue);
    float fValue = ulValue;
    printf("%f\n", fValue);
    double dfValue = ulValue;
    printf("%lf\n", dfValue);

    return 0;
}
