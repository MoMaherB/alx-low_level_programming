#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - Checks if a character is lowercase.
 *
 * @n: The character to be checked.
 *
 * Return: abs(int).
*/
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
