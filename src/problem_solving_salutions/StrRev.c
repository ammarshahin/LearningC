#include <stdio.h>
#include <string.h>

#define SIZE 17

void StrRev(char *pStr, char size)
{
    char temp, i = 0;
    while (i < size)
    {
        temp = pStr[i];
        pStr[i] = pStr[size - 1];
        pStr[size - 1] = temp;
        i++;
        size--;
    }
}

int main(void)
{
    char i = 0;
    char SubStringStart = 0, SubStringSize = 0;
    char arr[SIZE] = "my name is ammar";
    StrRev(&arr[0], SIZE - 1);
    while (arr[i])
    {
        if (arr[i] != ' ')
        {
            SubStringSize++;
        }
        else
        {
            StrRev(&arr[SubStringStart], SubStringSize);
            SubStringSize = 0;
            SubStringStart = i + 1;
        }
        i++;
    }
    StrRev(&arr[SubStringStart], SubStringSize);
    printf("%s\n", arr);
    return 0;
}
