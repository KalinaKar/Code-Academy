/* Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме int масив. Тук може да използвате
друг тип. Използвам char */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *piValue = NULL;
    unsigned uSize = 0;
    printf("\nEnter size: ");
    scanf("%u", &uSize);
    piValue = (char *)malloc(uSize * sizeof(char));
    if (NULL == piValue)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Addresses of allocated memory: %p\n", piValue);
    printf("\nEnter the new size: ");
    scanf("%u", &uSize);
    piValue = realloc(piValue, uSize * sizeof(char));
    if (NULL == piValue)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Addresses of reallocated memory: %p\n", piValue);
    free(piValue);
    return 0;
}