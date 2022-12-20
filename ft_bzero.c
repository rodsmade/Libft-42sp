#include "libft.h"

/**
 * @brief Sets the first 'n' chars of a string 's' to zero ('\0').
 * 
 * @param s a string
 * @param n amount of chars to be set to '\0'.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*c;

	i = 0;
	c = (char *) s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
	return ;
}
