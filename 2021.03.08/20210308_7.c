#include <stdio.h>
/* Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека. */

int main(void){
    FILE *pfile = NULL;
    char *filename = "7.txt";
    pfile = fopen(filename, "wt");
    if (pfile == NULL)
        printf("Failed to open % s.\n", filename);
    int c;
    for (c = 'A'; c <= 'Z'; c++){
        fputc(c, pfile);
        fputc(' ', pfile);    
    }
    fclose(pfile);
    return 0;
}