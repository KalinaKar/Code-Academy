/* Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6). */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fiveThirtyFive();
int sixFortyTwo();
int sixFortyNine();

int main(void){
    srand((unsigned)time(0));    

    int choice;
    while(1){
        printf("Good luck! Choose your game:\nFor 5/35 press 1.\nFor 6/42 press 2.\nFor 6/49 press 3.\n");
        scanf("%d", &choice);
        if (choice < 1 || choice > 3)
            continue;

        switch (choice){
        case 1:
            fiveThirtyFive();
            break;
        case 2:
            sixFortyTwo();
            break;
        case 3:
            sixFortyNine();
            break;
        }
        printf("Try your luck again? Press any key. Press 0 to exit.\n");
        scanf("%d", &choice);
        if (choice == 0)
            break;        
    }
    return 0;
}

int fiveThirtyFive(){
    printf("Toto 5/35\nNumbers: ");
    int arr[6] = {0};
    int i = 0;
    int n, j;

    while (i < 5){
        n = rand() % 36;
        if (n == 0)
            continue;
        for (j = 0; j < i; j++)
            if (arr[j] == n)
                continue;        
        arr[i] = n;
        printf("%d ", arr[i++]);
    }
    printf("\n");
}

int sixFortyTwo(){
    printf("Toto 6/42\nNumbers: ");
    int arr[7] = {0};
    int i = 0;
    int n, j;
    while (i < 6){
        n = rand() % 42;
        if (n == 0)
            continue;
        for (j = 0; j < i; j++)
            if (arr[j] == n)
                continue;        
        arr[i] = n;
        printf("%d ", arr[i++]);
    }
    printf("\n");
}

int sixFortyNine(){
    printf("Toto 6/49\nNumbers: ");
    int arr[7] = {0};
    int i = 0;
    int n, j;
    while (i < 6){
        n = rand() % 49;
        if (n == 0)
            continue;
        for (j = 0; j < i; j++)
            if (arr[j] == n)
                continue;        
        arr[i] = n;
        printf("%d ", arr[i++]);
    }
    printf("\n");
}