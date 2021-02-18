/* Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции. */
#include <stdio.h>
#include <string.h> 
int isAnagram(char *string1, char *string2);

int main(void){
    char *string1 = "Anagramamam\0"; /* change the first string here */
    char *string2 = "margana\0"; /* change the second string here */
    if (isAnagram(string1, string2))
        printf("The strings are anagrams!\n");
    else 
        printf("The strings are not anagrams!\n");
    return 0;
}

int isAnagram(char *string1, char *string2){
int letterCount[26] = {0}; /* 26 is the number of letters in the English alphabet */

    /* adds +1 for each letter in the corresponding element in the letterCount array */
    for ( ; *string1; string1++){
        if (*string1 <= 'z' && *string1 >= 'a'){
            letterCount[(int) *string1 - 'a']++;
        } else if (*string1 <= 'Z' && *string1 >= 'A'){
            letterCount[(int) *string1 - 'A']++;
        }
    }

    /* substracts -1 for each letter in the corresponding element in the letterCount array */
    for ( ; *string2; string2++){
        if (*string1 <= 'z' && *string1 >= 'a'){
            letterCount[(int) *string1 - 'a']--;
            if (letterCount[(int) *string1 - 'a'] < 0)
                return 0;
        } else if (*string1 <= 'Z' && *string1 >= 'A'){
            letterCount[(int) *string1 - 'A']--;
            if (letterCount[(int) *string1 - 'a'] < 0)
                return 0;
        }
    }

    /* checks if all the letters were the same number */
    int i;
    for (i = 0; i < 26; i++){
        if (letterCount[i] != 0)
            return 0;
    }
    return 1;
}