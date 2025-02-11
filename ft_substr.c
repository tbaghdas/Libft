/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:32:10 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/02/12 00:21:33 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	length;

	if (!s && !s[0])
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		return (sub_s = (char *) malloc(sizeof(char)), sub_s[0] = '\0', sub_s);
	if (start + len > length)
		len = length - start;
	sub_s = (char *) malloc((len + 1) * sizeof(char));
	if (!sub_s)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
