#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	len;

	len = nmemb * size;
	mem = malloc(len);
	if (mem)
		ft_bzero(mem, len);
	return (mem);
}
