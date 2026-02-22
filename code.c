// Suduko

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define N 9

struct Sudoku
{
    int grid[N][N];
};

bool canPut(struct Sudoku *sudoku, int row, int col, int num)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sudoku->grid[i][j] == num)
                return false;
        }
    }
}

bool solveSudoku(struct Sudoku *sudoku)
{
    int row, col;
    bool empty = true;
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            if (sudoku->grid[row][col] == 0)
            {
                empty = false;
                break;
            }
        }
        if (!empty)
            break;
    }

    if (empty)
        return true;

    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(sudoku, row, col, num))
        {
            sudoku->grid[row][col] = num;

            if (solveSudoku(sudoku))
                return true;

            sudoku->grid[row][col] = 0;
        }
    }
    return false;
}

void printGrid(struct Sudoku *sudoku)
{
    for (int r = 0; r < N; r++)
    {
        for (int d = 0; d < N; d++)
        {
            printf("%d ", sudoku->grid[r][d]);
        }
        printf("\n");
    }
}

int main()
{

    if (solveSudoku(&sudoku) == true)
        printGrid(&sudoku);
    else
        printf("No solution exists");

    return 0;
}