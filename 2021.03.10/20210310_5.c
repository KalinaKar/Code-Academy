#include <stdio.h>
#include <signal.h>
#include <unistd.h>
/* Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h */

void handleSignal(int iSignal){
    printf("\nHandle signal %d\n", iSignal);
}

int main(){
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    for (;;){
        sleep(1);
    }
    return 0;
}