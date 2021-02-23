/* Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана. */
#include <stdio.h>
#include <string.h>
union uni {
    int ia;
    double fb;
    char cc[64];
};

int main(void){
    union uni myUni;
    myUni.ia = 50;
    printf("myUni: %d, %.18lf, %s\n", myUni.ia, myUni.fb, myUni.cc);

    strcpy(myUni.cc, "Forty to one");
    printf("myUni: %d, %.18lf, %s\n", myUni.ia, myUni.fb, myUni.cc);

    myUni.fb = 3.14;
    printf("myUni: %d, %.18lf, %s\n", myUni.ia, myUni.fb, myUni.cc);
    return 0;
}