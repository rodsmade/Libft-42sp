/**
 * @brief Transforms a lower case char to upper case, as per the ASCII table.
 * 
 * @param c a char
 * @return int the converted char, where possible.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
