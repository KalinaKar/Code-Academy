/* Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво. */
#include <stdio.h>
#define MAX 1000
int isPalidrome();

int main(){
    int c;
    if ((c = isPalidrome()) == 1)
        printf("It's a palidrome.\n");
    else
        printf("It's not a palidrome.\n");
    return 0;
}

int isPalidrome(){
    /* gets string char by char */
    char c, myString[MAX], *end, *start;
    int i = 0, j, is_palidrome;
    printf("Enter your text:\n");    
    while ((c = getchar()) != '\n'){
        myString[i++] = c;
        myString[i] = '\0';
    }

    
    end = &myString[i];
    start = myString;
    while (start < end){
        /* two conditions to check if the character is a letter */
        if ((*start < 'a' || *start > 'z') && (*start < 'A' || *start > 'Z')){
            start++;
            continue;
        }
        if ((*end < 'a' || *end > 'z') && (*end < 'A' || *end > 'Z')){
            end--;
            continue;
        }
        
        if (*start == *end){
            is_palidrome = 1;
        } else {
          return 0;
        }
        start++;
        end--;
    }
       
    return is_palidrome;
}