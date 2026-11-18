int ft_power(int number, int power)
{
    int result;

    if (power < 0)
        return 0;
    result = 1;
    while (power > 0)
    {
        result = result * number;
        power = power - 1;
    }
    return result;
}
