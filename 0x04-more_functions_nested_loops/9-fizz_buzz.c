#include "main.h"

/**
 * main - Entry point
 *
 * Description: A Fizz Buzz Program
 *
 * Return: fizz Buzz
*/

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3 == 0) && !(count % 15 == 0))
			printf("Fizz");
		else if ((count % 5 == 0) && !(count % 13 == 0))
			printf("Buzz");
		else if (count % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", count);
		if (count != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
