#include "libft.h"

/**
 * @brief Reverse-searches for substring 'needle' within the last 'len' bytes
 * of the 'haystack' string.
 * 
 * @param haystack a string to be searched through.
 * @param needle a substring to be located in 'haystack'.
 * @param len the most chars counting from the end of 'haystack' backwards,
 * to try and locate 'needle'.
 * @return char* a pointer to the position where substring 'needle' was first
 * found in a backwards search in 'haystack', or NULL if it has not been found
 * whatsoever.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen(s);
	while (length >= 0)
	{
		if (s[length] == (unsigned char) c)
			return ((char *) s + length);
		length--;
	}
	return (NULL);
}
