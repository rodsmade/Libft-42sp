#include "libft.h"

/**
 * @brief Copies no more than 'n' bytes from memory area 'src' to memory area
 * 'dest', stopping when the character 'c' is found.
 * 
 * @param dest destination memory area that will receive the copied characters.
 * @param src source memory area from which characters will be copied.
 * @param c delimiter char to stop the copy process if encountered.
 * @param n max number of chars that must be copied.
 * @return void* a pointer to the next character in 'dest' after 'c', or NULL
 * if 'c' was not found in the first 'n' characters of 'src'.
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		if (((unsigned char *) src)[i] == (unsigned char) c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
