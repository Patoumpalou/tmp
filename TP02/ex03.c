int ft_cumulative(int number)
{
    int i;
    int total;

    i = 1;
    total = 0;
    while (i <= number)
    {
        total = total + i;
        i = i + 1;
    }
    return total;
}
