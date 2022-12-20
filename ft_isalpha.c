/**
 * @brief Decides whether the character 'c' is a letter of the alphabet
 * as per the ASCII table.
 * 
 * @param c a char.
 * @return int 1 if upper case, 2 if lower case, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else if ((c >= 'a' && c <= 'z'))
		return (2);
	else
		return (0);
}
