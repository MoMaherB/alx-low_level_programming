#include "main.h"

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 *
 * Description: The function p.
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return ();
	}

	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
					printf("%c", b[j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
