#include <stdio.h>
#include <stdlib.h>
/* Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност. */

int main(void){
    FILE *pfile = NULL;
    pfile = fopen("9.txt", "wt");
    if (pfile == NULL){
        perror("File not found\n");
        exit(1);
    }
    fprintf(pfile, "%s", "Task 9 is done!\n");
    fclose(pfile);
    return 0;
}