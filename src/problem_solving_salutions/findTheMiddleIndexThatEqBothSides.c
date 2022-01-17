#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int arr[] = {50, 4, 6, 152, 60, 0, 0};
    int ret = -1;
    int start = 0, end = (sizeof(arr) / sizeof(arr[0])) - 1;
    int sum_r = arr[end], sum_l = arr[start];
    while (end >= start)
    {
        if (sum_l < sum_r)
        {
            start++;
            sum_l += arr[start];
        }
        else if (sum_l > sum_r)
        {
            end--;
            sum_r += arr[end];
        }
        else   // ===
        {
            if (start == end || start == end - 1)
            {
                ret = start;
                break;
            }
            else
            {
                start++;
                end--;
                sum_l += arr[start];
                sum_r += arr[end];
            }
        }
    }

    // return ret;
    printf("%d", ret);

    return 0;
}
