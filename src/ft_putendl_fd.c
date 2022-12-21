#include "libft.h"

/**
 * @brief Writes the string 's' to the file descriptor specified in 'fd' and
 * writes a new line at the end.
 * 
 * @param s a string
 * @param fd a file descriptor in which to write the string
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
