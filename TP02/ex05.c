#include <stdio.h>

void ft_print_even_odd(int start, int end)
{
    long long i;
    int first;

    if (start > end)
        return;
    i = start;
    first = 1;
    while (i <= end)
    {
        if (i % 2 == 0)
        {
            if (first)
                printf("Even : ");
            printf("%lld", i);
            first = 0;
        }
        i = i + 1;
    }
    if (!first)
        printf("\n");
    i = start;
    first = 1;
    while (i <= end)
    {
        if (i % 2 != 0)
        {
            if (first)
                printf("Odd : ");
            printf("%lld", i);
            first = 0;
        }
        i = i + 1;
    }
    if (!first)
        printf("\n");
}
