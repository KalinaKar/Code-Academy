#include <stdio.h>

int main() {
    int nA, nB, nX, nY;
    printf("Give value to A:");
    scanf("%d", &nA);
    printf("Give value to B:");
    scanf("%d", &nB);
    printf("Give value to X:");
    scanf("%d", &nX);
    printf("Give value to Y:");
    scanf("%d", &nY);

    if (nA > nB && nA != 0) {
        printf("&& Operator: Both conditions are true\n");
    }
    if (nX > nY || nY != 20) {
        printf("|| Operator: Only one condition is true\n");
    }
    if (!(nA > nB && nB != 0)) {
        printf("! Operator: Both conditions are true\n");
    } else {
        printf("! Operator: At least one of the conditions is false.\n");
    }

    return 0;
}
