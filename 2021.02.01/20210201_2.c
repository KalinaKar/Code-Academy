/*  Напишете функцията double atof(char *s), която
преобразува стринг в число с десетична запетая. */
#include <stdio.h>
double atof(char *s);

int main(void){
    printf("%lf\n", atof("1234.56789")); /* change the number here */
    return 0;
}

double atof(char *s){
    int i = 0;
    double left = 0, right = 0, power = 1;
    /* this loop iterates through the left side of the floating point */
    while (s[i] >= '0' && s[i] <= '9')
        left = 10 * left + (s[i++] - '0');
    
    /* this loop iterates through the right side of the floating point */
    i++;/* to skip the floating point*/
    while (s[i] >= '0' && s[i] <= '9'){
        right = 10 * right + (s[i++] - '0');
        power *= 0.1;
    }
    
    return left + (right * power);
}