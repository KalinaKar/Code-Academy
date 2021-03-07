/* Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да се
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода 
3 3 2 4 3 1 2
2 4 2 3 2 4 3
4 2 3 2 4 2 1
4 4 1 2 2 3 4
3 2 3 3 4 2 2
3 2 4 2 3 2 1
1 1 3 3 4 2 F */
#include <stdio.h>
#include <stdlib.h>
extern int field[7][7];

void printField(int *curRow, int *curCol);
int validateMove(char *choice, int *curRow, int *curCol, int *undoRow, int *undoCol);
char *inputString();
void play();

int main(void){
    play();
    return 0;
}
void play(){
    int *curRow = (int *)malloc(sizeof(int));
    int *curCol = (int *)malloc(sizeof(int));
    char *choice = (char *)malloc(sizeof(char));
    int *undoRow = (int *)malloc(sizeof(int));
    int *undoCol = (int *)malloc(sizeof(int));
    int *curRow2 = (int *)malloc(sizeof(int));
    int *curCol2 = (int *)malloc(sizeof(int));
    int *undoRow2 = (int *)malloc(sizeof(int));
    int *undoCol2 = (int *)malloc(sizeof(int));
    char *name1 = (char *)malloc(sizeof(char));
    char *name2 = (char *)malloc(sizeof(char));
    *curRow = 0;
    *curCol = 0;
    *curRow2 = 0;
    *curCol2 = 0;
    int tempR, tempC, tempR2, tempC2, nl;

    printf("Enter Player 1's name: ");
    name1 = inputString();
    printf("Enter Player 2's name: ");
    name2 = inputString();

    while (1){
        tempR = *curRow;
        tempC = *curCol;
        tempR2 = *curRow2;
        tempC2 = *curCol2;
        
        while(1){
            printf("%s's field:", name1);
            printField(curRow, curCol);
            printf("\n%s, choose your move:\nw for Up\ns for Down\na for Left\nd for Right\nq to Undo\n", name1);
            scanf("%c", choice);
            nl = getchar();
            if (!validateMove(choice, curRow, curCol, undoRow, undoCol)){
                printf("\nInvalid move!\n");
            } else {
                break;
            }
        }

        *undoRow = tempR;
        *undoCol = tempC;

        while(1){
            printf("\n\n%s's field:", name2);
            printField(curRow2, curCol2);
            printf("\n%s, choose your move:\nw for Up\ns for Down\na for Left\nd for Right\nq to Undo\n", name2);
            scanf("%c", choice);
            nl= getchar();
            if (!validateMove(choice, curRow2, curCol2, undoRow2, undoCol2)){
                printf("\nInvalid move!\n");
            } else {
                break;
            }
        }

        *undoRow2 = tempR2;
        *undoCol2 = tempC2;

        if (*curRow == 6 && *curCol == 6){
            printf("Congtratulations! %s won!\n", name1);
            break;
        } else if (*curRow2 == 6 && *curCol2 == 6){
            printf("Congtratulations! %s won!\n", name2);
            break;
        }
    }
    free(choice);
    free(curRow);
    free(curCol);
    free(undoRow);
    free(undoCol);
    free(curRow2);
    free(curCol2);
    free(undoRow2);
    free(undoCol2);
    free(name1);
    free(name2);
}

void printField(int *curRow, int *curCol){
    int i, j;
    for (i = 0; i < 7; i++){
        printf("\n");
        for (j = 0; j < 7; j++){
            if (i == *curRow && j == *curCol){
                printf("|%d|", field[i][j]);
            }else if (field[i][j] == 70){
                printf("%3c", field[i][j]);
            }else{
                printf("%3d", field[i][j]);
            }
        }
    }
}

int validateMove(char *choice, int *curRow, int *curCol, int *undoRow, int *undoCol){

    int curPos = field[*curRow][*curCol];
    
    if (*choice == 'w'){
        if (curPos <= *curRow){
            *curRow -= curPos;
            return 1;
        }
    }else if (*choice == 's'){
        if (curPos < 7 - *curRow){
            *curRow += curPos;
            return 1;
        }
    }else if (*choice == 'a'){
        if (curPos <= *curCol){
            *curCol -= curPos;
            return 1;
        }
    }else if (*choice == 'd'){
        if (curPos < 7 - *curCol){
            *curCol += curPos;
            return 1;
        }
    }else if (*choice == 'q'){
        *curCol = *undoCol;
        *curRow = *undoRow;
        return 1;
    }
    return 0;    
}

char *inputString(){
    char *buffer = NULL;
    int size = 2;
    buffer = (char*)malloc(size * sizeof(char));
    char *copy = buffer;
    char c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        if (i == size - 1){
            size += 2;
            buffer = realloc(buffer, size * sizeof(char));
            if (NULL == buffer){
                printf("Reallocation memory error!\n");
                exit(2);
            }
        }
        buffer[i++] = c;
    }
    buffer[i] = '\0';
    return copy;
}
int field[7][7] = {
    {3, 3, 2, 4, 3, 1, 2},
    {2, 4, 2, 3, 2, 4, 3},
    {4, 2, 3, 2, 4, 2, 1},
    {4, 4, 1, 2, 2, 3, 4},
    {3, 2, 3, 3, 4, 2, 2},
    {3, 2, 4, 2, 3, 2, 1},
    {1, 1, 3, 3, 4, 2, 70}};
