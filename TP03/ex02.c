#include <unistd.h>

void ft_triangle(int number)
{
    int row;
    int col;

    row = 1;
    while (row <= number)
    {
        col = 0;
        while (col < row)
        {
            write(1, "*", 1);
            col = col + 1;
        }
        write(1, "\n", 1);
        row = row + 1;
    }
}
