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
