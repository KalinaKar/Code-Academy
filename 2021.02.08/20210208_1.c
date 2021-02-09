/* Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */
#include <stdio.h>

int main(){
    int myArray[5] = {1, 2, 3, 4, 5};
    int i;
    printf("Enter 5 integers:");
    for (i = 0; i < 5; i++)
        scanf("%d", &myArray[i]);
    for (i = 0; i < 5; i++)
        printf("%d ", myArray[i]);
    printf("\n");
    return 0;
}
