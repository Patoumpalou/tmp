int ft_sqrt(int number)
{
    int i;

    if (number < 0)
        return -1;
    i = 0;
    while (i <= 46340 && i * i <= number)
    {
        if (i * i == number)
            return i;
        i = i + 1;
    }
    return -1;
}
