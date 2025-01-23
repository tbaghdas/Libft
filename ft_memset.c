/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:52:50 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/01/23 23:44:19 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, unsigned long num)
{
	if (ptr)
	{
		while (num)
		{
			num[(unsigned char *)ptr] = (unsigned char)value;
			num--;
		}
	}
	return (ptr);
}
