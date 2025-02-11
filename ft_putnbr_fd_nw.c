#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	while (nb / 10)
	{
		ft_putchar_fd(nb / 10 + '0', fd);
		nb /= 10;
	}
	ft_putchar_fd(nb + '0', fd);
}
