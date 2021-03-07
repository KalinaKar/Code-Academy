/* Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева. */
#include <stdio.h>
#include <stdlib.h>
typedef struct package {
    int weight;
    int size;
} t_pack;

float sumPack(int weight, int size);

int main(void){
    int *packNum = malloc(sizeof(int));
    float asOne = 0;
    float asSeparate = 0;
    int totWeight = 0;
    int totSize = 0;

    printf("How many packages would you like to send?\n");
    scanf("%d", packNum);
    
    int i;
    for (i = 0; i < *packNum; i++){
        t_pack *packs = malloc(sizeof(t_pack));

        printf("Enter package %d weight:\n", i + 1);
        scanf("%d", &(packs->weight));
        
        printf("Enter package %d size:\n", i + 1);
        scanf("%d", &(packs->size));

        asSeparate += sumPack(packs->weight, packs->size);
        totWeight += packs->weight;
        totSize += packs->size;   

        free(packs);
    }

    asOne = sumPack(totWeight, totSize);

    if (asOne < asSeparate){
        printf("For %d packages with total weight of %d grams and total size of %d cubic centimeters it's better to be sent as one.\n"
        "This will cost %.2f leva.\n", *packNum, totWeight, totSize, asOne);
    } else if (asOne > asSeparate){
        printf("For %d packages with total weight of %d grams and total size of %d cubic centimeters it's better to be sent separately.\n"
        "This will cost %.2f leva.\n", *packNum, totWeight, totSize, asSeparate);
    }

    free(packNum);
    
    return 0;
}

float sumPack(int weight, int size){
    int sum = 0;
    if (weight < 21)
        sum += 0.46;
    else if (weight < 51)
        sum += 0.69;
    else if (weight < 101)
        sum += 1.02;
    else if (weight < 201)
        sum += 1.75;
    else if (weight < 351)
        sum += 2.13;
    else if (weight < 501)
        sum += 2.44;
    else if (weight < 1001)
        sum += 3.20;
    else if (weight < 2001)
        sum += 4.27;
    else if (weight < 3001)
        sum += 5.03;
    
    if (size < 11)
        sum += 0.01;
    else if (size < 51)
        sum += 0.11;
    else if (size < 101)
        sum += 0.22;
    else if (size < 151)
        sum += 0.33;
    else if (size < 251)
        sum += 0.56;
    else if (size < 401)
        sum += 1.50;
    else if (size < 501)
        sum += 3.11;
    else if (size < 601)
        sum += 4.89;
    else if (600 < size)
        sum += 5.79;

    return sum;
}