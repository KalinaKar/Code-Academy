#include <stdio.h>

int main(){
    int nA = 1;
    scanf("%d", &nA);
    /*Ако nA има стойност 1, nB да присвои 2.
    Ако ли не - nB да присвои 0*/
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    if(nA>nB){
        printf("A has the bigger value.");
    } else if (nB>nA){
        printf("B has the bigger value.");
    } else{
        printf("A and B are equal.");
    }

    return 0;
}
