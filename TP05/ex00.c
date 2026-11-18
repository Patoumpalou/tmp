int ft_iterative_factorial(int nbr)
{
    int result;

    if (nbr < 0)
        return 0;
    result = 1;
    while (nbr > 1)
    {
        result = result * nbr;
        nbr = nbr - 1;
    }
    return result;
}
