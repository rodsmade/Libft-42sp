/**
 * @brief Decides whether the character 'c' is in the ASCII table.
 * 
 * @param c a char.
 * @return int 0 if not, 1 otherwise.
 */
int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
