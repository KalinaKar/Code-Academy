/* Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата. */
#include <stdio.h>
union eleven {
    int a;
    int b;
    char c;
};

int main(void){
    union eleven uVar;
    uVar.a = -7;
    printf("%d\n", uVar.a);
    uVar.b = 10;
    printf("%d\n", uVar.b);
    uVar.c = 'c';
    printf("%c\n", uVar.c);

    union eleven uVar1 = {67};
    printf("a = %d, b = %d, c = %c\n", uVar1.a, uVar1.b, uVar1.c);
    return 0;
}