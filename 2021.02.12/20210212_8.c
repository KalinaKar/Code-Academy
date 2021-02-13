/* Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()) */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int *iBuffer = NULL;
    iBuffer = alloca(n * sizeof(int));
    int i, sum = 0;
    for (i = 0; i < n; i++){
        printf("iBuff[%d] Value: %d, Address: %d\n", i, iBuffer[i], &iBuffer[i]);
    }

    return 0;
}