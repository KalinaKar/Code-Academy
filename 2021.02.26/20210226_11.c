/* тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин. */
#include <stdio.h>
typedef struct node {
    int m_int;
    t_node *m_ptr;
} t_node __attribute__((packed));

int main(void){
    t_node *a = (t_node*)malloc(5 * sizeof(t_node));
    free(a);
    return 0;
}