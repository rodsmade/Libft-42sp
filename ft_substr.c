#include "libft.h"

/**
 * @brief Returns a substring from the original string 's' with the specified
 * starting point and max amount of copied characters.
 * E.g.:
 * 		ft_substr("Hello world!", 6, 5) returns a malloc'd char pointer that
 * contains the string "world".
 * 
 * @param s The original string to copy a substring from.
 * @param start The index marking the starting point of the copy process.
 * @param len The amount of chars to be copied.
 * @return char* A malloc'd string containing the resulting substring.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	length_s;
	size_t	i;

	length_s = ft_strlen(s);
	if (start >= length_s)
		return (ft_strdup(""));
	if (length_s - start < len)
		len = length_s - start;
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = -1;
	while (s[++i + start] && (i < len))
		substring[i] = s[start + i];
	substring[len] = '\0';
	return (substring);
}
