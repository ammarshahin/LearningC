#include <stdio.h>

void DrawXshape(unsigned char rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if ((j == i) || (j == rows - i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    DrawXshape(rows);
    return 0;
}