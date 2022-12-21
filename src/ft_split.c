#include "libft.h"

static int	count_words(const char *s, char delimiter)
{
	size_t	words;

	words = 0;
	if (*s == '\0')
		return (words);
	if (delimiter == '\0')
		return (1);
	while (*s == delimiter && *s)
		s++;
	while (*s)
	{
		words++;
		while (*s != delimiter && *s)
			s++;
		while (*s == delimiter && *s)
			s++;
	}
	return (words);
}

void	*rollback(char **morsels)
{
	while (*morsels)
		free(*morsels);
	free(morsels);
	return (NULL);
}

char	**write_words(char **morsels, const char *s, char delimiter)
{
	size_t	length;
	size_t	i;

	i = 0;
	while (*s)
	{
		length = 0;
		while (s[length] != delimiter && s[length])
			length++;
		morsels[i] = (char *) malloc(length * sizeof(char) + 1);
		if (morsels[i] == NULL)
			return (rollback(morsels));
		morsels[i][length] = '\0';
		while (length > 0)
		{
			morsels[i][length - 1] = s[length - 1];
			length--;
		}
		while (*s != delimiter && *s)
			s++;
		while (*s == delimiter && *s)
			s++;
		i++;
	}
	return (morsels);
}

/**
 * @brief Allocates memory (with malloc(3)) and returns an array of strings
 * that is the result of splitting the original string 's' at every occurrence
 * of the delimiting character 'c'. The table is NULL-terminated.
 * E.g.: ft_split("Hello world, how is it going?", ' ') returns the following
 * array of strings:
 * { "Hello", "world,", "how", "is", "it", "going?", NULL }
 * 
 * @param s A string to be split in smaller strings
 * @param c The delimiter character that marks the splitting points
 * @return char** A NULL-terminated malloc'd array of strings as the result of the
 * 	splitting process.
 */
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	word_count;

	word_count = count_words(s, c);
	arr = (char **) malloc((word_count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*s == c && *s)
		s++;
	arr = write_words(arr, s, c);
	arr[word_count] = NULL;
	return (arr);
}
