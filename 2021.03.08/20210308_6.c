#include <stdio.h>
#include <stdlib.h>
/* Отворете и прочетете съдържанието от файл с fscanf. */

#include <stdio.h>
#include <stdlib.h>


int main(){
   char str1[10], str2[10], str3[10];
   int year;
   FILE *fp = NULL;
   fp = fopen ("6.txt", "rt");

   if(fp == NULL){
       perror("File not found\n");
       exit(1);
   }

   fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
   
   printf("Read String1 |%s|\n", str1 );
   printf("Read String2 |%s|\n", str2 );
   printf("Read String3 |%s|\n", str3 );
   printf("Read Integer |%d|\n", year );

   fclose(fp);
   
   return 0;
}