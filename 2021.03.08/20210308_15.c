#include <stdio.h>
#include <stdlib.h>
/* Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред */

int main(void){
    FILE *pfile = NULL;
    pfile = fopen("15.txt", "rt");
    if (pfile == NULL){
        perror("File not found\n");
        exit(1);
    }
    fseek(pfile, -1L, SEEK_END);
    
    int c;
    while((c = fgetc(pfile)) != EOF){
        fseek(pfile, -2L, SEEK_CUR);
        printf("%c", c);        
    }
    printf("\n");
    fclose(pfile);
    return 0;
}