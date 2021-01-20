#include <stdio.h>
#include <math.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void runningLight(int variable);
void printOffSet(int offset);

int main(int argc, char const *argv[]) {
    runningLight(687);
    return 0;
}

void runningLight(int variable) {
    int numOfBits = (int)log2(variable) + 1;

    for (size_t i = 0; i < numOfBits; i++) {
        printOffSet(i);
        if (variable & (1 << i)) {
            printf("%c", '*');
        }
        else {
            printf("%c", '-');
        }
        printOffSet(numOfBits - i - 1);
        printf("\n");

#ifdef _WIN32
        Sleep(1000);
#else
        sleep(1);
#endif
    }
}

void printOffSet(int offset) {
    if (offset <= 0){
        return;
    }
    for (size_t i = 0; i < offset; i++){
        printf("%c", '.');
    }
}