#include <stdio.h>
#include <stdlib.h>
/* Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t. */

int main(void){
    FILE *pfile = NULL;
    pfile = fopen("11.txt", "wt");
    if (pfile == NULL){
        perror("File not found\n");
        exit(1);
    }

    fpos_t p ;
    printf("%d\n", fgetpos(pfile, &p));
    fputs("Just doing task 11.\n", pfile);
    printf("%d\n", ftell(pfile));
    printf("%d\n", fgetpos(pfile, &p));

    fclose(pfile);
    return 0;
}