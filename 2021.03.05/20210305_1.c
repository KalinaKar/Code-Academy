/* За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */
#include <stdio.h>
#include <stdlib.h>

unsigned makeShelf(unsigned *shelf);

int main(void){
    unsigned *shelf = (unsigned *)malloc(5 * sizeof(unsigned));
    printf("How many long boards do you have?\n");
    scanf("%d", &shelf[0]);
    printf("How many short boards do you have?\n");
    scanf("%d", &shelf[1]);
    printf("How many staples do you have?\n");
    scanf("%d", &shelf[2]);
    printf("How many braces do you have?\n");
    scanf("%d", &shelf[3]);
    printf("How many screws do you have?\n");
    scanf("%d", &shelf[4]);

    printf("With these materials on hand (%u long boards, %u short boards, "
            "%u staples, %u braces, %u screws) ", shelf[0], shelf[1], shelf[2], shelf[3], shelf[4]);
    printf("you can biuld %u shelves.\n", makeShelf(shelf));

    free(shelf);
    return 0;
}

unsigned makeShelf(unsigned *shelf){
    shelf[0] /= 4;
    shelf[1] /= 6;
    shelf[2] /= 12;
    shelf[3] /= 2;
    shelf[4] /= 14;

    unsigned min = shelf[0];
    int i;
    for (i = 0; i < 5; i++){
        if (shelf[i] < min){
            min = shelf[i];
        }
    }
    return min;
}
