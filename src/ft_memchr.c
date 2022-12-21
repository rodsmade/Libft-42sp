#include "libft.h"

/**
 * @brief Scans the initial 'n' bytes of the memory area pointed to by 's'
 * for the first instance of 'c'. Both 'c' and the bytes of the memory area
 * pointed to by 's' are interpreted as unsigned char.
 * 
 * @param s string to be scanned.
 * @param c a char to be looked for.
 * @param n max bytes of memory where the search will be conducted.
 * @return void* a pointer to the matching byte or NULL if the character does
 * 	not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*haystack;
	unsigned char	needle;

	i = 0;
	haystack = (unsigned char *) s;
	needle = (unsigned char) c;
	while (i < n)
	{
		if (haystack[i] == needle)
			return ((void *) haystack + i);
		i++;
	}
	return (NULL);
}
