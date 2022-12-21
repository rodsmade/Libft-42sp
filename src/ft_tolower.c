/**
 * @brief Transforms an upper case char to lower case, as per the ASCII table.
 * 
 * @param c a char
 * @return int the converted char, where possible.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
