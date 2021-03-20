#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define K 1000

void calcFruitWeight(char *fileIn, char *fileOut);
FILE *openFile(char *filename, char *mode);
int *subsetSum(int *a, int n);
void memoryCheck(int *p);