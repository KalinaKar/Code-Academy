/* Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията. */
#include <stdio.h>
size_t my_strlen(char *s);

int main(void){
    printf("%d\n", my_strlen("Summer waves"));
    return 0;
}

size_t my_strlen(char *s){
    size_t n;
    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}