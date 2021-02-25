/* Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори) */
#include <stdio.h>
/* слепва да идентификатора */
#define MY_CONCAT(x,y) x##y


int main(){  

    MY_CONCAT(print,f)("\nThis is test\n");
    int a = 3;
    printf("a = %d\n", a);
    a = MY_CONCAT(3, 6);
    printf("a = %d\n", a);

 return 0;
}