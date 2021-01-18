#include <stdio.h>

int main(){
    int A = 1, B = 0; 
    int isTrue = !(A&&B); //A&&B = 0; !0 = 1;
    printf("!(A&&B) isTrue = %d\n", isTrue); //isTrue = 1;

    isTrue = !A||!B; //!A = 0; !B=1; 0||1 = 1;
    printf("!A||!B isTrue = %d\n", isTrue); //isTrue = 1;

    int isFalse = !(A||B); //A||B = 1; !1 = 0;
    printf("!(A||B) isFalse = %d\n", isFalse); //isTrue = 0;

    isFalse = !A&&!B; //!A = 0; !B = 1; 0&&1 = 0;
    printf("!A&&!B isFalse = %d\n", isFalse); //isTrue = 0;

    return 0;
}
