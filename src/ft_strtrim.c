#include "libft.h"

/**
 * @brief Allocates memory (with malloc(3)) and returns a copy of the string
 * 's1' stripped at both ends of the characters specified in 'set'.
 * E.g.: ft_strtrim("Hello world!", "!elHd") returns a malloc'd char pointer
 * containing the string "o wor", that is, stripped of "Hell" from the beginning
 * and "ld!" from the end of the original string.
 * 
 * @param s1 The original string to be trimmed.
 * @param set The set of chars that must be trimmed, left and right.
 * @return char* A malloc'd string containing the trimmed original string
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i - 1]) && i)
		i--;
	return (ft_substr(s1, 0, i));
}
