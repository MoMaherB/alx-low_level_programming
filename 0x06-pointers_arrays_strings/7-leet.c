#include "main.h"

/**
 * leet  - function that takes a pointer to an int parametr
 *
 *@str: ...do somthing
 *
 * Return: str
 */

char *leet(char *str)
{
	char *letters = "aeotlAEOTL";
	char *leet_codes = "4307104310";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_codes[j];
				break;
			}
		}
	}
	return (str);
}
