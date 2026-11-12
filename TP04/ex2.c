int	ft_ex2(int number)
{
	int	sum;
	int	i;

	sum = 0;
	i = 1;
	while (i <= number)
	{
		sum += i;
		i++;
	}
	return (sum);
}
