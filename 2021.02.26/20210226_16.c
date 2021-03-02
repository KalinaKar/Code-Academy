/* Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра. */
#include<stdio.h>
#include<stdlib.h>
int rows = 3;
int cols = 8;
typedef struct{
    int row;
    int col;
}field;
void printTable(int table[3][8]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {   
            printf("%d",table[i][j]);
            printf("(%d/%d) ",i,j);
             if (table[i][j]<10)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void fillTable(int table[3][8]){

    for (int i = 0; i < 8; i++)
    {
        table[0][i] = 0;
    }

    for (int i = 0; i < 8; i++)
    {
        table[2][i] = i+1;
    }
    for (int i = 0; i < 8; i++)
    {
        table[1][i] = i+9;
    }
}
int isInTable(int currRow, int currCol){
    if (currRow<rows && currCol<cols)
    {
        if (currRow>=0 && currCol>=0)
        {
            return 1;
        }
        
    }
    return 0;  
}
int isValidMove(int table [3][8],field current, field to, field fallen){
    if (isInTable(current.row,current.col) && isInTable(to.row,to.col))
    {
        if (table[current.row][current.col]>0 && table[fallen.row][fallen.col]>0 && table[to.row][to.col]==0)
        {
            return 1;
        }
    }
    return 0;
    
}
void makeMove(int table [3][8],field current, field to, field fallen){
    table[to.row][to.col] = table[current.row][current.col];
    table[current.row][current.col] = 0;
    table[fallen.row][fallen.col] = 0;
    
}
int isEndOfGame(int table [3][8]){
    int count = 0;
    int flag = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {   
            if (table[i][j]>0)
            {
                if ( table[i][j] == 1)
                {
                    flag = 1;
                }
                count++;
            }
            
        }
    }
    if (flag == 0)
        {
            printf("Game over!\n");
            return 0;
        }
    else if(flag && count==1)
        {
            printf("You won the game\n");
            return 0;
        }
        
    return 1;
}

int main() {   
    int table[3][8];
    fillTable(table);
    printTable(table);
    int direction;
    int endOfGame = 1;
    field current;
    field fallen;
    field to;
    while (endOfGame)
    {
        printf("enter row of element you wanna move!\n");
        scanf("\n%d",&current.row);
        printf("enter col of element you wanna move!\n");
        scanf("\n%d",&current.col);
        printf("choose direction\nright(1)\nleft(2)\nup(3)\ndown(4)\n");
        scanf("\n%d",&direction);
        switch(direction){
            case 1:
            to.col = current.col+2;
            fallen.col = current.col+1;
            fallen.row = current.row;
            to.row = current.row;
            break;

            case 2:
            to.col = current.col-2;
            fallen.col = current.col-1;
            fallen.row = current.row;
            to.row = current.row;
            break;

            case 3:
            to.row = current.row-2;
            fallen.row = current.row-1;
            fallen.col = current.col;
            to.col = current.col;
            break;

            case 4:
            to.row = to.row+2;
            fallen.row = current.row+1;
            fallen.col = current.col;
            to.col = current.col;
            break;
        }
        if (isValidMove(table, current, to, fallen))
        {
        makeMove(table, current, to, fallen);
        }
        else{
            printf("invalid move!\n");
        }
        endOfGame = isEndOfGame(table);
        printTable(table);
    }
        
}
