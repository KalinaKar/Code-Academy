#include "3.h"
/* Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му. */

int main(void){
    head = NULL;
    int i;
    for(i = 1; i < 15; i++){
        addHead(i);
    }
    printf("The whole list:\n");
    printAfter(head);
    t_node *found = findElement(5);
    printf("After the searched element:\n");
    printElement(found);

    return 0;
}