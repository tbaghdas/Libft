#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (unsigned char *)s;
	while (i[str] && i[str] != c && i < n)
		i++;
	if (c != i[str])
		return (NULL);
	return ((void *)(str + i));
}
