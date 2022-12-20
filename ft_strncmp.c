#include "libft.h"

/**
 * @brief Compares the first 'n' bytes of two strings 's1' and 's2' and decide
 * whether they are equal or not. Both must be true C strings, that is, '\0'-
 * terminated.
 * 
 * @param s1 a string.
 * @param s2 another string.
 * @param n the max amount of bytes to be compared in both strings.
 * @return int if the strings are the same, 0 is returned, otherwise the
 * difference between s1 and s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
