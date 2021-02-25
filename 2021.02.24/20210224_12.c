/* Напишете макро GENERIC_MAX(type),
което трябва да се експандне до следната функция: 
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
} */
#include <stdio.h>

#define GENERIC_MAX(TYPE) TYPE TYPE##_max(TYPE x, TYPE y){return (x) > (y) ? (x) : (y);}

GENERIC_MAX(int)
GENERIC_MAX(float)
GENERIC_MAX(char)

int main(){
    int a = 1; 
    int b = 3;
    int i = int_max(a,b);
    printf("Generic max is: %d\n", i);

    float c = 5.8;
    float d = 7.4;
    float f = float_max(c, d);
    printf("Generic max is: %f\n", f);

    char e = 'k';
    char g = 'o';
    char ch = char_max(e, g);
    printf("Generic max is: %c\n", ch);
    return 0;
}