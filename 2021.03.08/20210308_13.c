#include <stdio.h>
#include <stdlib.h>
/* Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете. */

int main(void){
    FILE *pfile = NULL;
    pfile = fopen("13.txt", "rt");
    if (pfile == NULL){
        perror("File not found\n");
        exit(1);
    }
    int count = 0;
    char c;
    while ((c = fgetc(pfile)) != EOF){
        if (c == '\n'){
            count++;
        }
    }
    printf("13.txt contains %d new lines.\n", count);
    close(pfile);
    return 0;
}