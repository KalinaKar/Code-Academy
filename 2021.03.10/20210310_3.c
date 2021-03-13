#include <stdio.h>
#include <stdlib.h>
/* Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл. */
int main(int argc, char* argv[]){
    char c;
    if (argc > 1){
        int i;
        for(i = 1; i < argc; i++){
            char *filename = argv[i];
            FILE *pfile = NULL;
            pfile = fopen(filename, "rt");
            if (pfile == NULL){
                perror("Failed to open file\n");
                exit(1);
            }
            printf("\n\nPage: %d\t\tFile: %s\n\n", i, filename);            
            while((c = fgetc(pfile)) != EOF){
                putchar(c);
            }
            fclose(pfile);
        }
    } else {
        while ((c = getchar()) != EOF){
            putchar(c);
        }
    }
    return 0;
}