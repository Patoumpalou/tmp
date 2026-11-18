#include <stdio.h>

void ft_print_even_numbers_in_range(int start, int end)
{
    long long i;
    int first;
    int step;

    step = 1;
    if (start > end)
        step = -1;
    i = start;
    first = 1;
    while ((step == 1 && i <= end) || (step == -1 && i >= end))
    {
        if (i % 2 == 0)
        {
            if (!first)
                printf(" ");
            printf("%lld", i);
            first = 0;
        }
        i = i + step;
    }
    if (!first)
        printf("\n");
}
