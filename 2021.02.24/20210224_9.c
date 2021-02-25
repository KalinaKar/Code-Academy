/* Напишете макрос, който прави идентификатор на низ
(стринг) */
#include <stdio.h>
#define MY_STR(x) #x

int main(){

    int turnIntoAString = 0;
    printf(MY_STR(turnIntoAString));

 return 0;
} 