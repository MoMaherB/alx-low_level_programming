#include "main.h"

/**
 * print_array - function atakes a pointer to an int parametr
 *
 *@a: ...do somthing
 *@n: gogogog
 * Return: length
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
