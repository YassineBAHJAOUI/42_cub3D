
#include "../headers/libft.h"

/**
 * Converts a string representation of an integer to its corresponding
 * integer value.
 *
 * @param str The string to convert to an integer.
 * @return The converted integer value.
 */
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(((int)*str)))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
