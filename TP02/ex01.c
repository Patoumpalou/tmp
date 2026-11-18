#include <unistd.h>

void ft_print(void)
{
    write(1, "Apprendre, c'est comprendre.\n", 29);
}

void ft_print_more(int number)
{
    int i;

    i = 0;
    while (i < number)
    {
        ft_print();
        i = i + 1;
    }
}
