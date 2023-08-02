#include "main.h"

/**
 * wildcmp_helper - Recursive helper function to compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*')
		{
			return (wildcmp_helper(s1, s2 + 1) || wildcmp_helper(s1 + 1, s2));
		}
		else
		{
			return (wildcmp_helper(s1 + 1, s2 + 1));
		}
	}

	return (0);
}
/**
 * wildcmp - Function to compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
