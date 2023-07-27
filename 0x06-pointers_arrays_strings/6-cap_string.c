#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - function that takes a pointer to an int parametr
 *
 *@str: ...do somthing
 *
 * Return: str
 */

char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	if (islower(str[i]))
		str[i] = toupper(str[i]);

	while (str[i] != '\0')
	{
		if (strchr(separators, str[i]) != NULL)
		{
			i++;
			if (islower(str[i]))
				str[i] = toupper(str[i]);
		}
		else
		{
			i++;
		}
	}
	return (str);
}
