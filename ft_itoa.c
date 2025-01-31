/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:47:12 by btigran           #+#    #+#             */
/*   Updated: 2025/01/31 21:37:48 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	long	nb;

	count = 2;
	if (n < 0)
		count++;
	nb = n;
	while (n / 10)
	{
		++count;
		n /= 10;
	}
	str = (char *) malloc(count-- * sizeof(char));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb / 10)
	{
		str[count--] = nb % 10 + '0';
		nb /= 10;
	}
	str[count] = nb;
	return (str);
}


int main()
{
	int u;
	scanf("%d", &u);
	printf("%s\n%d\n", ft_itoa(u), u);
}