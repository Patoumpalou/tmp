#include <unistd.h>

void ft_square_one(int x, int y)
{
    int row;
    int col;
    char character;

    if (x <= 0 || y <= 0)
        return;
    row = 0;
    while (row < y)
    {
        col = 0;
        while (col < x)
        {
            if (row == 0 && col == 0)
                character = 'o';
            else if (row == 0 && col == x - 1)
                character = 'o';
            else if (row == y - 1 && col == 0)
                character = 'o';
            else if (row == y - 1 && col == x - 1)
                character = 'o';
            else if (row == 0 || row == y - 1)
                character = '-';
            else if (col == 0 || col == x - 1)
                character = '|';
            else
                character = ' ';
            write(1, &character, 1);
            col = col + 1;
        }
        write(1, "\n", 1);
        row = row + 1;
    }
}
