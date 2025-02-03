#include "libft.h"

int	ft_atoi(const char *s)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	if (!s)
		return (res);
	while (s[i] && (s[i] < 33 || s[i] == 43 || s[i] == 45))
	{
		if (s[i] == 45)
			sign *= -1;
		i++;
	}
	while (s[i] > 47 && s[i] < 58)
		res = res * 10 + s[i++] - '0';
	return (res * sign);
}
/*
#include <stdio.h>

int main(int d, char **y)
{
	d++;
	printf("%d\n",ft_atoi(y[1]));
}*/