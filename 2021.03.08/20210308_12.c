#include <stdio.h>
#include <stdlib.h>
/* Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща назад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни
файлове и просто число в байтове. */

int main(void){
    FILE *pfile = NULL;
    pfile = fopen("12.txt", "wt");
    if (pfile == NULL){
        perror("File not found\n");
        exit(1);
    }
    fputs("Windmills and tulips.\n", pfile);

    fseek(pfile, 7L, 0);

    printf("%ld\n", ftell(pfile));

    fclose(pfile);
    return 0;
}