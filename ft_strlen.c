/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:21:45 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/01/12 17:43:05 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (i[str])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = {'g', 'h', 'f', 'd', '\0'};
	//char* str = NULL;
	//printf("%dkk", ft_strlen(str));
	
	printf("ft: %d\nstd: %lu\n", ft_strlen(str), strlen(str));
}*/