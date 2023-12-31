
#include "../headers/libft.h"

/**
 * Count the number of words in a string based on a specified delimiter
 * character.
 *
 * @param str The input string.
 * @param c   The delimiter character.
 *
 * @return The number of words in the string.
 */
int	ft_wordcount(const char *str, char c)
{
	int	i;
	int	wdcount;

	i = 0;
	wdcount = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			wdcount++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (wdcount);
}
