#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	if (!haystack || !needle)
		return (NULL);
	if (!needle[0])
		return (haystack);
	i = 0;
	len_needle = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		while (haystack[i] != needle[0] && haystack[i] && i < len)
			i++;
		if (len - i >= len_needle)
		{
			if (!ft_strncmp(&haystack[i], needle, len - i))
				return (&haystack[i]);
		}
		else
			return (NULL);
		i++;
	}
	return (NULL);
}
