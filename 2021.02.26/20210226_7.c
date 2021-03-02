/* Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С. */
#include <stdio.h>
typedef struct key {
    char *str;
    int num;
}key_t;

int main(void){
    key_t keytab[] = {"auto", 0, "break", 0, "case", 0, "char", 0, "const", 0,
                    "continue", 0, "default", 0, "do", 0, "double", 0, "else", 0, "enum", 0,
                    "extern", 0, "float", 0, "for", 0, "goto", 0, "if", 0, "int", 0, "long", 0,
                    "register", 0, "return", 0, "short", 0, "signed", 0, "sizeof", 0, "static", 0,
                    "struct", 0, "switch", 0, "typedef", 0, "union", 0, "unsigned", 0, "void", 0,
                    "volatile", 0, "while", 0};
    int i;
    for (i = 0; i < 32; i++)
        printf("%s\n", keytab[i].str);
    
    return 0;
}