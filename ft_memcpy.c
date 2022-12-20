#include "libft.h"

/**
 * @brief copies n bytes from memory area src to memory area dest. The memory
 * areas must not overlap.
 * 
 * @param dest destination string to which the values will be copied.
 * @param src source string from which the values will be copied.
 * @param n max number of chars that must be copied.
 * @return void* a pointer to 'dest'.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}
