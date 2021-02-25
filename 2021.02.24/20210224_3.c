/* Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG) */
#include <stdio.h>

void debugMsg(const char *pszMsg){
#ifdef DEBUG
    printf("DEBUG: %s\n", pszMsg);
#endif
}

int main(void){ 
    debugMsg("Doing my best here");
    printf("but slowly\n");
    return 0;
}
