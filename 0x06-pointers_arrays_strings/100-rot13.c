#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */

char *rot13(char *str)
{
	char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lowercase = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; uppercase[j] != '\0'; j++)
		{
			if (str[i] == uppercase[j])
			{
				str[i] = rot13_upper[j];
				break;
			}
		}

		for (j = 0; lowercase[j] != '\0'; j++)
		{
			if (str[i] == lowercase[j])
			{
				str[i] = rot13_lower[j];
				break;
			}
		}
	}

	return (str);
}
