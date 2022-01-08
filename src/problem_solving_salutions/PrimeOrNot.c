#include <stdio.h>

char primeORnot(int n)
{
    int i;
    char flag = 0;
    for (i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    char flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    flag = primeORnot(n);

    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}