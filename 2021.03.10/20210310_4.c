#include <stdio.h>
#include <stdlib.h>
/* Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията. */

typedef struct package {
    int weight;
    int size;
} t_pack;
void menu(FILE *pfile);
float sumPack(FILE *pfile, int weight, int size);

int main(void){
    FILE *pfile = NULL;
    char *filename = "4.txt";
    pfile = fopen(filename, "wt");

    if(pfile == NULL){
        perror("File not found.");
        exit(1);
    }

    menu(pfile);

    fprintf(pfile, "main() success\n");
    fclose(pfile);
    return 0;
}

void menu(FILE *pfile){
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

        asSeparate += sumPack(pfile, packs->weight, packs->size);
        totWeight += packs->weight;
        totSize += packs->size;   

        free(packs);
    }

    asOne = sumPack(pfile, totWeight, totSize);

    if (asOne < asSeparate){
        printf("For %d packages with total weight of %d grams and total size of %d cubic centimeters it's better to be sent as one.\n"
        "This will cost %.2f leva.\n", *packNum, totWeight, totSize, asOne);
    } else if (asOne > asSeparate){
        printf("For %d packages with total weight of %d grams and total size of %d cubic centimeters it's better to be sent separately.\n"
        "This will cost %.2f leva.\n", *packNum, totWeight, totSize, asSeparate);
    } else {
        printf("For %d packages with total weight of %d grams and total size of %d cubic centimeters there is no difference in how you decide to send them.\n"
        "This will cost %.2f leva.\n", *packNum, totWeight, totSize, asOne);
    }

    free(packNum);
    fprintf(pfile, "menu() success\n");
}

float sumPack(FILE *pfile, int weight, int size){
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

    fprintf(pfile, "sumPack() success\n");
    return sum;    
}