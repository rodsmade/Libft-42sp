#include "libft.h"

/**
 * @brief Writes the character 'c' to the file descriptor specified in 'fd'.
 * 
 * @param c a char
 * @param fd a file descriptor in which to write the char
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
