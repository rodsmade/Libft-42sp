#include "libft.h"

/**
 * @brief Counts how many bytes there are in 's' before a '\0' can be found.
 * 
 * @param s a truc C string, that is, terminated by '\0'.
 * @return size_t the amount of chars contained in 's'.
 */
size_t	ft_strlen(const char *s)
{
	int	qtd_caracteres;

	qtd_caracteres = 0;
	while (*s)
	{
		qtd_caracteres++;
		s++;
	}
	return (qtd_caracteres);
}
