#include <stdio.h>
/* Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време. */

int main(void){

    FILE *pfile = NULL;
    pfile = fopen("10.txt", "wt");

    long fpos = ftell(pfile);
    printf("%ld\n", fpos);

    fputs("text from task 10.\n", pfile);
    fpos = ftell(pfile);
    printf("%ld\n", fpos);

    fclose(pfile);

    return 0;
}