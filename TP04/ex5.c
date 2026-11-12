int	ft_ex5(int number)
{
	int	root;

	if (number < 0)
		return (0);
	root = 0;
	while (root + 1 <= number / (root + 1))
		root++;
	if (root * root == number)
		return (root);
	return (0);
}
