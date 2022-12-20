#include "libft.h"

/**
 * @brief Locates a substring 'needle' within the first 'len' bytes of the
 * 'haystack' string.
 * 
 * @param haystack a string to be searched through.
 * @param needle a substring to be located in 'haystack'.
 * @param len the most chars in 'haystack' to try and locate 'needle'.
 * @return char* a pointer to the position where substring 'needle' was first
 * found in 'haystack', or NULL if it has not been found within the first 'n'
 * characters of 'haystack'.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) &(haystack[i]));
			else if (needle[j] != haystack[i + j] || haystack[i + j] == '\0')
				break ;
		}
		i++;
	}
	return (NULL);
}
