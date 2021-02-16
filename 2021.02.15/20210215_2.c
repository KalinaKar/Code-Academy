/* *argv[ ] от горния пример е указател към низове, пренапишете
горния код като работите с указателите. */
#include <stdio.h>

int main(int argc, char *argv[]){
    while (--argc > 0)
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
        printf("\n");
    return 0;
}
