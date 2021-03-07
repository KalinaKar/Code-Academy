/*  С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC. */
#include <stdio.h>
#include <stdlib.h>
float calcTempHut(float *tPeak);
float calcTempPeak(float *tHut);
void menu(void);

int main(void){

    menu();
    
    return 0;
}

float calcTempHut(float *tPeak){
    return *tPeak + 0.5 * 9.68;
}

float calcTempPeak(float *tHut){
    return *tHut - 0.5 * 9.68;
}

void menu(void){    
    while (1){
        float *tHut = malloc(sizeof(float));
        float *tPeak = malloc(sizeof(float));
        int *choice = malloc(sizeof(int)); 
        printf("\nWhich forecast would you like to know?\nPress 1 for the Hut\nPress 2 for the Peak\nPress 3 to exit\n");
        scanf("%d", choice);
        if (*choice == 1){
            printf("Enter tempreture at the Peak:\n");
            scanf("%f", tPeak);
            printf("If the atmospheric pressure is normal and the tempreture at p. Vihren (2918m) is %.1f C, "
                    "then the temperature at the hut (1950m) is %.1f C\n", *tPeak, calcTempHut(tPeak));
        } else if (*choice == 2){
            printf("Enter tempreture at the Hut:\n");        
            scanf("%f", tHut);
            printf("If the atmospheric pressure is normal and the tempreture at hut Vihren (1950m) is %.1f C, "
                    "then the temperature at the peak (2918m) is %.1f C\n", *tHut, calcTempPeak(tHut));

        } else if (*choice == 3){
            break;
        } else {
            printf("Invalid choice.\n");
        }
        free(choice);
        free(tHut);
        free(tPeak);
    }
}