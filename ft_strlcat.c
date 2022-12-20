#include "libft.h"

/**
 * @brief Appends the contents of 'src' into 'dst' so that the final length of
 * the operation is at most 'size' bytes, and guarantees to NUL-terminate
 * the result. Note that one byte for the '\0' should be included in 'size'.
 * Both 'src' and 'dst' must be true C strings, that is, NUL-terminated.
 * 
 * @param dst a destination string to which chars will be appended,
 * NUL-terminated.
 * @param src a source string from which chars will be copied, NUL-terminated.
 * @param size the total size of the expected resulting string, '\0' included.
 * @return size_t the total length of the string the function tried to create,
 * in this case, the length of 'dest' plus the length of 'src'.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = 0;
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	i = 0;
	if (dstlen < size)
	{
		while ((i + dstlen) < (size - 1) && src[i])
		{
			dst[i + dstlen] = src[i];
			i++;
		}
		dst[i + dstlen] = '\0';
	}
	return (dstlen + srclen);
}
