/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:06:58 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/02/09 18:34:16 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(char const *s, char c)
{
	char	flag;
	int		count;
	int		i;

	i = 0;
	count = 0;
	flag = -1;
	while (s[i])
	{
		if (i++[s] == c && flag != -1)
		{
			if (!flag)
				flag = 1;
		}
		else if (flag)
		{
			count++;
			flag = 0;
		}
		else
			flag = 0;
	}
	return (count);
}

static int	get_size(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i[s] && i++[s] != c)
		++count;
	return (count);
}

static void	gen_strs(char **strs, char const *s, char c, int *arr)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (s[i] && arr[1] < arr[0])
	{
		if (s[i] == c || arr[1] == -1)
		{
			if (arr[1] == arr[0] - 1)
				break ;
			while (s[i] == c)
				++i;
			if (arr[1] != -1)
				strs[arr[1]][k] = '\0';
			k = 0;
			strs[++arr[1]] = (char *) malloc(
					(get_size(s + i, c) + 1) * sizeof(char));
			if (!strs[arr[1]])
				strs = NULL;
		}
		strs[arr[1]][k++] = s[i++];
	}
	strs[++arr[1]] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		count;
	int		arr[2];

	arr[1] = -1;
	if (!s)
		return (NULL);
	count = words_count(s, c);
	strs = (char **) malloc((count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	arr[0] = count;
	gen_strs(strs, s, c, arr);
	return (strs);
}
/*
#include <stdio.h>

int	main(int c, char **a)
{}/*
	c++;
	char **j = ft_split(a[1], a[2][0]);
	for(int i = 0;j[i];i++){
		printf("%s\n", j[i]);
	}
}*/
