#include "main.h"
#include <stdio.h>

/**
 *largest_prime_factor - dd
 *
 *@num: ddd
 *
 *Return: kkk
 */

void largest_prime_factor(long int num)
{
	int i;
	int largest_factor = 0;

	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		largest_factor = num;
	}
	printf("%d\n", largest_factor);
}

/**
 * main - Entry point
 *
 * Description: A Fizz Buzz Program
 *
 * Return: fizz Buzz
*/

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
