#include <stdio.h>
#include <stdlib.h>
/* Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла. */

void compare(FILE *pfile1, char *filename1, FILE *pfile2, char *filename2);

int main(void){
    FILE *pfile1;
    char *filename1 = "1_1.txt";
    pfile1 = fopen(filename1, "rt");

    FILE *pfile2;
    char *filename2 = "1_2.txt";
    pfile2 = fopen(filename2, "rt");

    if(pfile1 == NULL || pfile2 == NULL){
        perror("File not found.\n");
        exit(1);
    }

    compare(pfile1, filename1, pfile2, filename2);

    fclose(pfile1);
    fclose(pfile2);
    return 0;
}

void compare(FILE *pfile1, char *filename1, FILE *pfile2, char *filename2){
    char str1[100];
    char str2[100];
    char ch1 = 'a', ch2 = 'a';
    int count = 1;
    long pos1 = 0, pos2 = 0;

    while(ch1 == ch2){
        ch1 = fgetc(pfile1);
        ch2 = fgetc(pfile2);
        
        if(ch1 != ch2){
            if(ch1 == EOF){
                printf("%s ends before %s at line %d\n", filename1, filename2, count);
                break;
            } else if(ch2 == EOF){
                printf("%s ends before %s at line %d\n", filename2, filename2, count);
                break;
            }
            fseek(pfile1, pos1, SEEK_SET);
            fseek(pfile2, pos2, SEEK_SET);
            printf("There is a difference in line %d:\n%s%s", count, fgets(str1, 100, pfile1), fgets(str2, 100, pfile2));
            break;
        } else if(ch1 == '\n'){
            pos1 = ftell(pfile1);
            pos2 = ftell(pfile2);
            count++;
        } else if(ch1 == EOF){
            printf("No differences found.\n");
            break;
        }
    }
}