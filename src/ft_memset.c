#include "libft.h"

/**
 * @brief Fills the first 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'c'.
 * 
 * @param s a sequential memory area.
 * @param c the char to set the bytes of the memory area 's' to.
 * @param n the number of bytes of 's' to be set to 'c'
 * @return void* a pointer to the memory area 's'.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*cptr;

	i = 0;
	cptr = (char *) s;
	while (i < n)
	{
		cptr[i] = c;
		i++;
	}
	return ((void *) cptr);
}
