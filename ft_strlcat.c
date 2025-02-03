/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:30:38 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/02/03 21:03:49 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(dst);
	i = 0;
	while (src[i] && len + i - 1 < dstsize - 1)
	{
		dst[len + i - 1] = src[i];
		i++;
	}
	dst[len + i - 1] = '\0';
	return (len + ft_strlen(src));
}
