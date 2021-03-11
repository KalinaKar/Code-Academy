#include <stdio.h>
#include <stdlib.h>
/* Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка. */
int main(void){

    FILE *pfile = NULL;
    char *filename = "3.txt";
    pfile = fopen(filename, "rt");
    if (pfile == NULL){
        perror("File not opened");
        exit(1);
    }

    char c;
    while((c = fgetc(pfile)) != EOF){
        printf("%c", c);
    }
    printf("\n");

    fclose(pfile);

    return 0;
}