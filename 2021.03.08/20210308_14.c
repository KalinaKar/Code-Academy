#include <stdio.h>
#include <stdlib.h>
/* Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви */

int main(void){
    FILE *pf_rt = NULL;
    pf_rt = fopen("14.txt", "rt");
    if (pf_rt == NULL){
        perror("File not found\n");
        exit(1);
    }

    FILE *pf_wt = NULL;
    pf_wt = fopen("14_new.txt", "wt");
    if (pf_wt == NULL){
        perror("File not found\n");
        exit(1);
    }

    char c;
    while ((c = fgetc(pf_rt)) != EOF){
        if (c >= 'a' && c <= 'z'){
            c -= 32;
        }
        fputc(c, pf_wt);
    }
    fclose(pf_rt);
    fclose(pf_wt);
    remove("14.txt");

    if(rename("14_new.txt", "14.txt"))
        printf("Failed to rename file.\n");
    else
        printf("File renamed successfully.\n");

    return 0;
}