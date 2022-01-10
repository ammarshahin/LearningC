#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    bool ret = false;
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            ret = true;
            break;
        }
    }
    return ret;
}

int main()
{
    printf("Enter a positive integer: ");
    int n;
    scanf("%d", &n);

    if (is_prime(n))
        printf("%d is a prime number.", n);
    else
        printf("%d isn't a prime number.", n);

    return 0;
}