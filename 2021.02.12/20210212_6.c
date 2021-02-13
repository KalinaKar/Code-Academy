/* Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта. */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *buffer;
    int size = 2;
    buffer = malloc(size * sizeof(char));
    if (NULL == buffer){
        printf("Allocation memory error!\n");
        exit(1);
    }

    char c;
    int i = 0;
    printf("Enter text, then press EOF\n");
    while ((c = getchar()) != EOF){
        if (i == size - 1){
            size *= size;
            buffer = realloc(buffer, size * sizeof(char));
            if (NULL == buffer){
                printf("Reallocation memory error!\n");
                exit(2);
            }
        }
        buffer[i++] = c;
    }
    buffer[i] = '\0';
    printf("Buffer: %s\n", buffer);
    free(buffer);
    return 0;
}
