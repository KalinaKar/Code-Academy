/* Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората. Заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см. */
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define PI 3.1415926
typedef struct {
    int peelThicknessMm;
    int dieameterMm;
    unsigned long long int volume;

}watermelon;
unsigned long long int getVolume (watermelon w){
    double pureR = (double)(w.dieameterMm - 2*w.peelThicknessMm)/2;
    double V = 4.1888*pureR*pureR*pureR;
    return (unsigned long long)V;
}
int main() {
    srand(time(NULL));
    watermelon* melonArray;
    watermelon* pumpkinArray;
    watermelon melon;
    watermelon pumpkin;
    watermelon averageMelon = {0,0,0};
    watermelon averagePumpkin = {0,0,0};
    int melonCount;
    int pumpkinCount;
    printf("how many melon watermelons?\n");
    scanf("\n%d",&melonCount);
    printf("how many pumpkin watermelons?\n");
    scanf("\n%d",&pumpkinCount);
    melonArray = malloc(sizeof(watermelon)*melonCount);
    pumpkinArray = malloc(sizeof(watermelon)*pumpkinCount);
    for (int i = 0; i < melonCount; i++)
    {
        melonArray[i].dieameterMm = (rand() % (1400 - 150 + 1)) + 150;
        melonArray[i].peelThicknessMm = (rand() % (35 - 5 + 1)) + 5;
        unsigned long long int V =getVolume(melonArray[i]);
        melonArray[i].volume = V;
        averageMelon.dieameterMm += melonArray[i].dieameterMm;
        averageMelon.peelThicknessMm += melonArray[i].peelThicknessMm;
        averageMelon.volume += melonArray[i].volume;
    }
    free(melonArray);
    averageMelon.dieameterMm/=melonCount;
    averageMelon.peelThicknessMm/=melonCount;
    averageMelon.volume/=melonCount;

    for (int i = 0; i < pumpkinCount; i++)
    {
        pumpkinArray[i].dieameterMm = (rand() % (950 - 350 + 1)) + 350;
        pumpkinArray[i].peelThicknessMm = (rand() % (9 - 3 + 1)) + 3;
        unsigned long long int V =getVolume(pumpkinArray[i]);
        pumpkinArray[i].volume = V;
        averagePumpkin.dieameterMm += pumpkinArray[i].dieameterMm;
        averagePumpkin.peelThicknessMm += pumpkinArray[i].peelThicknessMm;
        averagePumpkin.volume += pumpkinArray[i].volume;
    }
    free(pumpkinArray);
    averagePumpkin.dieameterMm/=pumpkinCount;
    averagePumpkin.peelThicknessMm/=pumpkinCount;
    averagePumpkin.volume/=pumpkinCount;
    if (averagePumpkin.volume>averageMelon.volume)
    {
        printf("it is better to buy %d watermelons with diamether %lf cantimeters and %lf cantimeters peel thickness\n"
        ,pumpkinCount,(double)averagePumpkin.dieameterMm/10,(double)averagePumpkin.peelThicknessMm/10);
        printf("instead of %d watermelons with diamether %lf cantimeters and %lf cantimeters peel thickness"
        ,melonCount,(double)averageMelon.dieameterMm/10,(double)averageMelon.peelThicknessMm/10);
        
    }
    else if (averagePumpkin.volume< averageMelon.volume){
        printf("it is better to buy %d watermelons with diamether %lf cantimeters and %lf cantimeters peel thickness\n"
        ,melonCount,(double)averageMelon.dieameterMm/10,(double)averageMelon.peelThicknessMm/10);
        printf("instead of %d watermelons with diamether %lf cantimeters and %lf cantimeters peel thickness\n"
        ,pumpkinCount,(double)averagePumpkin.dieameterMm/10,(double)averagePumpkin.peelThicknessMm/10);
    }
    else {
        printf("the end price of the both sorts is equel\n");
    }
    

}
