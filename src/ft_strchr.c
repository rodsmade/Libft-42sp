#include "libft.h"

/**
 * @brief Returns a pointer to the first occurrence of the character 'c'
 * in the string 's'.
 * 
 * @param s a string.
 * @param c a char to be searched for in 's'.
 * @return char* a pointer to the first ocurrence of 'c' in 's', or NULL if 'c'
 * is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (unsigned char) c)
		return ((char *)s + i);
	return (NULL);
}
