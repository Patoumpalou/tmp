#include <stdio.h>

void ft_print_number_len(int number)
{
    int len;

    len = 1;
    while (number <= -10 || number >= 10)
    {
        number = number / 10;
        len = len + 1;
    }
    printf("%d", len);
}
