#include <stdio.h>
#include <stdlib.h>
/* Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга докато достигне
терминиращ символ \0, но не го пише в новия файл. */

int main(void){
    const char *str = "What's my age again?\n";
    FILE *pf = NULL;
    pf = fopen("8.txt", "wt");
    if (pf == NULL){
        perror("File not found\n");
        exit(1);
    }
    fputs(str, pf);
    fputs("\nNew line test.\n", pf);
    fclose(pf);
    pf = NULL;

    return 0;
}