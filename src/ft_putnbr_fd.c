#include "libft.h"

/**
 * @brief Writes the number 'n' to the file descriptor specified in 'fd'.
 * 
 * @param n an integer
 * @param fd a file descriptor in which to write the string
 */
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	number = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = n * -1;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	ft_putchar_fd(number % 10 + '0', fd);
}
