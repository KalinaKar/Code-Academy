/* Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1). */
#include <stdio.h>
 #pragma pack(1)
struct tagStruct{
    char m_char : 6;
    char m_char2;
    char m_char3;
    short int m_int : 3;
    short int m_int2;
};

int main(void){
    struct tagStruct field;
    field.m_char = 'c';
    field.m_int = 7;
    printf("m_int: %d\nm_char: %c\n", field.m_int, field.m_char); /* m_int: -1, m_char: y */
    printf("struct size: %d\n", sizeof(field)); /* struct size: 4; after adding more elements struct size: 8; after packing struct size: 7 */

    return 0;
}