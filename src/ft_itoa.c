#include "libft.h"

static size_t	is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static size_t	count_digits(size_t n)
{
	unsigned int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

/**
 * @brief Takes in an int and parses it into a string using malloc(3).
 * E.g.: ft_itoa(-42) returns "-42".
 * 
 * @param n The int to be stringified.
 * @return char* The resulting malloc'd string. Upon error, returns NULL.
 */
char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	negative;
	long int		number;
	unsigned int	digits;

	negative = is_negative(n);
	number = n;
	if (negative == 1)
		number *= -1;
	digits = count_digits(number);
	result = (char *)malloc(digits + negative + 1);
	if (result == NULL)
		return (NULL);
	if (negative == 1)
		result[0] = '-';
	result[digits + negative] = '\0';
	while (digits > 0)
	{
		result[(digits - 1) + negative] = (number % 10) + '0';
		number /= 10;
		digits--;
	}
	return (result);
}
