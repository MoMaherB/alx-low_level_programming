#include "main.h"
#include <string.h>

/**
 * string_nconcat - The function
 *
 *@s1: first string
 *@s2: second string
 *@n: the number of nconcat
 *Return: NULL or size
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int i, j;
	char *concat = (char *)malloc(l1 + n + 1);

	if (n >= l2)
	{
		n = l2;
	}
	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i < l1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[l1 + j] = s2[j];
	}
	concat[l1 + n] = '\0';

	return (concat);
}
