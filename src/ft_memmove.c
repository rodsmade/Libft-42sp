#include "libft.h"

/**
 * @brief copies 'n' bytes from memory area 'src' to memory area dest.
 * The memory areas may overlap: copying takes place as though the bytes in
 * 'src' are first copied into a temporary array that does not overlap 'src' or
 * 'dest', and the bytes are then copied from the temporary array to 'dest'.
 * 
 * @param dest destination string to which the values will be copied.
 * @param src source string from which the values will be copied.
 * @param n max number of chars that must be copied.
 * @return void* a pointer to 'dest'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((char *) dest)[i - 1] = ((char *) src)[i - 1];
			i--;
		}
	}
	return (dest);
}
