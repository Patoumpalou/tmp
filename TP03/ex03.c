#include <unistd.h>

static void ft_write_positive(unsigned int number)
{
    char digit;

    if (number >= 10)
        ft_write_positive(number / 10);
    digit = '0' + (number % 10);
    write(1, &digit, 1);
}

void ft_triangle_v2(int number)
{
    long long row;
    long long col;

    row = 0;
    while (row <= number)
    {
        col = 0;
        while (col <= row)
        {
            ft_write_positive((unsigned int)col);
            col = col + 1;
        }
        write(1, "\n", 1);
        row = row + 1;
    }
}
