#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define K 1000

void calcFruitWeight(char *fileIn, char *fileOut);
    /* takes the names of the input and output files and manages the other funcitions */
FILE *openFile(char *filename, char *mode);
    /* returns a pointer to an open file or exits the program if file does not open */
int *subsetSum(int *a, int n);
    /* calculates subset of sum and returns a pointer to it if one is possible */
void memoryCheck(int *p);
    /* aborts program if p holds NULL */
