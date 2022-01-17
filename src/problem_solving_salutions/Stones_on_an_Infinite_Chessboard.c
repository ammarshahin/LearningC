#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define GRID_SIZE 10

uint64_t some_of_neighbour_rocks(uint8_t i, uint64_t *rocks)
{
    uint64_t ret = 0;

    if (i < GRID_SIZE)
        if (i == 0)   // 0
            ret = rocks[i + GRID_SIZE] + rocks[i + GRID_SIZE + 1] + rocks[i + 1];
        else if (i == GRID_SIZE - 1)   // 4
            ret = rocks[i + GRID_SIZE] + rocks[i + GRID_SIZE - 1] + rocks[i - 1];
        else   // 1 >> 3
            ret = rocks[i + GRID_SIZE] + rocks[i + GRID_SIZE - 1] + rocks[i + GRID_SIZE + 1] + rocks[i - 1] + rocks[i + 1];
    else if (i >= ((GRID_SIZE * GRID_SIZE) - GRID_SIZE))
        if (i == ((GRID_SIZE * GRID_SIZE) - GRID_SIZE))   // 20
            ret = rocks[i - GRID_SIZE] + rocks[i - GRID_SIZE + 1] + rocks[i + 1];
        else if (i == ((GRID_SIZE * GRID_SIZE) - 1))   // 24
            ret = rocks[i - GRID_SIZE] + rocks[i - GRID_SIZE - 1] + rocks[i - 1];
        else   // 21 >> 23
            ret = rocks[i - GRID_SIZE] + rocks[i - GRID_SIZE - 1] + rocks[i - GRID_SIZE + 1] + rocks[i - 1] + rocks[i + 1];
    else if (i % GRID_SIZE == 0)   // 5,10,15
        ret = rocks[i + 1] + rocks[i + GRID_SIZE] + rocks[i - GRID_SIZE] + rocks[i - GRID_SIZE + 1] + rocks[i + GRID_SIZE + 1];
    else if (i % GRID_SIZE == (GRID_SIZE - 1))   // 9,14,19
        ret = rocks[i - 1] + rocks[i + GRID_SIZE] + rocks[i - GRID_SIZE] + rocks[i - GRID_SIZE - 1] + rocks[i + GRID_SIZE - 1];
    else   // the rest
        ret = rocks[i - 1] + rocks[i + 1] + rocks[i + GRID_SIZE] + rocks[i - GRID_SIZE] + rocks[i - GRID_SIZE - 1] + rocks[i + GRID_SIZE - 1] + rocks[i - GRID_SIZE + 1] + rocks[i + GRID_SIZE + 1];
    return ret;
}

void print_board(const uint64_t *const rocks)
{
    for (uint64_t i = 0; i < GRID_SIZE * GRID_SIZE; i++)
    {
        if (i % GRID_SIZE == 0)
            printf("\n\n");
        printf("%llu  ", rocks[i]);
    }

    printf("\n\n\n");
}

int main(int argc, char const *argv[])
{

    uint64_t rocks[GRID_SIZE * GRID_SIZE] = {0};

    rocks[6] = 1;
    rocks[28] = 1;

    print_board(rocks);

    uint64_t max_reached = 1;

    for (int64_t i = 0; i < GRID_SIZE * GRID_SIZE; i++)
    {
        if (rocks[i] == 0)
        {
            uint64_t currentValue = some_of_neighbour_rocks(i, rocks);
            if (currentValue == (max_reached + 1))
            {
                max_reached = currentValue;
                rocks[i] = currentValue;
                printf("rock[%lld] = %llu\n", i, currentValue);
                i = -1;

                print_board(rocks);
            }
        }
    }
    printf("Max = %llu", max_reached);

    return 0;
}
