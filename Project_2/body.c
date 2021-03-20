#include "fruits.h"

void calcFruitWeight(char *fileIn, char *fileOut){
    FILE *pfileIn = openFile(fileIn, "rt");

    int numFruits;
    fscanf(pfileIn, "%d\n", &numFruits);
    int *arrWeights = (int *)malloc(numFruits * sizeof(int));
    memoryCheck(arrWeights);

    int i;
    for(i = 0; i < numFruits; i++){
        fscanf(pfileIn, "%d\n", &arrWeights[i]);
    }
    fclose(pfileIn);

    FILE *pfileOut = openFile(fileOut, "wt");

    int *result = subsetSum(arrWeights, numFruits);
    int *resultStart = result;
    if(*result){
        while(*result){
            fprintf(pfileOut, "%d\n", *result);
            result++;
        }
    }else{
        fprintf(pfileOut, "NO");
    }
    fclose(pfileOut);
    
    free(resultStart);
    free(arrWeights);
}

FILE *openFile(char *filename, char *mode){
    FILE *pfile = NULL;
    pfile = fopen(filename, mode);
    if (!pfile){
        perror("File error");
        exit(1);
    }
    return pfile;
}

int *subsetSum(int *a, int n){
    int m[n+1][K+1];
    memset(m, 0, (n+1) * (K+1) * sizeof(int));

    int s, i;
    for (i = 1; i <= n; i++){
            for (s = 0; s <= K; s++) {
                if (s - a[i - 1] >= 0) { /* when it goes left we don't want it to go out of bounds. */
                    m[i][s] = (m[i - 1][s] || a[i - 1] == s || m[i - 1][s - a[i - 1]]);
                } else {
                    m[i][s] = (m[i - 1][s] || a[i - 1] == s);
                }
            }
        }
    
    int *subSet = NULL;
    subSet = (int *)malloc((n + 1) * sizeof(int));
    memoryCheck(subSet);
    int subSetLen = 0;

    if(!m[n][K]){
        subSet[0] = '\0';
        subSet = (int *)realloc(subSet, sizeof(int));
        memoryCheck(subSet);
        return subSet;
    }

    s = K;
    for (i = n; i > 0 && s != 0; i--) {
        if (a[i - 1] != s) {
            while (m[i - 1][s]) { /* go up */
                i--;
            }
        }
        subSet[subSetLen++] = a[i - 1];
        s = s - a[i - 1];
    }
    subSet[subSetLen] = '\0';
    subSet = (int*)realloc(subSet, subSetLen * sizeof(int));
    memoryCheck(subSet);
    
    return subSet;
}

void memoryCheck(int *p){
    if(p == NULL){
            perror("Memory error");
            abort();
        }
}