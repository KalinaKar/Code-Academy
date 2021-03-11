#include <stdio.h>
/* Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът. */

int main(void){

    FILE *pfile = NULL;
    char *filename = "2.0.txt";
    pfile = fopen(filename, "wt");
    if (pfile == NULL)
        printf("Failed to open % s.\n", filename);

    fclose(pfile);
    pfile = NULL;

    if(rename("2.0.txt", "2.txt"))
        printf("Failed to rename file.\n");
    else
        printf("File renamed successfully.\n");

    remove("2.0.txt");
    
    return 0;
}