/* Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ” */
#include <stdio.h>
/* добавя префикс към функцията printf */
#define MY_PRINT(...) printf("TRACE: " __VA_ARGS__)

int main(void){

    MY_PRINT("%c, %lf, %i\n",
             'k', 5.897856, 21);
    return 0;
}