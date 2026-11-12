#include <stdio.h>

void	ft_ex3(int start, int end)
{
	int	n;

	n = start + 1;
	while (n < end)
	{
		if (n % 2 == 0)
			printf("%d ", n);
		n++;
	}
	printf("\n");
}
