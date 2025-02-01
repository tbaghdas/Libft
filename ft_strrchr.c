/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:32:54 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/02/01 22:43:14 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*last;
	char	*loc;

	loc = strchr(s, c);
	last = loc;
	while (loc)
	{
		last = loc;
		loc = strchr(loc + 1, c);
	}
	return (last);
}
