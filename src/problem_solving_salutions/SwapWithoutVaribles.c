#include <stdio.h>

void Swap(int *px, int *py)
{
    *px = *px + *py;
    *py = *px - *py;
    *px = *px - *py;
}

int main(void)
{
    int x = 3;
    int y = 5;
    printf("Before Swapping: \nx = %d\ny = %d\n\n", x, y);
    Swap(&x, &y);
    printf("After Swapping: \nx = %d\ny = %d\n\n", x, y);
    return 0;
}
