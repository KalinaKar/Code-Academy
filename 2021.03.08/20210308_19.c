#include <stdio.h>
#include <stdlib.h>
/* Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход. */

int main(int argc, char* argv[]){
    char c;
    if (argc > 1){
        int i;
        for(i = 1; i < argc; i++){
            char *filename = argv[i];
            FILE *pfile = NULL;
            if (pfile == NULL){
                perror("Failed to open file\n");
                exit(1);
            }
            pfile = fopen(filename, "rt");
            printf("\n\n%s content:\n", filename);            
            while((c = fgetc(pfile)) != EOF){
                putchar(c);
            }
            printf("\n");
            fclose(pfile);
        }
    } else {
        while ((c = getchar()) != EOF){
            putchar(c);
        }
    }
    return 0;
}
