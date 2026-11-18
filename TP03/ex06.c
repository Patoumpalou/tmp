int ft_is_prime(int number)
{
    int divisor;

    if (number < 2)
        return 0;
    divisor = 2;
    while (divisor <= number / divisor)
    {
        if (number % divisor == 0)
            return 0;
        divisor = divisor + 1;
    }
    return 1;
}

int ft_find_next_prime(int number)
{
    if (number < 2)
        number = 2;
    while (number > 0)
    {
        if (ft_is_prime(number))
            return number;
        if (number == 2147483647)
            break;
        number = number + 1;
    }
    return 0;
}
