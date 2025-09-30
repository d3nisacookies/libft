#include "libft.h"
#include <stdio.h>
#include <limits.h>

int	get_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size = 1;
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*handle_zero(void)
{
	char	*res;
	int		size;

	size = get_size(0);
	res = ft_calloc(1, size * sizeof(char) + 1);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	int		i;

	if (n == 0)
		return (handle_zero());
	size = get_size(n);
	res = ft_calloc(1, size * sizeof(char) + 1);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		res[0] = '-';
		n = n * (-1);
	}
	i = size - 1;
	while (n != 0)
	{
		res[i] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	return (res);
}

int	main(void)
{
	int		n;
	char	*res;

	n = 0;
	res = ft_itoa(n);
	printf("%s\n", res);
	free(res);
	return (0);
}
