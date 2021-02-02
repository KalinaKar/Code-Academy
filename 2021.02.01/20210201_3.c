/* Добавете проверка във функцията double atof(char *s) дали
подаденият стринг няма показни позиции преди числото и
ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */
#include <stdio.h>
double atof(char *s);

int main(void){
    printf("%lf\n", atof("a'B' . , c-d--ef 1234.56789")); /* change the number here */
    return 0;
}

double atof(char *s){
    int i = 0, sign = 1;
    double left = 0, right = 0, power = 1;
    /* this loop iterates through the left side of the floating point */
    for ( ; s[i]; i++)
        if (s[i] == '-' && (s[i+1] >= '0' && s[i+1] <= '9')) /* if '-' is right before the number*/
            sign = -1;
        else if (s[i] >= '0' && s[i] <= '9') 
            left = 10 * left + (s[i] - '0');
        else if ((s[i] == '.' || s[i] == ',') && (s[i+1] >= '0' && s[i+1] <= '9')){
            i++; /* stops at a floating point */
            break; 
        } 
    
    /* this loop iterates through the right side of the floating point */
    while (s[i] >= '0' && s[i] <= '9'){
        right = 10 * right + (s[i++] - '0');
        power *= 0.1;
    }
    
    return left * sign + right * power * sign;
}