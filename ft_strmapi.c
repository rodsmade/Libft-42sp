#include "libft.h"

/**
 * @brief Iteratively applies the function 'f' to each character of the string
 * 's' passed in as an argument and creates a new string (with malloc(3)) that
 * is the result of successive applications of 'f'.
 * E.g.: ft_strmapi("hello world!", to_uppercase) returns a malloc'd pointer to
 * the string "HELLO WORLD!".
 * 
 * @param s The string used as base for the transformation.
 * @param f The function that provides the transformation rule.
 * @return char* A malloc'd string containing the resulting transformation of s.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	length;
	char	*result;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	result = malloc((length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[length] = '\0';
	while (length > 0)
	{
		result[length - 1] = f(length - 1, s[length - 1]);
		length--;
	}
	return (result);
}
