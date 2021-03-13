#include <stdio.h>
#include <stdlib.h>
/* Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ са затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са */
void brCheck(FILE *pIn, FILE *pOut);

int main(void){
    FILE *pInput = NULL;
    char *inputName = "2.txt";
    pInput = fopen(inputName, "rt");
    if(pInput == NULL){
        perror("File not found.");
        exit(1);
    }

    FILE *pOutput = NULL;
    char *outputName = "2_log.txt";
    pOutput = fopen(outputName, "wt");
    if(pInput == NULL){
        perror("File not found.");
        exit(1);
    }

    brCheck(pInput, pOutput);

    fclose(pInput);
    fclose(pOutput);
    return 0;
}

void brCheck(FILE *pIn, FILE *pOut){
    char c;
    int curly = 0;
    int round = 0;
    int square = 0;
    int line = 1;
    int lCurly, lSquare, lRound;
    while((c = fgetc(pIn)) != EOF){
        switch(c){
        case '(':
            if(round == 0)
                lRound = line;
            round++;
            break;
        case '[':
            if(square == 0)
                lSquare = line;
            square++;
            break;
        case '{':
            if(curly == 0)
                lCurly = line;
            curly++;
            break;
        case ')':
            if(round == 0){
                break;
            }
            round--;
            break;
        case ']':
            if(square == 0){
                break;
            }
            square--;
            break;
        case '}':
            if(curly == 0){
                break;
            }
            curly--;
            break;
        case '\n':
            line++;
            break;        
        default:
            break;
        }
    }

    if(round > 0){
        fprintf(pOut, "Unclosed round bracket at line %d\n", lRound);
    }
    if(curly > 0){
        fprintf(pOut, "Unclosed curly bracket at line %d\n", lCurly);
    }
    if(square > 0){
        fprintf(pOut, "Unclosed square bracket at line %d\n", lSquare);
    }
}