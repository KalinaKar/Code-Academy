#include <stdio.h>
#include <stdlib.h>
/* Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл). */

int main(void){
    FILE *pfile = NULL;
    pfile = fopen("16.txt", "rt");
    FILE *pfile_wt = NULL;
    pfile_wt = fopen("16_wt.txt", "wt");
    if (pfile == NULL || pfile_wt == NULL){
        perror("File not found\n");
        exit(1);
    }
    int c, nl, count = 0;
    printf("Which line would you like to remove? max 10\n");
    scanf("%d", &nl);
    while ((c = fgetc(pfile)) != EOF){
        if (c == '\n'){
            count++;
        }
        if (count == (nl-1)){
            continue;
        }
        fputc(c, pfile_wt);
    }
    return 0;
}