/* Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
}; */
#include <stdio.h>
union tagUnion {
    unsigned short m_uShort : 6;
    char m_char : 6;
};

int main(void){
    union tagUnion varUnion = {'k'};
    printf("m_uShort = %d\nm_char = %c\n", varUnion.m_uShort, varUnion.m_char);
    return 0;
}