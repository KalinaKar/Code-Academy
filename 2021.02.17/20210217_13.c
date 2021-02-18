/* Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx' */
#include <stdio.h>
#include <string.h>
static void print_reversed(const char *str, size_t len);

int main(int argc, char **argv){
    for (int i = 0; i < argc; i++)    {
        if (i != 0)
            putchar(' ');
        print_reversed(argv[i], strlen(argv[i]));
    }
    putchar('\n');
    return 0;
}

static void print_reversed(const char *str, size_t len){
    const char *ptr = str + len;
    while (ptr > str)
        putchar(*--ptr);
}
