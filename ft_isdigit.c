/**
 * @brief Decides whether the character 'c' is a digit as per the ASCII table.
 * 
 * @param c a char.
 * @return int 1 if it is, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
