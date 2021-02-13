/* Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет. */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 10; /* change string length here */
    int *myBuff = NULL;
    myBuff = calloc(n, sizeof(int));
    int i;
    for (i = 0; i < n; i++){
        printf("myBuff[%d] Value: %d, Address: %d\n", i, myBuff[i], &myBuff[i]);
    }
    free(myBuff);
    return 0;
}