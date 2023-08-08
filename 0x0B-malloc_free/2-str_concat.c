#include "main.h"

/**
 * str_concat - creates arry of charachters
 *
 * @s1: First charchter
 * @s2: Second charachter
 * Return: m or NUll
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, j;
	int size1 = 0, size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}

	m = (char *) malloc((size1 + size2 + 1) * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		m[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		m[j + size1] = s2[j];
	}
	m[size1 + size2] = "\0";
	return (m);
}
