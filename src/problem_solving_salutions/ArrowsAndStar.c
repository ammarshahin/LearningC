#include <stdio.h>

#define rows 3
#define columns 7

void FoundTheStar(char *arr[], int rowsF, int columnsF)
{
    char found = 0, row = 0, col = 0;
    while (!found && (row < rowsF) && (col < columnsF))
    {
        if (arr[row][col] == '*')
        {
            found = 1;
        }
        else if (arr[row][col] == '^')
        {
            row--;
        }
        else if (arr[row][col] == '<')
        {
            col--;
        }
        else if (arr[row][col] == '|')
        {
            row++;
        }
        else if (arr[row][col] == '>')
        {
            col++;
        }
    }

    if (!found)
        printf("Not Found !!!!\n");
    else
        printf("* found at index = %d   %d  \n", row, col);
}

int main()
{
    char arr[rows][columns] = {
        {'>', '>', '>', '>', '*', '<', '<'},
        {'^', '^', '^', '^', '^', '^', '^'},
        {'^', '^', '^', '^', '^', '^', '^'}};

    FoundTheStar(arr, rows, columns);
    return 0;
}