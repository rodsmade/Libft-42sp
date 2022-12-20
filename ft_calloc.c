#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) 'nmemb' times 'size' bytes in heap
 * and sets all bytes to '\0'.
 * 
 * @param nmemb number of elements to be allocated
 * @param size size of each element in bytes
 * @return void* a pointer to the allocated memory, all bytes set to '\0'
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocd_mem;

	allocd_mem = (void *) malloc (nmemb * size);
	if (allocd_mem == NULL)
		return (NULL);
	ft_bzero(allocd_mem, nmemb * size);
	return (allocd_mem);
}
