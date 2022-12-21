#include "libft.h"

/**
 * @brief Iteratively applies the function 'f' to each character of the string
 * 's' passed in as an argument, transforming its contents.
 * E.g.: assuming char *s = "hello world!", ft_striteri(s, to_uppercase)
 * changes the contents of string 's' to "HELLO WORLD!".
 * 
 * @param s The string used as base for the transformation.
 * @param f The function that provides the transformation rule.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == NULL)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
	return ;
}
