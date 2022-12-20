#include "libft.h"

/**
 * @brief Duplicates (using malloc(3)) the contents of a string 's'.
 * 
 * @param s a string.
 * @return char* a pointer to the duplicate string.
 */
char	*ft_strdup(const char *s)
{
	unsigned int	strlength;
	char			*newstr;

	strlength = ft_strlen(s);
	newstr = ft_calloc((strlength + 1), sizeof(const char));
	if (newstr == NULL)
		return (NULL);
	newstr = ft_memcpy(newstr, s, strlength);
	return (newstr);
}
