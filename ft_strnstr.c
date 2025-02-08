/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:07:19 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/02/08 18:01:04 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;
	size_t	tmp;

	if (!haystack || !needle)
		return (NULL);
	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	len_needle = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		while (haystack[i] != needle[0] && haystack[i] && i < len)
			i++;
		if (len - i + 1 < len_needle)
			return (NULL);
		tmp = len_needle;
		if (len_needle > len - i)
			tmp = len - i;
		if (!ft_strncmp(&haystack[i], needle, tmp))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
}*/