/* Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. 
Може ли да оптимизирате тази задача и да не се налага да въртим два
цикъла?
Как бихте направили същото, използвайки case? */
#include <stdio.h>
int main(void){
    char *cp_str = "“Et” was the 27th letter of the alphabet. And actually,"
                    "you can still find it on your keyboard! Now most people call this character"
                    "an “ampersand” or simply “and”, but this character was actually considered a letter!";

    int letterCount[26] = {0}; /* 26 is the number of letters in the English alphabet */

    for ( ; *cp_str; cp_str++){
        if (*cp_str <= 'z' && *cp_str >= 'a'){
            letterCount[(int) *cp_str - 'a']++;
        } else if (*cp_str <= 'Z' && *cp_str >= 'A'){
            letterCount[(int) *cp_str - 'A']++;
        }
    }

    char c = 'A';
    int i;
    for (i = 0; i < 26; i++)
        printf("Letter %c occurs %d times.\n", c++, letterCount[i]);
    return 0;
}
