#include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings, or NULL on failure.
 */

char **strtow(char *str)
{
	int i, j = 0, k, len;
	char **word_array;
	int words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_words(str);

	if (words == 0)
		return (NULL);

	*word_array = malloc(sizeof(char *) * (words + 1));

	if (word_array == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (str[j] == ' ')
			j++;

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;

		word_array[i] = malloc(sizeof(char) * (len + 1));
		if (word_array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(word_array[k]);

			free(word_array);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			word_array[i][k] = str[j + k];
		word_array[i][len] = '\0';

		j += len;
	}
	word_array[i] = NULL;

	return (word_array);
}
