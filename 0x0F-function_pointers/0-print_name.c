#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as an argument.
 *
 * This function takes a name and a function pointer as arguments.
 * It calls the provided function with the name as an argument,
 * allowing the provided function to perform the printing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
