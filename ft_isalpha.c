/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:30:25 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/01/21 22:49:05 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int s)
{
	return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%d\n%d\n", ft_isalpha(68), isalpha(68));

	printf("%d\n%d\n", ft_isalpha(13), isalpha(13));

	printf("%d\n%d\n", ft_isalpha(145), isalpha(145));
	printf("%d\n%d\n", ft_isalpha(-7), isalpha(-7));
}*/