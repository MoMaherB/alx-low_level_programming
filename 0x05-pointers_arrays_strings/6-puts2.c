#include "main.h"

/**
 * puts2 - function thatakes a pointer to an int parametr
 *
 *@str: ...do somthing
 *
 * Return: length
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
