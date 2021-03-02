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
#include <stdio.h>
#include <stdlib.h>
typedef struct watermellon {
    int diameter;
    float rind;
} t_wmln; 

int makeMelon(int num);
int makePumpkin(int num);

int main(void){
    int A = 10;
    int B = 15;
    int a = makeMelon(A);
    int b = makePumpkin(B);

    if (a > b)
    printf("1\n");
    return 0;
}

int makeMelon(int num){
    t_wmln *melon = malloc(num * sizeof(t_wmln));
    int i;
    int diameterSum = 0;
    int rindSum = 0;
    for (i = 0; i < num; i++){
        melon[i].diameter = (rand() % 126) + 15;
        diameterSum += melon[i].diameter;
        melon[i].rind = ((rand() % 31) + 5) / 10.0;
        rindSum += melon[i].rind;
    }
    return (diameterSum - rindSum)/ num;
}

int makePumpkin(int num){
    t_wmln *pumpkin = malloc(num * sizeof(t_wmln));
    int i;
    int diameterSum = 0;
    int rindSum = 0;
    for (i = 0; i < num; i++){
        pumpkin[i].diameter = (rand() % 61) + 35;
        diameterSum += pumpkin[i].diameter;
        pumpkin[i].rind = ((rand() % 7) + 3) / 10.0;
        rindSum += pumpkin[i].rind;
    }
    return (diameterSum - rindSum)/ num;
}