/* Напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 */
#include <stdio.h>
#include <string.h>
int any(char s1[], char s2[]);

int main(void){
    char s1[] = "Beware of the dog";
    char s2[] = "The quick brown fox jumps over the lazy dog";
    printf("Position: %d\n", any(s1, s2));
    return 0;
}

int any(char s1[], char s2[]){
    int is, iss, flag = 0;
    for (iss = 0; iss < strlen(s2); iss++){
        if(flag)
            break;
        
        is = 0;
        for (is = 0; is < strlen(s1); is++)
            if (s1[is] == s2[iss]){
                flag = 1;
                break;
            }
    }
    return is;
}