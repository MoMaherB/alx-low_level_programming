#include "main.h"

/**
 *_print_rev_recursion - function that prints a string i dont know
 *@s: parameter of astring
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
	putchar(*s);
}
