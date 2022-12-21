#include "libft.h"

/**
 * @brief Copies up to size - 1 characters from 'src' into the buffer 'dst' and
 * guarantees to NUL-terminate the result. Both 'src' and 'dst' must be true C
 * strings, that is, NUL-terminated.
 * 
* @param dst a destination string to which chars will be appended,
 * NUL-terminated.
 * @param src a source string from which chars will be copied, NUL-terminated.
 * @param size the amount of chars of 'src' to be copied into 'dst', including
 * the terminating '\0'.
 * @return size_t the total length of the string the function tried to create,
 * in this case, the length of 'src'.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
