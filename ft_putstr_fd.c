#include "libft.h"

/**
 * @brief Writes the string 's' to the file descriptor specified in 'fd'.
 * 
 * @param s a string
 * @param fd a file descriptor in which to write the string
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
