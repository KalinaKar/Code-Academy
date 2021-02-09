/* Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). */
#include <stdio.h>
#include <string.h>
void bubble();

int main (void) {
    bubble();
   return 0;
}

void bubble(){
   char string[] = "the quick brown fox jumped over the lazy dog"; /* change text here */
   char temp;

   int i, j;
   int n = strlen(string);

   printf("String before sorting - %s \n", string);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   
   printf("String after sorting  - %s \n", string);
}