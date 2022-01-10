#include <stdio.h>

static void swap_char(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

static void rev_string(char *arr, char size)
{
    char i = 0;
    while (i < size)
    {
        swap_char(&arr[i], &arr[size - 1]);
        i++;
        size--;
    }
}

int main(void)
{
    char arr[] = "my name is ammar Mohamed shahin";

    char subStrStart = 0, i = 0;
    char strSize = sizeof(arr) / sizeof(arr[0]);

    rev_string(&arr[0], strSize - 1);

    strSize = 0;
    while (arr[i])
    {
        if (arr[i] != ' ')
        {
            strSize++;
        }
        else
        {
            rev_string(&arr[subStrStart], strSize);
            strSize = 0;
            subStrStart = i + 1;
        }
        i++;
    }
    rev_string(&arr[subStrStart], strSize);
    printf("%s\n", arr);
    return 0;
}
