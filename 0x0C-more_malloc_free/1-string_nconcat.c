#include "main.h"
#include <string.h>

/**
 * string_nconcat - The function
 *@s1: first string
 *@s2: second string
 *@n: the number of nconcat
 *Return:NULL or concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	concat = malloc(len1 + n + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[len1 + j] = s2[j];
	}
	concat[len1 + n] = '\0';
	return (concat);
}
