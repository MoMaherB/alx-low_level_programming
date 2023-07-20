#include "main.h"
#include <stdio.h>

/**
 *largest_prime_factor - dd
 *
 *@num: ddd
 *
 *Return: kkk
 */

long long largest_prime_factor(long long num)
{
	long long largest_factor = 0;
	/*Divide by 2 repeatedly until it's not divisible by 2*/
	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}
	/*Now check for other odd prime factors*/
	for (long long i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}
	/* If num is still greater than 2, it is a prime factor itself*/
	if (num > 2)
	{
		largest_factor = num;
	}
	return (largest_factor);
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
	long long number = 612852475143;
	long long largest_prime = largest_prime_factor(number);

	printf("%lld\n", largest_prime);
	return (0);
}
