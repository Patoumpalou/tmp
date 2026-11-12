static int	is_prime_ex7(int number)
{
	int	i;

	if (number < 2)
		return (0);
	i = 2;
	while (i <= number / i)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_ex7(int number)
{
	if (number < 2)
		return (2);
	while (!is_prime_ex7(number))
		number++;
	return (number);
}
