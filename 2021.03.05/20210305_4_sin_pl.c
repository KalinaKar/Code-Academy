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
    *curRow = 0;
    *curCol = 0;
    int tempR, tempC, nl;

    while (1){
        tempR = *curRow;
        tempC = *curCol;
        printField(curRow, curCol);
            printf("\nChoose your move:\nw for Up\ns for Down\na for Left\nd for Right\nq to Undo\n");
            scanf("%c", choice);
            nl = getchar();
            if (!validateMove(choice, curRow, curCol, undoRow, undoCol)){
                printf("\nInvalid move!\n");
                continue;
            }

        *undoRow = tempR;
        *undoCol = tempC;

        if (*curRow == 6 && *curCol == 6){
            printf("Congtratulations! You won!\n");
            break;
        }
    }
    free(choice);
    free(curRow);
    free(curCol);
    free(undoRow);
    free(undoCol);
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

int field[7][7] = {
    {3, 3, 2, 4, 3, 1, 2},
    {2, 4, 2, 3, 2, 4, 3},
    {4, 2, 3, 2, 4, 2, 1},
    {4, 4, 1, 2, 2, 3, 4},
    {3, 2, 3, 3, 4, 2, 2},
    {3, 2, 4, 2, 3, 2, 1},
    {1, 1, 3, 3, 4, 2, 70}};
