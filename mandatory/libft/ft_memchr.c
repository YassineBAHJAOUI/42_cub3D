
#include "../headers/libft.h"

/**
 * Searches for the first occurrence of a byte in a memory area.
 *
 * @param str  The memory area to search in.
 * @param c    The byte to search for.
 * @param n    The number of bytes to search.
 * @return     A pointer to the first occurrence of the byte, or NULL
 * if not found.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
