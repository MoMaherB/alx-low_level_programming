#include <stdio>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Positive or negative
 *
 * Return: 0 (success)
*/

void print_alphabet(void) 
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(ch);

}
