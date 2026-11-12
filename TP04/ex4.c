int	ft_ex4(int number, int expo)
{
	int	result;

	result = 1;
	while (expo > 0)
	{
		result *= number;
		expo--;
	}
	return (result);
}
