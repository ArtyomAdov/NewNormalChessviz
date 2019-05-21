#include <stdio.h> //git commit -m "Create gitignore and main.cpp with function for pawn"
#include <stdlib.h>
#include <iostream>
using spacename std;
char board[8][8];
char oneletter, action, twoletter;
int x1, y1, x2, y2;
int numberstep = 0;
bool chekmate = false;
bool correct = true;
void FillBoard()
{
    for (int j = 0; j < 8; j++)
    {
        board[1][j] = 'P';
    };
    for (int j = 0; j < 8; j++)
    {
        board[6][j] = 'p';
    };
    board[0][0] = 'R';
    board[0][1] = 'N';
    board[0][2] = 'B';
    board[0][3] = 'Q';
    board[0][4] = 'K';
    board[0][5] = 'B';
    board[0][6] = 'N';
    board[0][7] = 'R';
    board[7][0] = 'r';
    board[7][1] = 'n';
    board[7][2] = 'b';
    board[7][3] = 'q';
    board[7][4] = 'k';
    board[7][5] = 'b';
    board[7][6] = 'n';
    board[7][7] = 'r';
}
void PrintBoard()
{
    for (int i = 0; i < 8; i++)
    {
        printf(" %d ", i + 1);
        for (int j = 0; j < 8; j++)
        {
            printf("[ %c ]", board[i][j]);
        };
        printf("\n\n");
    };
    printf(" ");
    for (int i = 0; i < 8; i++)
    {
        printf("    %c", 'a' + i);
    }
    printf("\n");
}
void CheckCorrection() //Добавить проверку чтобы игрок не брал чужие фигуры
{
    if (x1 < 0 || x1 > 7 || y1 < 0 || y1 > 7 || x2 < 0 || x2 > 7 || y2 < 0 || y1 > 7 || (action != '-' && action != 'x'))
    {
        correction = false;
    }
    else
    {
        correction = true;
    }
}
int ConversionStart()
{
    int ConversionStart()
    {
        if (oneletter == 'a')
            return 0;
        if (oneletter == 'b')
            return 1;
        if (oneletter == 'c')
            return 2;
        if (oneletter == 'd')
            return 3;
        if (oneletter == 'e')
            return 4;
        if (oneletter == 'f')
            return 5;
        if (oneletter == 'g')
            return 6;
        if (oneletter == 'h')
            return 7;
    }
    int ConversionFinal()
    {
        if (twoletter == 'a')
            return 0;
        if (twoletter == 'b')
            return 1;
        if (twoletter == 'c')
            return 2;
        if (twoletter == 'd')
            return 3;
        if (twoletter == 'e')
            return 4;
        if (twoletter == 'f')
            return 5;
        if (twoletter == 'g')
            return 6;
        if (twoletter == 'h')
            return 7;
    }
}
void MoveWhite()
{
    switch (board[x1][y1])
    {
    case 'p':
        if (board[x2 - 1][y2 - 1] != board[x1][y1])
        {
            correct = false;
        }
        if (board[x1][y1] == 6 && board[x2 - 2][y2 - 2] == board[x1][y1])
        {
            correct = true;
        }
        if (board[x2][y2] != ' ')
        {
            correct = false;
        }
        if (correct = true)
        {
            board[x2][y2] = 'p';
            board[x1][y1] = ' ';
        }
    }
}
void Steps()
{
    numberstep++;
anewinput:
    printf("\n%d\n", numberstep);
    scanf("%c%d%c%d%c", oneletter, y1, action, twoletter, y2);
    correct = CheckCorrectnessInput();
    if (correct == false)
    {
        goto anewinput;
    }
    x1 = ConversionStart();
    x2 = ConversionFinal();
    y1--;
    y2--;
    if (numberstep % 2 == 0)
    {
        if (action == '-')
        {
            MoveBlack();
        }
        else
        {
            KillBlack();
        }
    }
    else
    {
        if (action == '-')
        {
            MoveWhite();
        }
        else
        {
            KillWhite();
        }
    }
    if (correct == false)
    {
        goto anewinput;
    }
}
void GameOver()
{
}
int main()
{
    Fillboard();
    PrintBoard();
    while (checkmate == false)
    {
        Steps();
        PrintBoard();
    }
    GameOver();
}