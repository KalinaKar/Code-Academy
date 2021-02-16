/* Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“ */
#include <stdio.h>

int main(void){
    char arr[] = "baba, kaka, mama";
    char *str = arr;

    while (*str != '\0'){
        if (*str == 'a')
            *str = 'o';
        str++;
    }

    printf("%s\n", arr);
    return 0;
}