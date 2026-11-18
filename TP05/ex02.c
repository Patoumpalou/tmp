int ft_recursive_power(int nbr, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    return nbr * ft_recursive_power(nbr, power - 1);
}
